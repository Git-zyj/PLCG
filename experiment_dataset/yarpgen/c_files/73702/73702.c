/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = ((-(min(((2266189919 ? var_2 : var_8)), ((((arr_8 [i_0] [i_1] [i_2] [i_3]) && (arr_3 [i_0] [i_1] [i_1]))))))));
                            var_16 = ((~(max((arr_1 [i_1 + 1]), (((!(arr_0 [18]))))))));
                            var_17 = (min(var_17, (((((min(-12170, (arr_0 [i_0 - 1])))) ? ((max((arr_3 [i_0 - 1] [i_3 + 1] [16]), (arr_3 [i_0 - 1] [i_3 + 1] [12])))) : ((min(var_7, var_8))))))));

                            for (int i_4 = 3; i_4 < 21;i_4 += 1)
                            {
                                var_18 = min((min(((-(arr_4 [i_0] [i_0] [i_2] [i_2]))), var_12)), -32);
                                var_19 = ((((min(9223372036854775807, (arr_0 [i_0 + 3])))) ? (((~((244159207 ? (arr_8 [i_0] [4] [i_2] [i_2]) : var_8))))) : -72));
                                var_20 = (max((((arr_11 [i_0] [i_0] [i_2] [i_2] [i_1] [i_2]) ^ var_2)), (arr_11 [i_0] [i_1] [i_1] [i_1 + 2] [i_3 - 1] [i_4 - 1])));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                arr_16 [i_0] [i_1] = var_8;
                                var_21 = (min(var_21, (((+((((arr_0 [i_3 - 1]) && var_7))))))));
                            }
                        }
                    }
                }
                var_22 = (min((min(var_5, -32)), 4294967295));
                var_23 = (-32767 - 1);
                var_24 = ((((min(((max(var_7, var_7))), (arr_10 [i_0] [9] [i_0] [i_0] [i_0])))) && var_8));
                var_25 = -var_0;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 4; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    var_26 = (((255 - 0) ? ((((!((min(-1395072493, -4282091385034699696))))))) : (min(4169030563, 628464539))));
                    arr_24 [i_8] [i_6] [i_6] [i_6] = (((!(arr_20 [11] [4] [i_8]))));
                    var_27 = (max((arr_13 [i_6] [i_6]), -36));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_28 = (((min(var_12, (arr_29 [i_6] [6] [i_6] [10] [i_6])))));
                                var_29 = var_11;
                                var_30 = min((min((arr_30 [i_7] [6] [i_6] [i_6] [i_10] [i_6]), (((arr_14 [i_6] [13] [i_8] [i_8] [i_10]) ? -32 : (arr_17 [11]))))), (min(var_11, (arr_22 [i_6] [i_10 + 2] [i_6]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (((((3 ? 13301734012549538985 : 4050808089))) || (var_5 | -93)));
    #pragma endscop
}
