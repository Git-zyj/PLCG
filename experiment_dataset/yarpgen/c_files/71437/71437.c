/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (271380693 && var_3);
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (((arr_0 [i_1]) - var_3));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [2] [2] [i_2] [i_3] [8] = (~var_8);
                                var_14 *= (((min(-23, 32767))) ? ((1 ? 15 : (max(23511, 18446744073709551608)))) : ((((arr_0 [i_0]) % (arr_0 [i_0])))));
                            }
                        }
                    }
                }
                var_15 = 15514552077896112213;
            }
        }
    }
    #pragma endscop
}
