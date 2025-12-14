/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((arr_1 [i_0]) - (((((arr_0 [i_1] [i_0]) / (-9223372036854775807 - 1))) + (arr_4 [i_1] [i_1] [i_0 + 1])))));
                arr_6 [i_0] [i_1] = (((~4227858432) / (-6595572827517353065 != 4589)));
                var_16 = -12419;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_17 = ((((arr_14 [i_3 - 1]) + 2147483647)) << ((((-(arr_14 [i_3 - 1]))) - 58)));
                            var_18 = ((~(arr_11 [i_2] [i_3 + 1])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_19 = (max(var_19, (arr_7 [17])));
                                var_20 = (((2140997725 ^ (arr_21 [i_3]))) | ((-(arr_13 [i_2] [i_8 + 2]))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
    {
        arr_26 [i_9] = 268369920;
        arr_27 [i_9] = 143552238122434560;
    }
    for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
    {
        var_21 = 862204051;
        var_22 = 12419;
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            {
                arr_37 [i_12] [i_11] &= (((3094866642969471577 + 14528481820372643797) & (((min(12419, (arr_36 [i_11] [i_12])))))));
                var_23 = (max(var_23, var_14));
            }
        }
    }
    #pragma endscop
}
