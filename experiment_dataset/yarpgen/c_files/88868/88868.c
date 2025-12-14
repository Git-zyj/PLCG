/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((939284608 ? (((8523 | var_5) ? var_8 : (!-1))) : 8086427482463119535));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (min(52015, -var_2));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [20] = (((min(((-9061 ? var_1 : -8086427482463119522)), (((var_4 ? 15550 : (arr_8 [i_3] [i_2])))))) & 8086427482463119522));

                        for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            var_20 = ((-8086427482463119513 ? 16601689143548837810 : 8086427482463119533));
                            arr_15 [17] [i_1] [i_4] [i_1] [i_0] [i_2] = (min(((min((arr_1 [i_0]), (arr_14 [i_0] [i_4])))), ((((-8086427482463119515 && 663680464) == (8086427482463119532 < 603932424))))));
                            var_21 = (((max((var_16 + 1), (((var_6 ? (arr_3 [i_0] [i_3] [i_4]) : var_13)))))) ? (((((arr_12 [i_0] [i_3] [i_3] [i_4 - 2] [i_4] [i_4 - 2]) >= var_4)))) : (arr_12 [i_4] [i_4 - 2] [i_3] [i_2] [i_0] [i_0]));
                        }
                        for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, ((((((!var_17) ? (-8086427482463119521 != 1940495776) : ((130 | (arr_8 [i_0] [i_0]))))) >> (((!((((arr_4 [i_0] [1] [1]) ^ var_3)))))))))));
                            var_23 = var_12;
                            var_24 &= ((-var_0 ? var_12 : ((((min(536739840, 1269807893)) < (-62 * 38521))))));
                            arr_18 [i_0] [i_3] [i_2] [i_2] [2] [i_5] [i_0] = ((~(65535 ^ 1)));
                        }
                        for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, 2354471543));
                            var_26 = ((((((max(3390634333051467479, 8597973018853721115))) ? (var_1 + var_16) : (min(5200666352288966116, 1040089067)))) > ((((((min(14614, 1)))) & 8086427482463119501)))));
                        }
                        for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_27 = var_6;
                            var_28 = (min(var_28, (((((var_13 ? (arr_1 [i_2]) : var_11)) ^ (!13246077721420585504))))));
                            arr_24 [i_2] = ((38850 ? 126 : 120));
                        }
                        var_29 ^= 8086427482463119521;
                    }
                }
            }
        }
    }
    var_30 = (min(var_9, var_11));
    var_31 += -var_6;
    #pragma endscop
}
