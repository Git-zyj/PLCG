/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (((((-1149365578 + 2147483647) << (var_4 - 5818094329379807230))) >= -1149365572));

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_14 = (min(var_14, (((var_6 ? (max((((arr_3 [i_0] [i_1]) ? -1646480096 : 3)), (arr_2 [i_0] [i_1]))) : (arr_4 [i_0] [i_2 + 1] [i_2]))))));
                    var_15 += (-(arr_0 [i_0]));
                }
            }
        }
    }
    var_16 |= (var_3 | var_11);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((+((-(((arr_13 [i_3] [i_3] [i_3]) % 127)))))))));

                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 12;i_7 += 1)
                            {
                                var_18 = (min(var_18, ((var_7 ? (arr_4 [i_3] [i_3] [i_5 - 1]) : (arr_4 [i_4] [i_5] [i_5])))));
                                var_19 = var_0;
                            }

                            /* vectorizable */
                            for (int i_8 = 3; i_8 < 10;i_8 += 1)
                            {
                                var_20 |= ((var_0 ? ((13408 ? 5279235610987519971 : -1646480096)) : 1));
                                var_21 ^= (~2402833137);
                            }

                            for (int i_9 = 2; i_9 < 11;i_9 += 1)
                            {
                                var_22 = (((-5269137903918979427 + 9223372036854775807) << ((((((~(arr_24 [i_3] [i_3] [i_5] [i_6] [i_3]))) + 39)) - 5))));
                                var_23 = (max(((-((((arr_20 [i_6] [i_5 - 1] [i_4]) >= 4528827295119238204))))), (((var_12 % -119) % (((arr_12 [i_3]) ? 1 : var_10))))));
                                var_24 = (min(var_24, (arr_16 [i_9 + 3] [i_4] [i_9] [i_9])));
                            }
                        }
                    }
                }
                var_25 = ((var_0 ? (arr_20 [i_4] [i_4] [i_4]) : (111 && var_3)));
            }
        }
    }
    #pragma endscop
}
