/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(-718428841884916010, ((28233 ? ((16602642568203635105 ? 16602642568203635105 : 1844101505505916510)) : (1844101505505916510 == 16602642568203635105)))));
    var_16 = (min(var_16, (((1844101505505916531 ? -188324894 : 1844101505505916527)))));
    var_17 = ((-((1 ? -67 : 16602642568203635097))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, 67));
                        arr_10 [i_3] [i_2] [i_1] [i_3] = -71;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_13 [16] [i_0] [i_4] [i_4] [i_2] [8] = ((245 ? (~14) : ((2436 ? -63 : 1844101505505916492))));
                        arr_14 [i_0] [i_1] [i_2] [i_4] |= 65535;
                        arr_15 [i_0] [i_4] [i_0] [i_0] = -538146191;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {

                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [19] [i_0] |= (1 == 1780936621);
                            arr_21 [i_0 + 1] [i_1] [i_2] [i_6] [i_1] [i_6] [3] = (~1);
                            var_19 = 1085970079;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_20 = (max(var_20, (((9 ? 147212360 : 3469570585)))));
                            arr_25 [13] [13] [13] [i_5] [7] = 4607228773670379642;
                        }
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            arr_29 [i_0] [20] [i_2] [i_2] [i_5] [i_8] = (16388541390755997158 <= 16602642568203635105);
                            var_21 = (max(var_21, (((32749 << (((-58 + 83) - 23)))))));
                            var_22 += ((65535 ? 24576 : 139));
                            var_23 = (~1314828295);
                        }
                        var_24 = (((1314828288 <= 3584) << (2514030675 - 2514030652)));
                    }
                    arr_30 [i_2] [i_0] [i_0] = (((-24576 / 2980139000) * ((((max(2146895500, 0))) ? ((49039 ? 1 : -2492)) : 63099))));
                }
            }
        }
    }
    #pragma endscop
}
