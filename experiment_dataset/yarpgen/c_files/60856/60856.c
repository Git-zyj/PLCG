/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(((25 ? var_1 : var_8)))));
    var_16 = (min((!var_11), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (min(1, (((arr_3 [i_1 + 2] [i_3 + 1]) >> (var_2 - 190)))));
                                arr_16 [i_0] [i_1] [3] [i_3] [i_2] = var_13;
                                arr_17 [i_2] = ((((((var_5 ? (arr_10 [i_0] [0] [2] [i_2] [i_3] [i_4]) : var_2)) >> (18446744073709551604 - 18446744073709551589)))) ? ((-111 ? (var_10 ^ var_11) : (var_12 || var_2))) : var_8);
                                var_18 = ((((arr_8 [i_0] [i_1 + 4] [i_2]) - ((1 ? (arr_14 [i_2]) : (arr_2 [i_0]))))));
                            }
                        }
                    }
                }
                arr_18 [i_0] = (arr_9 [i_0] [i_0] [8] [i_0]);
                arr_19 [15] = (((((-(arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ^ (max(((max((arr_5 [i_0] [13]), (arr_8 [6] [i_1] [6])))), var_13))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                arr_26 [i_5] [i_5] [i_5] = (!var_0);
                arr_27 [i_5] [i_5] = (((((arr_4 [i_5] [i_5]) ? (min((arr_10 [i_6] [i_6 + 2] [1] [1] [14] [14]), 10875611040484047538)) : ((min(var_0, var_12)))))) ? ((((((arr_0 [i_6 + 1]) ? 8660 : var_0))) ? var_14 : (arr_15 [i_5] [i_6 - 1] [i_5] [i_5]))) : (((((var_13 ^ var_8) >= var_8)))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_19 = (((arr_7 [8]) ? ((((((arr_22 [i_8] [i_6 + 2]) ? var_11 : var_14))))) : ((56885 - ((var_11 ? var_14 : (arr_11 [8] [i_6] [1] [i_8])))))));
                            var_20 = (max(var_20, ((((((((var_9 ? var_8 : (arr_20 [i_6] [i_6 + 1]))) * (!var_5)))) && (((~(arr_25 [i_5] [i_6] [i_7])))))))));
                        }
                    }
                }
            }
        }
    }
    var_21 *= var_14;
    #pragma endscop
}
