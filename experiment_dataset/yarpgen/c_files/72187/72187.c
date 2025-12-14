/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 -= ((((min(-147, ((875750483 ? var_15 : 237))))) + ((-1550540301 - (arr_0 [i_0] [i_0])))));
        var_21 = (((189 > 83) ? 18446744073709551614 : (((-((-3589 ? 189 : 70)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_22 = (max((~0), ((-22303 & (arr_4 [i_1 + 1] [i_1 - 1])))));
                        var_23 = ((-73 ? 1495328203 : -31223));
                    }
                    var_24 = (min((((arr_7 [i_1 - 2] [i_1 - 1] [i_1 - 1]) ? var_3 : var_10)), ((min(-4992619638157865995, -256)))));
                }
            }
        }
        arr_13 [i_0] [i_0] = ((((((((arr_7 [i_0] [i_0] [i_0]) / var_0))) ? (((arr_5 [i_0]) ? 6410 : 72)) : (~var_14))) >= ((((max((arr_8 [i_0] [i_0] [i_0]), -4992619638157866001)) > var_8)))));
    }
    var_25 = var_11;
    var_26 = (min(var_26, (((var_17 ? (((((var_10 ? var_16 : 0)) << (var_15 / var_13)))) : (~var_4))))));
    var_27 = ((!((min((var_4 || var_1), (~239111874))))));
    #pragma endscop
}
