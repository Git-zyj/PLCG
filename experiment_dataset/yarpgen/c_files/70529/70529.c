/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((var_17 != ((min((255 * 124), (~var_14))))));
    var_19 = var_0;
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 |= -255;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_22 -= ((+((((~-2088442179) != ((-5134597450788080211 ? (arr_4 [i_0] [i_0]) : (arr_2 [i_2 - 2] [11]))))))));
                            arr_10 [i_0] [i_0] [i_2] [i_3] |= (131071 * 0);
                        }
                    }
                }
                var_23 = (!((((arr_3 [i_0]) ^ (arr_3 [i_0])))));
                var_24 = (min((0 || -131072), 16368));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_25 = ((min(131070, (arr_17 [i_5] [i_5] [i_5] [1] [1]))) ^ (((37237 == ((var_16 ? 254 : 131045))))));
                            arr_18 [i_5] = (((((((-664 ? 65 : -1998955817))) ^ 2906146501)) * ((min(var_1, var_8)))));
                            arr_19 [i_0] [i_1] [i_5] = (min((((arr_16 [i_5] [i_5] [i_5] [i_5] [23]) ? (arr_16 [i_5] [i_5] [i_4] [i_5] [i_4]) : -131063)), (arr_8 [i_0] [i_0] [i_0])));
                            arr_20 [i_4] [i_1] [i_5] [i_0] = ((!(((131071 ? 131072 : 598111995)))));
                        }
                    }
                }
            }
        }
    }
    var_26 -= var_13;
    #pragma endscop
}
