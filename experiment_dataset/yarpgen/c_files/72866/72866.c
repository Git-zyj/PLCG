/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1100981240;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [4] [i_0] [i_1] [7] = ((179489732725179690 ? (((arr_6 [i_0] [i_0] [7] [i_0]) / (arr_3 [i_0] [i_1] [i_2]))) : (((arr_1 [i_2]) * (arr_1 [i_1])))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (min((((((max(35, 52))) << (((1 == (arr_4 [i_2]))))))), ((((((arr_3 [i_0] [6] [3]) ? (arr_4 [i_0]) : 1))) ? var_5 : (max(var_2, var_0))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((35 ^ ((~(((arr_6 [i_0] [i_1] [i_0] [i_0]) | (arr_4 [i_1])))))));
                    arr_10 [i_0] [0] [i_2] = ((~63) >= (arr_0 [i_1] [i_2]));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_12 = ((((((((arr_5 [i_0] [i_1] [i_3]) + 65534))) ? -23645 : (~var_7))) >= (max(32752, -248))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] = ((!(((((((arr_2 [i_0]) + (arr_12 [11] [i_1] [i_4])))) ? (-10170 || -47) : -66)))));
                                arr_22 [i_0] [i_0] [i_1] [i_0] [i_5] = (+(((arr_15 [i_0] [i_0] [i_0] [i_0]) * 35)));
                                var_13 = ((+(((arr_19 [i_0] [i_0] [i_0]) + (-47 + 4572704641138523992)))));
                            }
                        }
                    }
                }
                arr_23 [i_0] = ((var_0 | (((((((arr_0 [i_0] [i_0]) * -32162)) != (arr_19 [i_0] [i_0] [i_1])))))));
                var_14 = ((((arr_4 [i_1]) != (arr_4 [i_1]))) ? ((2006 ^ (arr_18 [i_0] [i_1] [i_1] [i_1]))) : ((6521903342999252419 ? ((-(arr_6 [i_0] [i_0] [i_1] [i_1]))) : (arr_6 [i_0] [i_1] [11] [i_1]))));
                var_15 = 247;
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
