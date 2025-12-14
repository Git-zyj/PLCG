/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [2] [9] [i_0] = ((!((((arr_2 [i_0] [i_1]) & 0)))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_1] [i_1] [i_0] = ((0 ? var_17 : (arr_0 [i_0])));
                        arr_10 [i_0] = var_10;
                        var_18 = 6970940122208814344;
                        var_19 &= (min(((~(((arr_1 [9]) ? (arr_3 [i_0]) : 11475803951500737272)))), -12));
                    }
                    var_20 = (((~var_12) <= (11475803951500737272 + var_6)));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_13 [i_4] [i_0] [i_0] [i_1] [i_0] = ((~((+((var_10 ? (arr_6 [i_0] [i_0]) : (arr_7 [4] [4])))))));
                        arr_14 [i_2] [i_4] |= 11475803951500737272;
                    }
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_17 [i_5] [i_5] &= ((11475803951500737269 && (((-((31457280 ? var_10 : var_13)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_21 = (max((((1208890083 < (max(11475803951500737272, 536870784))))), var_2));
                                var_22 = ((-(((var_4 != (-127 - 1))))));
                                var_23 -= ((max(9223372036854775807, (arr_3 [i_7]))));
                            }
                        }
                    }
                    var_24 = -66;
                }
                for (int i_8 = 2; i_8 < 22;i_8 += 1)
                {
                    arr_25 [i_0] = 6970940122208814344;
                    arr_26 [i_0 - 1] [i_0] [20] &= (((-2147483647 - 1) >= (43414 || var_11)));
                }
            }
        }
    }
    var_25 = -4417363375563256260;
    var_26 += var_16;
    #pragma endscop
}
