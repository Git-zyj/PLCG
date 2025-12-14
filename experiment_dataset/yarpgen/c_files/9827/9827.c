/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 -= 0;
                                var_18 ^= ((!((max((4042842929 <= 0), (arr_1 [i_2] [i_2]))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_19 = (max(var_19, ((((~var_4) <= (((var_10 ? (arr_8 [i_5] [i_2] [i_0]) : var_15))))))));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_18 [i_0] [i_2] = (263882790666240 + -103);
                            var_20 &= (~var_4);
                            var_21 ^= ((-1620681247 + (arr_10 [i_5] [i_0] [i_5])));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_21 [i_7] [i_2] [i_5] [i_5] [i_2] [i_2] [i_0 - 1] = (arr_13 [i_7] [i_7]);
                            var_22 = var_8;
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_23 += arr_2 [i_2 + 1];
                            var_24 ^= ((-6714952253972124496 ? var_1 : (arr_1 [i_2 + 1] [i_0 + 3])));
                        }
                        arr_24 [i_0] [i_0] [i_2] = var_0;
                        var_25 = ((~(arr_1 [i_2 + 2] [i_1])));
                        var_26 -= (~17261500305126299474);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_27 -= (((((6714952253972124495 ? 204 : -813300417))) || (arr_20 [1] [i_1] [i_1] [10] [i_1] [i_0])));
                        var_28 = ((((var_9 < (arr_17 [i_0] [i_0] [i_0 + 3] [i_0] [6] [i_0] [i_2]))) ? (~var_3) : (arr_9 [i_9] [i_2] [i_2] [i_0])));
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_29 = (arr_1 [i_10] [i_10]);
                        var_30 = (max(var_30, (((((((((arr_3 [i_10] [i_2] [i_1]) ? var_3 : -28199))) ? (~-325307172) : ((813300419 ? (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : var_11)))) | ((((((var_13 ? var_10 : -813300420))) ? (~var_16) : (arr_27 [i_0] [i_0 - 1] [i_0] [4] [i_0 + 1] [i_0])))))))));
                        var_31 = (max(var_31, (((min(-214750509, 0))))));
                    }
                    var_32 = 65532;
                }
            }
        }
    }
    var_33 = (max(var_33, (((var_1 ? (((-var_8 ? var_0 : var_12))) : var_2)))));
    #pragma endscop
}
