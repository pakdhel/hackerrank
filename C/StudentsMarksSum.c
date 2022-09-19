//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int total = 0;
  if (gender == 'b')
  {
    for (int i=0;i<number_of_students;i=i+2)
    {
        total = total + marks[i];
    }
  }
  
  else {
    for (int j=1;j<number_of_students;j=j+2)
    {
        total = total + marks[j];
    }
  }
  return total;
}