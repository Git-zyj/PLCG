/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_18 = (max(((var_13 - (arr_5 [i_1] [1]))), var_0));
                        arr_10 [i_0] [i_1] [i_2 + 2] [i_3] = (max(((-(((arr_5 [i_1] [i_3]) ? 0 : 207305599)))), var_10));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = var_2;
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        var_19 *= var_9;
                        var_20 -= (~(((4683634949432860925 ^ 18446744073709551608) ? 2669470386 : (((max(2, -92)))))));
                    }
                    arr_15 [i_0] [i_1] [i_1] = 1127;
                    var_21 = 449071862;
                }
            }
        }
    }
    #pragma endscop
}
