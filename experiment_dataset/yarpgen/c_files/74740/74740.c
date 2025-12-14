/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 -= (max(7, (min(18446744073709551598, 18446744073709551609))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 ^= (min(((+(((arr_6 [i_1 + 2] [i_2 - 2] [i_3]) ? 1 : var_16)))), 1));
                                arr_18 [i_0] [i_1] [0] [0] [i_0] = var_5;
                                var_20 = ((+(((arr_2 [i_3]) | (((arr_6 [i_0 - 1] [0] [i_2]) ? -22019 : 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((max(var_14, 8047003387372026654))) ? 56086 : 23944));
    #pragma endscop
}
