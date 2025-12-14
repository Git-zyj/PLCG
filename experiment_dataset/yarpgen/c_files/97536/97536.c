/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 17178820608;
    var_18 = var_6;
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_8 [7] [13] [i_2] [i_1] = ((!(((-(arr_0 [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (arr_7 [i_0]);
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [6] = ((!((((arr_7 [i_0]) ? (arr_7 [i_0]) : (arr_7 [i_4]))))));
                            }
                        }
                    }
                    var_21 = ((65518 | (((arr_0 [i_2]) * 4283267249))));
                    var_22 = (max((((var_6 <= (arr_2 [i_1] [i_2])))), (((((-113 ? (arr_6 [i_0]) : var_10))) ? (((-(arr_11 [i_0] [i_1] [i_2])))) : 4283267249))));
                    arr_14 [i_0] [9] = (max((arr_7 [i_0]), (arr_6 [i_1])));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_23 = (min(var_23, (((((((var_1 ? 1390315412356423747 : 65518)) >> (18446744073709551611 - 18446744073709551589))) >> (((!(((~(arr_1 [i_0]))))))))))));
                            var_24 = 22345;
                        }
                    }
                }
                var_25 = var_15;
                var_26 = ((((((max(7105352562861795414, (arr_3 [i_1])))))) * ((((min((arr_4 [i_0] [i_0]), 11700047))) ? (((((arr_10 [i_0] [i_1]) >= var_13)))) : ((-(arr_10 [i_0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
