/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_1] = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_19 = 1;
                                var_20 = (min(var_20, var_14));
                                arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = (1 - 28017);
                                var_21 = (((-(arr_3 [i_0]))));
                            }
                        }
                    }
                }
                var_22 ^= ((max(1, 1)));
                var_23 -= (max(0, ((((3740833406 ^ 3740833425) ? 2660897019 : 554133890)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_5] = (min((arr_11 [i_5] [i_6] [i_7] [i_5]), ((var_4 | (max(var_6, (arr_1 [i_5] [i_5])))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_30 [i_5] [i_6] [i_6] [i_5] [i_5] = ((!((!(((var_15 - (arr_2 [i_7] [i_8]))))))));
                                var_24 = ((!(((max(554133910, 1))))));
                                arr_31 [i_5] [i_8] [i_8] [i_6] [i_6] [i_5] = ((((!((!(arr_23 [i_9] [i_9] [i_7] [i_7]))))) ? (var_16 << 1) : ((1 ? 3740833410 : 1634070276))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            {
                arr_38 [20] &= (((((arr_5 [2] [2]) % (arr_5 [20] [20]))) < (((((arr_5 [18] [i_11 - 1]) <= (1 * 1)))))));
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_25 = (arr_33 [i_10]);
                            var_26 = max(((4433230883192832 ? 11 : 1)), -3740833403);
                        }
                    }
                }
            }
        }
    }
    var_27 = ((var_12 ? var_0 : ((((!(1 < 1)))))));
    #pragma endscop
}
