/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = (~((((!3802678347) < ((var_14 ? var_3 : var_17))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] = var_1;
                            var_21 *= -var_10;
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_22 = (317426472019364979 || 725666715);
                        var_23 -= ((~((3802678359 ? 79129972 : 34))));
                    }
                    var_24 |= var_4;
                    var_25 = ((-var_17 ? 1220110781 : -1946038809));
                    arr_19 [i_0] [i_0] [i_0] [i_4 + 3] = -1;
                }
            }
        }
    }
    #pragma endscop
}
