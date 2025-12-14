/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(((2107269168321251201 ? (max(var_7, var_6)) : (((var_11 ? -1203752551 : 1))))), 1203752550);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = 65535;
                    arr_10 [i_1] [i_1] [i_1] = (((arr_7 [i_1] [i_1] [i_2] [i_1]) / (((arr_7 [i_1] [i_1] [i_1] [i_2]) ? (arr_4 [i_0] [i_1]) : 3851816760))));
                    arr_11 [i_0] [i_0] [i_0] [i_1] = -1004073374025408839;
                }
            }
        }
    }
    #pragma endscop
}
