/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = ((((-25069 < (2785952178567618833 & -25069))) || (((arr_4 [i_0]) >= (min(60688, 5))))));
                arr_5 [7] [13] = max(((((25080 ? 59786 : var_9)) | (((arr_1 [i_0]) >> (-25080 + 25087))))), (max((~var_12), (var_12 <= 65535))));
            }
        }
    }
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_20 *= 18952;
                var_21 = (min(var_21, (((arr_6 [20]) & ((((((16383 ? var_0 : (arr_6 [20])))) || (821 || 250))))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_22 = (((((((4848 / (arr_16 [i_2] [i_5] [i_4] [i_5] [i_2] [i_6])))) ? (0 != 18192) : ((25080 ? var_15 : 15508)))) % (~2096896)));
                                var_23 = -109;
                                var_24 = (((((((max((arr_13 [i_2] [7] [i_2] [i_6]), 60693))) ? (arr_9 [i_2]) : (arr_6 [i_2])))) & (((arr_15 [22] [i_3] [i_4] [i_4] [i_5] [i_6]) - var_0))));
                                var_25 ^= (((((((min(0, -1163678385))) + (max(var_16, (arr_6 [i_4])))))) ? (((arr_17 [i_3 - 1] [i_3] [i_6] [i_6] [i_2 - 1] [8]) * 25100)) : ((((max(25068, -19288))) ? ((134217727 ? var_9 : -2)) : (4294967282 < 2147483647)))));
                                arr_19 [6] [i_2] [11] [19] [i_6] = (((max(21607, 502764782)) + -2105));
                            }
                        }
                    }
                }
                var_26 *= (arr_13 [i_2] [i_2] [0] [18]);
            }
        }
    }
    #pragma endscop
}
