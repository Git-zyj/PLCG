/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (max((!2), (min(-22977, 22977))));
                    arr_10 [i_0] [i_1] = ((min(((~(arr_1 [i_2]))), ((max(22992, (arr_4 [i_0] [i_1] [i_2])))))));
                    arr_11 [i_1] [i_1] [i_1] = (((22977 != -23004) ? (arr_6 [i_1]) : ((-22968 ? (arr_9 [i_1] [i_2 + 2] [i_2 + 2] [6]) : var_2))));
                    arr_12 [i_0] [i_1] [i_1] [i_0] = (arr_7 [i_2 + 1]);
                    var_20 = 22985;
                }
            }
        }
    }
    #pragma endscop
}
