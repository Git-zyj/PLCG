/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 += 2832545112;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 -= 65535;
                        var_13 -= (-23607 ^ 9);
                        arr_11 [i_0] [i_2] [i_0] [i_0 - 3] [12] |= ((~(((!(~var_3))))));
                        var_14 -= (max((((65516 ? (arr_4 [i_0 - 1]) : ((var_2 ? (arr_1 [i_2]) : var_3))))), (((-6673405610088355904 + 9223372036854775807) >> (690057912 - 690057872)))));
                        var_15 = var_8;
                    }
                }
            }
        }
    }
    var_16 ^= var_1;
    #pragma endscop
}
