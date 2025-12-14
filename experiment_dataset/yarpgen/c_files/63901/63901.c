/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63901
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
                var_12 = ((99 % (min(1, (~var_7)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, ((((((!((var_6 <= (arr_12 [i_0] [0] [i_2] [i_3 + 1])))))) & ((min(27835, -6))))))));
                            arr_13 [i_0] [i_0] = (((((arr_4 [i_0] [i_0]) + 119947697)) % (var_10 > 119947697)));

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_14 |= ((((17628627259408689114 ? (max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), 17628627259408689114)) : (arr_8 [i_4] [i_3 - 2] [i_4]))) * ((min(var_9, (((arr_0 [i_4]) % 474622092825383202)))))));
                                arr_16 [i_0] [i_1] [i_2] [0] [i_4] |= -var_0;
                                var_15 = -2743869574412862879;
                                arr_17 [i_4] [i_3 + 1] [i_0] [i_0] [i_1] [i_0] = (max((max(1954056409, (arr_8 [i_0] [i_2 + 1] [i_0]))), (arr_8 [i_0] [i_2 + 1] [i_0])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_16 -= (((max(((max((arr_6 [i_5]), var_1))), (548443549731082324 - var_8)))) && (arr_7 [i_1] [i_1] [0]));
                            var_17 = ((37695 ? 50716 : -119947698));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_28 [i_8] [i_0] [i_7] = ((9136480918649361388 > (((((max((arr_20 [i_8] [i_7] [i_1] [i_0] [i_0]), var_11))) ? (!-16372) : 115)))));
                            arr_29 [i_7] [i_1] [i_1] [i_1] |= (max((((arr_0 [i_7]) + var_4)), (arr_19 [i_0] [i_7] [i_8])));
                            arr_30 [i_0] [i_1] [i_7] [12] = -101;
                        }
                    }
                }
            }
        }
    }
    var_18 = var_8;
    var_19 = (min(var_19, ((max((16392 * var_4), (var_0 - 1))))));
    #pragma endscop
}
