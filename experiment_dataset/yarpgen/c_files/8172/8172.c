/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 64;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_0] = (var_0 * 4299880147814637731);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_15 ^= ((((var_1 ? var_4 : var_10)) % (var_13 >= 1)));
                        var_16 = ((var_0 ? ((var_12 ? var_13 : 1)) : (arr_9 [i_0] [i_0] [i_0])));
                        arr_14 [i_3] [13] [i_0] [i_0] [i_0] [i_0] = ((((arr_0 [17]) ? var_0 : var_8)));
                        var_17 -= var_1;
                    }
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        var_18 = 1;
                        var_19 = (~var_9);

                        for (int i_5 = 3; i_5 < 16;i_5 += 1)
                        {
                            var_20 = (((arr_6 [i_4 + 1] [i_4 - 1] [i_5 + 1]) ? (arr_17 [i_4 + 2] [i_4 - 2] [i_4 + 1] [i_0] [i_4]) : var_1));
                            var_21 = (max(var_21, (((1 ? 5 : 1)))));
                        }
                        for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [15] [i_1] [i_2] [i_4] [i_6] = -1;
                            var_22 = (((arr_11 [i_4] [9] [i_4 + 1] [i_4 - 1]) | var_5));
                            arr_23 [6] [i_4] [i_0] [15] [i_0] [3] [3] = (!var_4);
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_23 = ((~(arr_16 [i_1] [i_7 - 2] [i_1])));
                            arr_26 [i_7] [i_0] = (((((var_6 ? var_7 : 28659))) ? (arr_1 [i_0] [i_0]) : -var_0));
                            arr_27 [i_0] = (((((5211634202981926704 ? 28667 : (-127 - 1)))) || (0 >= 1)));
                            var_24 = (4939184663198972526 || 12288);
                            var_25 = (((var_10 <= var_0) ? (!var_8) : var_8));
                        }
                    }
                    var_26 &= ((54517 - ((2199023255548 ? 12515217619283129647 : var_8))));
                    var_27 = (!var_0);
                    var_28 = ((1 ? 7039905278157044512 : 36850));
                    var_29 = (min(var_29, (((var_8 / (arr_25 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
