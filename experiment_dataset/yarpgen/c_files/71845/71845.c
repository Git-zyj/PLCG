/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((~var_6), (((max(75, 1))))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((!(~52315)));
        var_20 = (max(-177, 75));
        var_21 = ((~(((1 || 65527) ? 9175972487597593107 : 3600534443384782572))));
    }

    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_22 = ((+(((!51161) ? (1 << 1) : ((min(1, 65527)))))));
        var_23 = 14846209630324769044;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_24 -= (!-5976236984174949390);
        var_25 = ((!((min(-8751433399581717682, 1)))));
        var_26 = ((1 && (~14846209630324769055)));
        var_27 = ((~(~255)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_20 [2] [i_5] [2] [i_6] = ((51250 ? 2540194210 : (((1 ? 0 : 1)))));

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_28 ^= -2147483647;
                            arr_24 [i_3] [i_7] [i_5] [i_6] [i_7] = (3600534443384782572 + 3600534443384782572);
                            arr_25 [i_5] = 42;
                            var_29 = (~3600534443384782545);
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_30 = (~-100);
                            var_31 = 1;
                            var_32 ^= ((3466000700896660558 ? 2887453040 : 945963178));
                        }
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            var_33 = (min(var_33, (~1)));
                            var_34 = -13666;
                            arr_31 [i_3] [i_3] [i_3] |= 7572247359915116139;
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_35 |= (2147483647 + 4497873520066895307);
                            arr_34 [i_10] = (148419394 < 3600534443384782572);
                        }
                        var_36 += (!0);
                        var_37 = 3600534443384782569;
                        var_38 = 127;
                    }
                }
            }
        }
        arr_35 [i_3] = 255;
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            {
                var_39 = ((+((((-127 - 1) >= 1)))));
                arr_43 [i_12] = ((~(min(3600534443384782546, 6))));
            }
        }
    }
    #pragma endscop
}
