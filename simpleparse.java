import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;

class simpleparse
{

	public static void main(String[] args)
	{

		try
		{

			FileReader file = new FileReader("simpleparse.txt");
			BufferedReader reader = new BufferedReader(file);	

			String line = reader.readLine();
			while (line != null)
			{
				
				String[] input = line.split(" ");
				int[] array = new int[input.length];

				for (int i=0;i<input.length;i++)
				{

					array[i] = Integer.parseInt(input[i]);

				}

				int sum=0;
				for (int j=0;j<array.length;j++)
				{
	
					sum += array[j];

				}

				System.out.println(sum);
				line = reader.readLine();

			}

			file.close();
			reader.close();

		}
		catch (IOException e)
		{

			e.printStackTrace();

		}
	
	}

}