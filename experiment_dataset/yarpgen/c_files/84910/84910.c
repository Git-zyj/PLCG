/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_1, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((max((arr_3 [i_0]), (arr_1 [i_0]))) < (((((!var_2) || ((max(218653705, 218653705)))))))));
                var_14 |= (min((arr_4 [i_0] [i_0]), (max(10256752284206843875, (arr_3 [i_0])))));
                arr_6 [i_0] [i_1] = (arr_1 [i_1]);
                var_15 = ((((min((var_2 < 10256752284206843875), (arr_2 [7])))) || ((min(-1, (arr_1 [i_1]))))));
                arr_7 [i_0] [8] = (((((var_7 * (arr_2 [i_1])))) ? (!var_4) : ((((((arr_3 [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_1 [i_1])))) ? 1683 : (((arr_4 [i_0] [i_0]) ? 5 : var_8))))));
            }
        }
    }
    var_16 = (min(var_16, ((((-var_4 ? -1 : (min(var_5, 10256752284206843879))))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_4] = (min((min((arr_14 [i_3]), ((var_3 ? (arr_10 [i_3] [15] [i_2]) : (arr_13 [1] [i_3] [1]))))), (!var_12)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_17 = ((((((~8250699951279638269) ? (min(var_6, var_9)) : (~1)))) >= 9480510258407184928));
                                var_18 = (min(var_18, (((~(arr_11 [i_3] [i_6]))))));
                                var_19 -= var_5;
                                var_20 = (((((arr_14 [i_6]) ? (arr_14 [i_2]) : var_11)) >> (arr_14 [i_2])));
                            }
                        }
                    }
                    var_21 = ((8189991789502707738 <= (arr_14 [i_2])));
                    arr_21 [i_2] [i_2] [i_4] = 1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                var_22 = (min(var_22, ((((~((-30575 ? var_9 : var_11))))))));
                var_23 = ((((20518 ? (arr_27 [i_7 - 1]) : var_9))) ? 0 : (min((arr_26 [1] [i_7]), (arr_27 [i_7 - 1]))));
                var_24 = ((((((!(((var_9 ? 10256752284206843875 : var_5))))))) + ((((min(var_6, 1))) & (min(var_0, var_9))))));
                var_25 -= ((30574 ? (arr_27 [i_7 - 1]) : ((((arr_24 [i_7 - 1] [i_7 - 1]) ? (((7 ? (arr_26 [i_7 - 1] [6]) : 255))) : (arr_23 [i_7 - 1] [i_8]))))));
            }
        }
    }
    #pragma endscop
}
