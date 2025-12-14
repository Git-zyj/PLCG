/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-var_3 ? var_9 : var_18));
    var_20 = ((3071710012 ? -5805330081555626196 : 37));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_21 = (arr_2 [i_0]);
        var_22 = 5805330081555626195;

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_0] [i_1 - 1] |= (max((arr_4 [i_0] [i_1] [i_1]), (min((arr_0 [i_0]), var_14))));
            arr_8 [i_0] = (arr_4 [i_0] [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_23 = ((~(((arr_10 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2])))));
        arr_11 [i_2] = (5805330081555626195 && 2255243570);
        arr_12 [i_2] [i_2] = (((arr_9 [i_2]) <= (arr_10 [i_2])));
        var_24 = ((~(arr_9 [i_2])));
    }
    #pragma endscop
}
