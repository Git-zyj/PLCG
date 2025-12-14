/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (817033556 ^ 38)));

                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        var_17 -= (1 - var_8);

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_18 = ((1 ? (((arr_13 [i_3] [i_3 - 2] [13] [i_3] [i_3 + 3] [i_3] [i_2]) << (var_8 - 9745444503802824222))) : (((!(arr_5 [i_2] [i_3]))))));
                            var_19 = ((((var_8 && (arr_7 [i_0] [i_0 - 1] [i_0]))) ? ((-(arr_7 [i_0] [i_0 - 1] [i_0 - 1]))) : (((!(arr_7 [i_0] [i_0 - 1] [i_4]))))));
                            var_20 = ((-(((!(8501093905678302233 + 2268781768))))));
                            arr_14 [i_0] [i_0] [i_2] [i_1] [12] [8] &= ((((var_2 ? -774576918 : (((arr_8 [i_0] [i_4] [i_0 - 1]) ? var_4 : var_10)))) > (((~((var_13 ? (arr_7 [i_0] [i_1] [i_2]) : (arr_8 [i_3 + 1] [i_1] [i_1]))))))));
                        }
                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            var_21 = (!8191);
                            var_22 = (((((~38) < -1)) ? 9028 : ((~(1 % 1)))));
                            var_23 &= ((-(var_12 != 56503)));
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_24 = ((41 >> (602633983424587429 - 602633983424587427)));
                        var_25 &= (((((~(arr_12 [i_1] [i_0] [i_0 - 1] [i_0 - 1])))) ? ((55177 ? 1 : 1)) : (!var_5)));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_26 = (min(var_26, (((((-12 || (4294967295 || 25761))) ? (((((var_8 != (arr_6 [10] [15] [i_7])))) ^ 203)) : ((-(134217728 == 223))))))));
                        var_27 = (min(var_27, (((!((((!0) << (-39 + 45)))))))));
                        var_28 = ((~(~9032)));
                        var_29 = (max(var_29, (((!(((+(((arr_9 [i_7] [i_1] [i_1] [i_0]) ^ var_13))))))))));
                    }
                    arr_23 [i_2] [i_0] [i_1] [i_2] = ((((1437083447 ? (arr_12 [i_2] [i_0] [i_0] [i_0 - 1]) : 32)) * ((-(!34096)))));
                }
            }
        }
    }
    #pragma endscop
}
