/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-104 ? (1168248547435815826 + 4822438698191202930) : ((max(2614844739096733959, 23368)))))) ? 23371 : ((var_7 ? 1 : var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [3] [i_3 - 1] [i_0] = (((-((3683523037 ? 2529751761047698625 : -4510800019133217188)))));
                                var_12 = -4510800019133217193;
                                var_13 += ((-(((arr_9 [i_4 - 2] [i_3] [i_3 - 1] [i_4 - 2]) >> (((arr_13 [i_4 - 2] [i_1] [i_3 - 1] [i_1] [6]) - 31030))))));
                                var_14 |= 3286321075946313630;
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_5] [i_2] [i_5] [i_5] = (min(var_5, (arr_12 [i_0])));
                        var_15 *= (((((4130740849 ? var_8 : var_5))) ? (arr_5 [i_0]) : (((arr_11 [i_5] [3] [7] [i_0]) - var_10))));
                        var_16 += var_10;

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_17 = 232;
                            var_18 = 1;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_19 = var_9;
                            var_20 = ((((arr_0 [i_1] [i_7]) ? var_2 : (arr_4 [i_5]))));
                            var_21 = ((-6 ? var_0 : ((var_1 & (arr_8 [i_0])))));
                        }
                    }
                    arr_24 [i_2] [i_0] [i_0] = (((((((arr_20 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0]) ? var_0 : (arr_4 [i_0]))))) ? (((arr_19 [i_2] [i_1] [i_1] [i_1] [i_1] [i_0] [i_2]) + (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]))) : (((((arr_5 [i_2]) || (!15160422997763237986)))))));
                }
            }
        }
    }
    var_22 = ((min(-var_5, var_8)));
    var_23 |= ((var_9 ? 3683523037 : var_5));
    #pragma endscop
}
