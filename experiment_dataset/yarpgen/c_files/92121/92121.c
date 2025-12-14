/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 ^= ((!(~-118)));
                    var_12 = ((~((-(arr_0 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = var_7;
                                var_14 = 26164;
                                var_15 = var_9;
                            }
                        }
                    }
                }
            }
        }
        var_16 = (max(var_16, 16961305265603402565));
        var_17 = (~-12359075750243376907);
        var_18 = (~1220988553);
        var_19 *= ((-(arr_4 [0] [i_0 + 2])));
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((~(~var_1))))));
        var_21 = (!1485438808106149050);
        var_22 = (~var_4);
    }
    var_23 = (((!(!var_2))));
    var_24 = 34359730176;
    #pragma endscop
}
