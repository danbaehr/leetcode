int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
    if (gasSize != costSize) return -1;
    
    int i, tank = 0, sum = 0, ans = 0;

    for (i = 0; i < gasSize; i++) {
        sum += gas[i] - cost[i];
        tank += gas[i] - cost[i];
        
        /* if sum < 0 then start over */
        if (sum < 0) {
            ans = i + 1;
            sum = 0;
        }
    }

    return tank >= 0 ? ans : -1;
}
