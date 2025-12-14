/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 = (((max(184, 31826))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_16 [i_1] [i_2] [i_1] = ((var_2 <= ((5413900571117010715 % ((-4096 ? 9223372036854775778 : var_0))))));
                                var_12 = ((var_9 ? ((((1 % 138) > var_7))) : ((~(arr_12 [i_3 + 1] [i_1] [i_0 - 2])))));
                                arr_17 [20] [20] [20] [i_3] [i_2] &= (((min((arr_4 [i_3 - 1] [i_0 - 1] [i_0 + 1]), (arr_4 [i_3 - 3] [i_0 - 2] [i_0 - 2])))) || (arr_8 [i_0 - 2] [i_3 + 1] [17] [5]));
                                var_13 = (arr_8 [i_0] [i_1] [i_0] [i_1]);
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 19;i_5 += 1)
                            {
                                var_14 = (((arr_14 [i_0 - 1] [1] [1] [i_0] [i_0 - 2]) < (arr_12 [i_0 - 1] [18] [20])));
                                var_15 = ((!(((var_8 ? (arr_18 [i_0] [i_1] [i_1] [i_0] [i_5]) : 1497973547)))));
                                var_16 = 32767;
                            }
                            var_17 = (min((((arr_6 [i_3 - 1] [i_0 - 1] [17]) ? (arr_18 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_3]) : (arr_19 [i_1]))), (!var_5)));
                        }
                    }
                }
                var_18 += ((32512 ? 2700398075105010381 : 336778759));
            }
        }
    }
    var_19 = (var_5 | var_5);
    var_20 = var_6;
    #pragma endscop
}
