/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!1189860625);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] = ((var_3 ? ((((var_8 ? 0 : 721315102463729378)) + (max(1, 721315102463729382)))) : -1010329943));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] = (max(0, ((-1010329943 ? -3977816415098610186 : 1189860605))));
                                var_18 = (max(var_18, ((((((-1010329943 == 1189860625) ? ((-61 ? 1189860612 : 721315102463729382)) : 721315102463729383)) + var_0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (-var_13 ? ((max(var_2, (-65 <= var_13)))) : var_2);
    #pragma endscop
}
