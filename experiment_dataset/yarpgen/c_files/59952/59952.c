/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (arr_1 [i_1]);

                for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, (arr_0 [i_1] [14])));
                    arr_7 [i_0] [i_0] [i_2] = ((((((arr_0 [i_0] [i_0]) && (((var_17 ? var_13 : (arr_0 [i_2] [i_1])))))))) >= (arr_1 [i_1]));
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_21 += (((arr_5 [1] [i_1] [i_0]) == (arr_2 [i_3 - 1] [i_3 + 2] [i_3 - 1])));
                        arr_12 [i_0] [i_1] [i_4] = (((((arr_10 [i_3 + 3] [i_3] [i_3 + 3] [i_3 - 1] [i_3 + 1] [i_1]) ? (((arr_9 [1]) + (arr_6 [i_3] [i_1]))) : ((((var_10 || (arr_8 [i_0]))))))) + (((((arr_10 [i_3 + 3] [i_3] [i_3] [i_3 + 3] [i_1] [i_1]) <= (arr_10 [i_3 + 3] [10] [i_3 + 1] [i_3 + 3] [1] [i_0])))))));
                        var_22 += (var_16 % var_17);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_23 = (min(var_23, ((((((arr_10 [i_3 + 3] [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3 - 1] [i_3 - 1]) + 2147483647)) >> (((arr_10 [i_3 + 1] [i_3 + 3] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 3]) + 1424252317)))))));
                        var_24 = (max(var_24, ((((arr_0 [i_3 + 1] [i_3 + 3]) * (arr_0 [i_3 - 1] [i_3 + 1]))))));
                        var_25 = (max(var_25, ((((arr_9 [i_3 + 3]) / (arr_9 [i_3 + 2]))))));
                    }
                    var_26 = ((((((arr_2 [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : var_2))) || (arr_1 [i_3])));
                    var_27 += (arr_1 [i_3]);
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_18 [i_0] [7] [i_1] [3] = (((arr_5 [i_0] [i_1] [i_6]) >= ((var_5 ^ (arr_16 [i_6])))));
                    var_28 = (max(var_28, ((((((var_17 - (arr_5 [i_0] [i_0] [i_0])))) ? (arr_6 [i_6 + 1] [i_6 + 2]) : (1 ^ -45))))));
                    var_29 = (min(var_29, (arr_14 [i_1] [i_0])));
                }
                var_30 = (((((var_13 / (arr_9 [20])))) || ((var_5 || (((var_14 ? (arr_16 [i_1]) : (arr_16 [4]))))))));
                var_31 = (((((((((arr_17 [i_0] [i_0] [i_0] [i_0]) != (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [14])))) != (arr_10 [i_0] [i_0] [i_0] [i_0] [16] [i_0])))) | (((var_10 != (arr_8 [i_0]))))));
            }
        }
    }
    var_32 = (min(var_32, var_5));
    #pragma endscop
}
