/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_12 = (min((arr_3 [i_0]), ((max(9890709723654876772, -6101)))));
                    var_13 |= (((~(((arr_8 [i_1] [i_1] [i_1] [i_1]) ? (arr_5 [1] [i_1] [i_1] [i_2]) : (arr_6 [i_2]))))));
                    arr_9 [i_1] [i_1] [i_1] = ((-6101 ? 8357091562794764517 : -268435456));
                }
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1 - 1] [i_3 + 1] [4] [i_5] [i_0] [i_3] = ((+(((arr_7 [i_0] [i_1 + 1]) ? (((arr_11 [i_0] [i_1] [i_0]) ? (arr_5 [i_1] [i_1] [9] [9]) : (arr_10 [i_0] [i_0] [i_0] [i_3]))) : 268435461))));
                                var_14 = (max(((((arr_11 [i_0] [i_1 - 2] [i_0]) <= (arr_11 [16] [i_1 - 2] [i_3])))), (arr_8 [i_0] [i_0] [i_0] [0])));
                                var_15 = var_5;
                            }
                        }
                    }
                    var_16 = ((((max(-362013685, (arr_1 [i_1 - 3])))) - (((var_2 ? var_0 : 0)))));
                }
                arr_18 [i_0] [i_1] = max(((3238884784 ? 268435455 : 1)), ((((arr_10 [i_0] [1] [i_1 + 2] [6]) > var_1))));
                var_17 = (max(var_10, (((!((max((arr_13 [12]), (arr_4 [i_1 - 1] [i_0] [i_0])))))))));
            }
        }
    }
    var_18 = -268435456;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_19 *= max((arr_12 [i_6]), (((((var_8 ? (arr_1 [i_7]) : (arr_1 [i_8])))) ? (~126100789566373888) : (arr_13 [i_6]))));

                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        var_20 = (126100789566373888 / 59);

                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_21 = (((arr_23 [i_9 - 2] [i_9 - 2] [i_9 - 3] [i_9 - 3]) ? (arr_2 [i_9 - 2]) : (arr_31 [i_9 + 1] [i_9] [8] [i_9] [i_9 - 1])));
                            arr_32 [i_7] = 1;
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            arr_35 [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_7] = 1;
                            var_22 = -74;
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            var_23 = var_4;
                            var_24 = ((-(arr_2 [i_9 - 3])));
                            arr_39 [i_6] [i_7] [i_6] [i_9 - 2] [i_12] = 12596897774312937913;
                            arr_40 [i_6] [12] [i_6] [i_9] [i_6] [i_7] = 199;
                        }
                    }
                    var_25 += (((((126100789566373881 ? (-32767 - 1) : 2665595080466773232))) ? (((((arr_14 [i_6] [i_7] [i_8]) == var_2)))) : (arr_1 [i_6])));
                    arr_41 [i_6] [i_7] [i_6] = (((((7 ? -1884 : 7274651384006712963))) && ((min((min(1, 63)), (-1225720037912960550 != 1))))));
                }
            }
        }
    }
    #pragma endscop
}
