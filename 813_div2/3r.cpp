   static void solve3() {
        int n = sc.nextInt();
        int arr[]= sc.readIntArray(n);
        int ind = -1;
        HashSet<Integer> set = new HashSet<>();
        for(int i = n-2;i>=0;i--){
            if(arr[i]>arr[i+1]){
                ind = i;
                break;
            }
        }
        for(int i = 0;i<=ind;i++){
            set.add(arr[i]);
        }
        for(int i = ind+1;i<n;i++){
            if(set.contains(arr[i])){
                ind = i;
            }
        }
        set.clear();
        for(int i = 0;i<=ind;i++) set.add(arr[i]);
        out.println(set.size());
    }