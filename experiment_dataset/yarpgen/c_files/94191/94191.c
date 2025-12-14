/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (1 < 4925);
    var_20 = (4927 | (min((~-2360358805955277724), var_15)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_0] [8] [i_0] = max((arr_4 [i_2 - 2] [i_2 + 2] [i_2 - 2] [i_2 - 3]), 65535);

                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            var_21 = (((((-(arr_1 [i_0] [i_1])))) & (min((arr_5 [4] [i_1]), -59446334276736623))));
                            var_22 = -var_7;
                            var_23 = ((-28063 / ((-((min(var_17, var_14)))))));
                        }
                        for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_24 = (arr_2 [i_1]);
                            arr_13 [i_0] [i_0] [5] [i_2] [i_3] [i_3] [9] = (min((max((var_11 != -4586699570697942448), (((arr_2 [i_5]) == 32937)))), ((((min(355, 4043))) < 1))));
                            arr_14 [2] [2] [i_1] [i_1] [i_1] [i_1] = 1;
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_25 = (~9048172632058466911);
                            arr_17 [2] [i_2] [i_3] [i_1] [i_2] [i_1] [i_0] = ((~(arr_4 [i_0] [i_2] [i_1] [i_0])));
                        }
                        for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_26 = (((-984896452 ^ (max(242, (-2147483647 - 1))))));
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_7 - 2] = ((min(var_18, (-2147483647 - 1))));
                        }
                    }
                }
            }
        }
        var_27 = max(((+((((-2147483647 - 1) && var_18))))), ((min(1, (arr_20 [i_0] [i_0] [0] [0] [0] [8])))));
        var_28 = (((max((!var_16), (((var_4 + 2147483647) << (var_10 - 3941948146)))))) & (min(((min(44220, 1))), (min(-984896451, -4661533168594689923)))));
    }
    var_29 = var_14;
    #pragma endscop
}
