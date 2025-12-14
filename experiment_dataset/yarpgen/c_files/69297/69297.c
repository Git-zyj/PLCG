/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(var_0, var_0)))) >= 70368744175616);
    var_16 = var_9;
    var_17 = (((max(-56093, (-2 && 1476160168327806106))) > ((max(var_7, var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (max((((-((-319576322 ? 2147483647 : -2147483633))))), -var_11));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    var_18 = (((((var_2 + 2147483647) >> (((arr_0 [i_1] [5]) + 28474)))) == (var_4 / var_8)));
                    var_19 = (((arr_0 [i_0] [i_1]) ? (arr_6 [i_0]) : var_0));
                    arr_9 [i_0] [i_1] [i_1] = (2838811655896783346 / 18229);
                    arr_10 [i_1] [i_2] = ((-105 ^ (-2147483647 - 1)));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_3] = var_6;
                    arr_14 [i_0] [i_3] [i_0] = var_9;
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_18 [i_4] [i_4] [i_4] [i_4] = ((((-(arr_3 [i_4] [i_0] [i_4]))) <= (((arr_3 [i_0] [6] [6]) | (arr_0 [i_0] [i_0])))));
                    arr_19 [i_0] [i_1] [i_0] = ((((1476160168327806136 || ((var_12 && (arr_16 [i_0] [11] [i_4]))))) ? ((max((max(15, -534612003)), (((var_5 >> (((arr_2 [9] [i_1]) + 90)))))))) : (max(((min(var_8, -2147483643))), ((var_2 ? 1 : var_12))))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    var_20 = 65535;
                    arr_23 [i_5] = ((arr_12 [7] [i_5 - 1]) ? (arr_12 [i_0] [i_5 + 1]) : var_14);
                }
                var_21 = -534612003;
            }
        }
    }
    #pragma endscop
}
