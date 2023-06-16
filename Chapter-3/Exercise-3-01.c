// write a version with only one test inside the loop and measure the difference in run-time.
int binsearch(int x, int v[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high && x != v[mid = (low + high) / 2])
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    return x == v[mid] ? mid : -1;
}