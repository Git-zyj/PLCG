/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (((!-4) < (18446744073709551615 / 60)));
    var_21 = (max(var_21, (((var_19 > (((18892 << (((-18895 + 18914) - 8))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_22 = ((~(arr_0 [i_3 - 1])));
                            var_23 *= 4840605315649951201;
                            var_24 = ((((((arr_5 [i_2]) ? (arr_8 [i_0] [i_1] [i_3 + 2] [1] [6]) : 2601))) && (((var_5 ? (((arr_5 [i_0]) / (arr_6 [i_0] [i_2] [i_3]))) : (56 / 6))))));
                            var_25 -= ((~(arr_5 [i_0])));
                        }
                    }
                }
                var_26 = (((!4294967295) ? (arr_4 [5]) : ((((arr_4 [i_0]) || ((min(4, var_15))))))));
                var_27 = (min(var_27, ((((((arr_4 [i_0]) && (arr_2 [i_0] [i_1]))) && (arr_5 [i_0]))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_11 [i_4] = (min(18884, 18869));
        var_28 = (min(18873, ((((((41852 ? 6152014614935675518 : (arr_2 [19] [i_4])))) && (arr_9 [i_4]))))));
    }
    for (int i_5 = 4; i_5 < 9;i_5 += 1)
    {
        var_29 = (min(var_29, (0 | -9914)));
        arr_14 [i_5] = ((~(((!(arr_1 [i_5 - 4]))))));
        arr_15 [i_5] [i_5] = -17;
        var_30 = (max(var_30, (((((((arr_4 [i_5 - 3]) ? (((arr_1 [i_5]) << (18894 - 18893))) : (var_0 > 1)))) && -var_12)))));
    }
    #pragma endscop
}
