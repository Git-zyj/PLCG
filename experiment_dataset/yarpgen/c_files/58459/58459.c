/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 ^= (((~var_2) ? (((1 >> 0) ? var_5 : ((var_4 ? 65535 : var_4)))) : ((((1 ? 0 : 1))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_2;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        var_18 = ((-(arr_2 [i_3 - 2] [i_3 + 1])));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_19 = var_14;
                            var_20 = (((((arr_5 [i_0]) ? var_13 : (arr_5 [i_0]))) == ((((!(((0 ? 29122 : 108)))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_21 ^= (29122 & 65526);
                var_22 = (((((12 ? (arr_18 [i_5] [i_6]) : 9))) ? ((38444 ? 65526 : 9)) : (max(var_0, 1))));
            }
        }
    }
    #pragma endscop
}
