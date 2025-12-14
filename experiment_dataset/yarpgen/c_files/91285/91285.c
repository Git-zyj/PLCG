/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_10 *= ((!((min(231, (arr_1 [i_0 - 2] [i_1 + 1]))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                arr_8 [i_2] [i_0] [i_0] [i_0] = var_3;
                var_11 = ((var_9 >= ((min(8188, 22)))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_0] [i_1] [i_0] = (((var_0 * (arr_5 [i_0] [i_1] [i_3]))));
                var_12 -= var_7;
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_15 [i_0] = (arr_4 [i_0] [i_0]);
            var_13 *= (var_3 / 30362);
        }
        var_14 = (min(var_14, ((((((arr_6 [i_0] [i_0]) ? (arr_4 [i_0 + 1] [i_0 + 1]) : 22)))))));
    }
    var_15 = -109;
    #pragma endscop
}
