/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 *= var_5;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = ((!(((var_2 ? (!48) : (max(97, 3427947239159214869)))))));
                                var_16 = ((((((~43) ? ((max((arr_2 [9]), (arr_0 [i_0])))) : (arr_12 [i_1] [i_4 - 1] [i_4] [i_4] [i_1])))) ? (((var_11 ? (arr_0 [i_1 - 1]) : -1))) : 12011541244894751328));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_17 = (((((min((arr_14 [i_5 - 2]), (arr_14 [i_5 - 1]))))) & ((var_5 | (max(3427947239159214869, 3348860583))))));

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_18 = 4;
                                var_19 = (arr_21 [i_5] [i_5] [i_5 + 3] [i_5] [i_5]);
                            }
                        }
                    }
                    var_20 -= ((((min(255, ((var_6 ? 3 : 65535))))) ? (((((arr_23 [i_5] [i_5] [i_5] [i_5] [0]) && ((max(var_7, var_0))))))) : ((((-842281122 ? 252 : 865953376)) << (((-109 + -206509953) + 206510069))))));
                }
                arr_25 [i_5] [18] [18] = 2147483647;
                var_21 ^= (((~(arr_23 [i_5] [i_5 + 1] [14] [i_5] [i_5]))));
            }
        }
    }
    var_22 = ((min(((5688255726716806658 ? 29799 : var_10), 16384))));
    #pragma endscop
}
