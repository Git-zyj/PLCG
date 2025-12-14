/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((!(!1444608272))))));
                            var_14 = 0;
                            var_15 += (((((arr_11 [i_0] [i_0] [i_1] [i_0]) ? (arr_8 [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0])))) ? 4294967295 : (max(((max(-9223372036854775803, (arr_8 [i_2 - 1] [i_2 - 1])))), ((12 ? 17047877591120899959 : 1018658630)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_16 = max(2850358994, (arr_0 [i_0]));
                                var_17 = (((((+((((arr_20 [i_0] [i_0] [i_4] [i_0] [i_6]) == (arr_17 [i_5] [i_1] [i_1]))))))) + (arr_18 [i_6] [i_5] [i_4] [i_1] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 7;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_34 [i_9] [i_8] [i_8] [i_8] [i_8] [i_8] = ((255 + (-9223372036854775807 - 1)));
                                arr_35 [i_7] [i_7] [i_9] [i_7] [i_7] [i_7] = (((((var_4 | (arr_6 [i_11] [i_10 - 2] [i_7 + 1])))) ? (((3465814338 ? -23497 : 33196))) : (max(8425555152713423037, -1018658631))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 9;i_13 += 1)
                    {
                        {
                            var_18 = (max(var_18, (arr_28 [i_13 - 1] [i_13 - 1] [i_7 - 1])));
                            var_19 = ((max(var_1, (arr_16 [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1]))));
                            var_20 = ((((min((arr_14 [i_7 + 1] [i_13 - 1]), 1018658609))) ? (max((arr_14 [i_7 + 1] [i_13 - 1]), var_10)) : (arr_14 [i_7 + 1] [i_13 - 1])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 22;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 24;i_17 += 1)
                    {
                        {
                            arr_50 [i_17] [i_16] [i_15] [i_15] [i_14] = (min(((min((arr_41 [i_15] [i_16]), var_12))), var_7));
                            var_21 = (max(var_21, (arr_42 [i_15])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_18 = 1; i_18 < 21;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        for (int i_20 = 3; i_20 < 22;i_20 += 1)
                        {
                            {
                                arr_57 [i_14] [i_14] [i_14] [i_19] [i_19] [i_20] |= var_9;
                                var_22 = ((((((arr_44 [i_20] [i_20 - 2] [i_20]) >> (((arr_44 [i_20 + 2] [i_18 + 3] [i_18 - 1]) - 10638))))) ? (max((min((arr_45 [i_14]), var_10)), (~3174615086))) : (((max(23505, (arr_55 [i_20] [i_20] [i_20 + 3] [i_20 - 1] [i_20 - 3] [i_20 + 2] [i_20 - 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
