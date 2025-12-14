/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 62914560;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((arr_0 [i_0]) ? 0 : (arr_1 [i_0])))) & var_10));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((((0 ^ (min(var_2, 4232052768)))) <= ((var_6 * (arr_3 [i_0])))));
                    var_20 *= ((((arr_7 [i_0] [i_1] [i_1] [i_2]) | (arr_0 [i_0]))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_21 *= (max((65011712 % var_11), (((-(arr_6 [i_3] [i_3] [i_3]))))));
        var_22 = (arr_4 [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        var_23 = (max(var_23, (((var_5 ? (arr_7 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4]) : var_1)))));
                        arr_18 [i_3] [8] [i_5] [i_5] [9] [i_5] = (((max((4232052736 * 16776192), 229)) - (((-1 ? 62914560 : var_12)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
