/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [18] [i_0] = ((var_7 ? (((255 > 120) ? ((2886647655710100958 ? (arr_3 [i_1] [i_1]) : 524284)) : (!15))) : var_0));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [21] [i_2] [i_2] [i_2] [i_2] [i_4] = ((min(37448, 1632822278)));
                                var_10 = (max(var_10, ((((((65532 ? var_8 : (32754 || 64370)))) || ((((~-13890) ? 48 : (min(1127424392704181076, 1255181717))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_11 = 32767;
    var_12 = (min(var_12, var_6));
    #pragma endscop
}
