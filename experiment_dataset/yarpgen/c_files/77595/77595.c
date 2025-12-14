/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~657119336);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 |= var_6;
                var_21 += var_4;
                var_22 = (max((((((((arr_4 [i_0] [11]) >> (-1011505478 + 1011505503)))) ? 2685742258 : 1063735672))), ((7694 ? -2016896662 : 7812059733831297555))));
                arr_6 [i_0] = (1750732784 & -9223372036854775807);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                var_23 = (!var_18);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 18;i_6 += 1)
                            {
                                var_24 = (var_13 / 2147483647);
                                var_25 ^= ((-(arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_6 - 1])));
                            }
                            var_26 = (~var_6);
                        }
                    }
                }
            }
        }
    }
    var_27 = ((max(1, (~var_17))));
    #pragma endscop
}
