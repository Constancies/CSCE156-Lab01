package unl.soc;

import java.util.Scanner;

/**
 * A demonstration/driver program that interactively reads input from the user
 * (command line) and computes various statistics on the entered values.
 * 
 * @author cbourke
 *
 */
public class StatisticsDemo {

	public static void main(String args[]) {
		int numOfInts = args.length;
		if(numOfInts < 2) {
			System.out.println("USAGE: StatisticsDemo [number of ints] [int 1] [int 2]...");
			System.exit(1);
		}
		
		int array[] = new int[numOfInts];

		for (int i = 0; i < numOfInts; i++) {
			array[i] = Integer.parseInt(args[i]);
		}
		
		int min = Statistics.getMin(array);
		int max = Statistics.getMax(array);
		int sum = Statistics.getSum(array);
		double ave = Statistics.getAverage(array);

		System.out.println("The sum is " + sum);
		System.out.println("The average is " + ave);
		System.out.println("The highest is " + max);
		System.out.println("The lowest is " + min);

	}
}
