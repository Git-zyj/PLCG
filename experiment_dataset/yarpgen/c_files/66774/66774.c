/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_9, (((var_5 < (var_8 == var_9))))));
    var_11 = (((-32767 - 1) ? 9062542447892935421 : 1023));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = (arr_8 [i_2] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = ((~(arr_2 [i_0] [i_0] [i_0])));
                                arr_16 [10] = (!(arr_7 [i_1] [i_1]));
                                arr_17 [i_1] [i_1] [i_0] [i_3] [i_4] = ((((((-8257536766605995846 ? -3067986515059074745 : 32764)) + 9223372036854775807)) >> (-var_7 + 7826)));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] |= var_2;
                            }
                        }
                    }
                    arr_19 [i_0] &= ((((max(33554431, 1))) ? var_4 : ((-((817633922 ? -14778 : -119))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_13 = (min((((arr_7 [i_0] [i_0]) | (arr_7 [i_1 - 1] [i_1]))), var_7));
                                var_14 = ((~(((min((-32767 - 1), 1023))))));
                                var_15 += (arr_15 [i_6]);
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_16 = var_2;
                    var_17 = (max(var_17, (((((max((arr_11 [i_0] [i_1 + 2] [i_0] [i_1] [i_7] [i_7]), (arr_11 [i_7] [i_1 + 1] [i_1 + 1] [i_0] [i_7] [i_1])))) * ((max(12930, 52393))))))));
                    arr_27 [i_0] [i_1 + 2] [i_7] = (((((min((arr_1 [i_0]), 47417))) ? (((min(var_7, (arr_23 [i_0]))))) : (min(650153146, var_6)))));
                }
                arr_28 [i_1 - 1] = ((-1 <= (arr_2 [i_0] [i_0] [i_0])));
                arr_29 [i_0] [i_0] [i_0] = (~11528);
                var_18 = var_0;
            }
        }
    }
    var_19 = ((!((min(8, (~-31109))))));
    #pragma endscop
}
