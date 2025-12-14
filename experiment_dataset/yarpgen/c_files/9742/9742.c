/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_7, var_6));
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = ((-(arr_1 [i_0] [i_0])));
        var_13 *= (!var_2);
        var_14 += (arr_1 [i_0] [i_0]);
        var_15 ^= 1261039747;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 ^= arr_2 [i_2] [i_1];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (((max(((!(arr_6 [i_1] [1] [i_1]))), (1261039723 || -1261039747))) && 0));
                                arr_11 [i_1] [i_4] = ((-(arr_2 [i_2] [11])));
                                arr_12 [i_4] [i_4] [i_4] = (((((-61 ? ((18446744073709551615 ? (arr_1 [i_0] [6]) : (arr_0 [i_0]))) : (((-(arr_5 [i_4] [i_1 + 1] [i_0]))))))) ? (min(10, (arr_1 [i_3] [i_0]))) : (((~(arr_5 [i_1 - 1] [i_1] [6]))))));
                                arr_13 [6] [6] [6] [i_4] [i_3] [i_4] = ((((((((arr_10 [i_4] [i_1 + 2] [i_2] [4] [i_4]) ? 157 : var_3)) <= (((min((arr_5 [i_1] [i_3] [i_4]), (-32767 - 1)))))))) * (arr_7 [i_1] [i_2] [i_3] [i_4])));
                            }
                        }
                    }
                    var_18 = ((((~(~var_3))) ^ (((~((~(arr_2 [i_0] [i_2]))))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_19 += ((((arr_16 [i_5]) / (arr_0 [i_5]))));
        arr_18 [i_5] [i_5] = (max(((((arr_4 [i_5] [i_5] [i_5]) ? (arr_4 [i_5] [i_5] [4]) : (arr_4 [i_5] [i_5] [i_5])))), ((var_1 ? (arr_14 [i_5] [i_5]) : (arr_8 [i_5] [14] [i_5] [14])))));
    }
    #pragma endscop
}
