/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= -2062919328;
    var_20 = var_9;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (min(var_21, ((max((((((3020473819 ? var_14 : (arr_1 [i_0] [i_0])))) ? 1 : (arr_0 [i_0]))), (((arr_0 [i_0]) * (var_15 / -8650494425916359752))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_22 = (max((((((max(3020473819, var_5))) ? (~2289354784) : 1274493476))), (arr_4 [i_1 - 2] [i_1 - 1] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] = (((arr_4 [i_0] [i_0] [i_0]) || ((((arr_4 [i_4] [i_3] [i_2]) / (((var_2 ? 1274493476 : (arr_1 [1] [12])))))))));
                                arr_12 [i_0] [i_0] [5] [i_3] [i_4] = 731894609644514504;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [i_1] [i_1] |= (((var_10 << ((((var_18 << (3020473820 - 3020473776))) - 1726461954026897404)))) << (((max((max((arr_15 [i_1] [i_2] [i_5 - 2] [i_6]), -8650494425916359752)), (3984936663 + 2323685243))) - 2013654610)));
                                var_23 |= (((~1330182944) ? (-27835 % 3984936663) : (min(((63 ? 0 : 39509)), var_13))));
                            }
                        }
                    }
                    var_24 = (((((((max(var_10, (arr_15 [i_2] [i_0] [i_2] [i_2]))))) / (arr_7 [i_0] [i_1] [i_2])))) ? ((~(max((arr_10 [i_0] [i_1 - 2] [i_2] [i_2] [i_0]), 731894609644514504)))) : var_9);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_25 = (~(((((-32767 - 1) ? var_14 : (arr_22 [i_8] [i_7]))) + var_16)));
                    arr_26 [i_0] [i_0] [i_0] = ((!(arr_0 [i_0])));
                    var_26 ^= (((arr_2 [i_8]) & (((arr_2 [i_7]) ^ -7395944711397226756))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 9;i_9 += 1)
    {
        var_27 = (((4294967295 >= 731894609644514504) ? (2673150760 - var_4) : (arr_8 [i_9] [i_9])));
        arr_29 [i_9] = (arr_24 [6] [6] [6]);
        arr_30 [3] = (((((arr_17 [i_9] [i_9] [i_9] [i_9] [16] [i_9]) / 60)) * -var_9));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 22;i_10 += 1)
    {
        var_28 = ((((0 + (arr_25 [i_10] [i_10 + 1] [i_10]))) % -1));
        var_29 = ((8016182005992014867 ? (((((arr_2 [i_10]) > 7395944711397226752)))) : (59447 ^ var_0)));
        arr_33 [i_10] = (arr_2 [i_10]);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    var_30 ^= (((arr_0 [15]) << (73 - 14)));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_31 = (max(var_31, ((((-37 | 22236) ? (~-7395944711397226768) : 117)))));
                                var_32 = (min(var_32, ((((arr_2 [i_11]) ^ (arr_35 [i_11]))))));
                                var_33 = (arr_14 [i_12] [i_11]);
                                var_34 = var_5;
                            }
                        }
                    }
                    var_35 = (~(arr_5 [i_10 - 2] [i_10 + 1]));
                }
            }
        }
    }
    var_36 ^= (var_7 && ((min((var_10 && var_7), 2938))));
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            {
                arr_49 [i_16] = (arr_43 [i_15]);
                var_37 = ((~(~var_0)));
                var_38 &= (((~73) || (arr_10 [i_15] [i_16] [i_15] [i_15] [i_15])));
            }
        }
    }
    #pragma endscop
}
