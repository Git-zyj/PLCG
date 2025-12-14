/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (arr_1 [i_1] [i_1]);
                var_13 = ((var_8 + (((max((arr_1 [i_0] [5]), (arr_2 [i_0 - 1] [i_0])))))));
                var_14 = ((((11 ^ -5288159825676918984) < (((2047898612 ? (arr_1 [i_0 - 1] [i_0 - 1]) : var_3))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = var_0;
                                var_16 = 11769194548877257905;
                                var_17 = 1;
                                var_18 = (max(var_18, ((max(((1 ^ (arr_4 [i_0] [i_0 - 1] [i_0 + 1]))), (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
                                var_19 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_4, var_4));
    #pragma endscop
}
