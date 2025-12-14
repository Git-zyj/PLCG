/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 10;
    var_17 = (((-2147483647 - 1) ? ((var_10 | ((var_8 ? -2604313153231555996 : var_14)))) : (((var_6 ? var_14 : (3019719507 ^ 210))))));
    var_18 = (min(var_18, (((max(var_7, ((65535 >> (511 - 499)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = -2604313153231555996;
                    arr_8 [i_0] [i_1] [i_1] [i_2] = -23819;
                    var_19 ^= arr_1 [9];
                    arr_9 [i_0] [i_1] [i_1] = (((9223372036854775807 / 1) / (((((arr_3 [i_0] [i_0] [i_2]) ? var_0 : 2604313153231555996)) + -1))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                arr_16 [i_3] = (((33076 - ((max(0, -23820))))));
                var_20 -= ((~var_8) - ((min((arr_13 [i_3] [i_3 + 3]), var_4))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_23 [i_5] = 2046;
                            var_21 = (max(var_21, ((min(((((arr_10 [i_6]) || 1313945783))), (min((arr_10 [i_4]), (arr_10 [i_6]))))))));
                        }
                    }
                }
                var_22 = (min((var_14 >> 14), ((32323 ? var_11 : 707232165677526369))));
                var_23 = (((-15 ? ((~(arr_14 [i_4] [i_4] [i_4])) : (arr_21 [i_3 + 1] [i_3 + 3] [i_3 - 1] [i_3 + 2] [i_4])))));
            }
        }
    }
    #pragma endscop
}
