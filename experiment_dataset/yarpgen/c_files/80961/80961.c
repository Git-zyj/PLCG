/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-((min(-27, var_7))))) * 27));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = ((!((min((18446744073709551615 && -13), 722425685)))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_17 = (((min(126, 13396621816668683079)) <= ((((arr_0 [i_0] [i_0]) + 3572541610)))));
                            var_18 = (((3572541599 / 3956158684) && ((min(-27, (arr_0 [i_4] [i_0]))))));
                            var_19 = (~32);
                        }
                        var_20 = var_8;
                        var_21 &= (((((7 ? 3230096234 : 1))) ? (~137) : var_1));
                    }
                }
            }
        }
    }
    var_22 -= (--15);
    var_23 = ((min(var_1, ((9 ? 460965959313285518 : 3572541610)))));
    var_24 -= ((460965959313285518 ? 224 : var_14));
    #pragma endscop
}
