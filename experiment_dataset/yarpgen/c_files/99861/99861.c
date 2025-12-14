/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [20] |= (((7898439031270931614 ? 62694 : 2847)));

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_11 = ((((((!var_9) ? (~32045) : (max(var_6, -3945019398072780239))))) ? ((((-3909 ? -1616 : -320681523102638455)))) : (min(65535, ((1 ? 52956 : 62694))))));
                    var_12 -= 65535;
                    var_13 = -33488;
                }
                var_14 = ((-1242500385 ? (((148 ? -2542026201467842704 : 62694))) : ((-3945019398072780239 ? (((-3909 ? 28792 : -8))) : ((-1 ? var_2 : 3945019398072780228))))));
                arr_10 [i_1] [i_1] [i_1] = 0;
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_18 [i_4] [i_4] [i_3] [12] [i_4] |= (32767 ? 35563 : -434223428750321829);
                                arr_19 [i_1 + 3] [i_1 + 2] [i_1] = -2002888642;
                                var_15 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, ((min((((~8) ? -2002888642 : (var_3 + var_0))), ((1 ? (~107) : var_0)))))));
    var_17 = (min(var_17, (((var_3 ? -50 : 33488)))));
    #pragma endscop
}
