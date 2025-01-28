package unl.soc;

import org.joda.time.DateTime;
import org.joda.time.Interval;
import org.joda.time.Period;

/**
 * Author: Alexander Sanderson
 * Date: 2025/1/12
 * 
 * Program for outputting information about the user's birthday
 */
public class Birthday {
	public static void main(String args[]) {

		String name = "Alexander Sanderson";

		int month = 10;
		int date = 24;
		int year = 2005;

		DateTime bday = new DateTime(year, month, date, 0, 0);
		DateTime today = new DateTime();

		Period age = new Period(bday, today);

		int years = age.getYears();
		int months = age.getMonths();
		int days = age.getWeeks() * 7 + age.getDays();

		DateTime nextBday = new DateTime(year + years + 1, month, date, 0, 0);
		Interval daysToNextBdayI = new Interval(today, nextBday);
		double daysRemaining = daysToNextBdayI.toDurationMillis() / (1000 * 60 * 60 * 24) + 1;

		System.out.println("Greetings, " + name + ". Today you are " + years + " years, " + months
				+ " months, and " + days + " days old.");
		if(bday.equals(today)) {
			System.out.println("Happy Birthday");
		} else {
			System.out.println("Your friends have " + daysRemaining + " shopping days until your next birthday");
		}

	}
}
