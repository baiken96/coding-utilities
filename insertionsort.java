import java.util.Scanner;

class insertionsort
{

	public static void main(String[] args)
	{

		Scanner scan = new Scanner(System.in);

		System.out.println("Enter the array of integers to sort separated by spaces: ");
		String[] input = scan.nextLine().split(" ");
		int[] n = new int[input.length];
		for (int i=0;i<input.length;i++)
		{
			n[i] = Integer.parseInt(input[i]);
		}
		
		n = insertionSort(n, n.length-1);

		for (int j=0;j<n.length;j++)
		{
			System.out.print(n[j] + " ");
		}

	}

	static int[] insertionSort(int[] arr, int i)
	{

		if (i>0)
		{

			insertionSort(arr, i-1);
			int x=arr[i];
			int j=i-1;
			while (j>=0 && arr[j]>x)
			{

				arr[j+1] = arr[j];
				j = j-1;

			}
			arr[j+1]=x;
			return arr;

		}
		else
			return null;

	}

}