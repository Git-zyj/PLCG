/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, ((((((~8969) + 9223372036854775807)) >> (((var_4 - var_0) - 1027575546)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, var_3));
                                arr_16 [i_0] [i_0] [i_0] [i_3] = (max(((((((var_5 ? var_5 : var_1))) ? 112 : (var_2 / -8966)))), (((-119 ? 55 : 1014617635)))));
                                var_12 = 8966;
                                var_13 += (((max(5580278596909173414, 9223372036854775791)) << (((max(49, var_9)) - 1037861188))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (-8952 && 3280349661);
    var_15 = (max(var_15, 20));
    var_16 = ((var_2 * (((!9) ? (!118) : var_6))));
    #pragma endscop
}
