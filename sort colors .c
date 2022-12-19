void swap(int *p1,int *p2)
{
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
}

void sortColors(int* arr, int n)
{
      int i=0,zi=0,ti=n-1;
      while(i<=ti)
      {
          if(arr[i]==0)
          {
              swap(&arr[i++],&arr[zi++]);
          }
          else if(arr[i]==1)
          {
              i++;
          }
          else
          {
              swap(&arr[i],&arr[ti--]);
          }

      }
    
}
