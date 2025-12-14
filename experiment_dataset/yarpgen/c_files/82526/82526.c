/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_19 = 120;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_20 ^= ((((max(15027057416409776728, -601950217))) <= var_6));
                        var_21 = (min(var_21, (((+((((arr_8 [i_0 - 1] [i_0] [i_0] [i_0 - 1]) >= (var_9 ^ var_6)))))))));
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_22 = (arr_14 [i_4]);
        var_23 = (arr_8 [i_4] [i_4] [i_4] [i_4]);
        var_24 = (max(var_24, (((3445576478924901229 % (((-((1 ? (arr_4 [i_4] [i_4] [i_4]) : var_4))))))))));
        var_25 ^= ((var_10 >= (((!(((1 ? 23919 : 1))))))));
    }
    #pragma endscop
}
