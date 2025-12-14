/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 11175567865356399422;
    var_19 = (-10874 / 9223372036854775807);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = ((~((~(arr_2 [i_0] [i_0] [i_0 - 3])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (-9223372036854775807 - 1);
                                var_21 = (min(var_21, (((((((((max((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]), var_17)))) - (max(var_1, -9223372036854775795))))) ? ((var_8 - (arr_3 [i_4] [i_3]))) : (((arr_9 [i_0 - 2] [i_1] [i_2] [i_4 + 1] [i_4 - 2] [i_4 + 1]) * 1693864894708533883)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
