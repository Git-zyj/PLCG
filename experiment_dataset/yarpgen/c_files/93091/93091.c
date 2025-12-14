/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((26277 ? (min(((var_15 ? 56205 : 16013066667581925745)), ((max(var_0, 56205))))) : 7427954429193263622));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 *= var_10;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_19 = (max(var_19, ((max((arr_2 [i_1 - 1]), (!var_14))))));
                        var_20 = max((~var_4), (var_16 + var_0));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_21 = ((((-(arr_5 [i_1 - 1] [i_4] [i_4] [i_4])))) || ((((max((arr_1 [i_2]), 56205))) == ((((arr_4 [i_0] [i_0] [i_0]) && (arr_12 [i_0] [i_0] [i_2] [i_4])))))));
                        var_22 += (min(var_10, var_10));
                        var_23 += ((2251799813684736 ? 58300 : 9330));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_24 ^= ((+((((!11018789644516287994) < (arr_14 [i_0] [i_0] [i_0] [i_0]))))));

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_25 = (max((((var_7 + 32704) ? 11018789644516287994 : ((((var_4 && (arr_11 [i_0] [i_0] [i_2] [i_5] [i_6]))))))), ((((arr_20 [i_1]) ? -1061127567 : (min(var_15, var_1)))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_5;
                        }
                    }
                }
            }
        }
    }
    var_26 = 32705;
    var_27 = var_10;
    var_28 = var_1;
    #pragma endscop
}
