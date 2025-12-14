/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (!7306649415816319476);
                    arr_11 [i_1] [i_1] [i_2] [i_0 - 1] = ((((min(-65535, ((-3192341547966653994 ? var_8 : 0))))) ? -397544091827760142 : (var_7 + 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 = (((((var_5 ? var_11 : var_2))) ? 65527 : ((7 ? ((65530 ? var_13 : var_13)) : -var_13))));
                                arr_16 [i_0] [i_3] [i_2] [i_3] [i_0] = (max(((var_13 ? var_15 : var_8)), ((var_7 ? var_11 : var_15))));
                                var_17 = ((((((((var_14 ? var_6 : var_1))) ? var_14 : var_3))) ? ((65535 ? ((65534 ? var_0 : var_0)) : var_15)) : ((min(60486, 0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, ((((~var_7) ? 1 : ((((max(var_0, 65517))) ? ((8 ? 65535 : 60486)) : ((5301 ? 20 : var_2)))))))));
    #pragma endscop
}
