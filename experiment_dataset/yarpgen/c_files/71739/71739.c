/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_6;

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_16 = (-14504 >= 33062);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_8 [i_2] [i_1] [i_1] [i_1] [i_2 - 1] [i_3 - 1] = (min(((min(var_1, (var_13 > var_4)))), ((var_1 * (min(var_8, var_9))))));
                        var_17 -= ((max((var_8 * var_0), var_3)));
                        arr_9 [i_0] [i_0] [i_0] [6] [i_3] [i_0] &= var_13;
                        arr_10 [i_0] [i_1] [i_2] [8] = (((min((var_9 | var_3), (var_11 ^ var_1))) & (((((var_9 >> (var_11 + 490099675))) < (var_13 != var_3))))));

                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            var_18 = (((32479 * 0) >> (var_5 - 37691815)));
                            arr_13 [i_2] = 35501;
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_19 = (var_11 * var_0);
                            arr_16 [i_2] [i_0] [i_0 - 1] [i_0 + 1] [i_0] = ((var_6 <= (((var_1 + var_3) + var_6))));
                            var_20 &= (((11207962202739540904 >= 11207962202739540904) > ((var_9 ^ ((((var_12 + 2147483647) >> (var_14 - 2089870698))))))));
                            arr_17 [i_2] = (max(var_12, 30612));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
    {
        var_21 = var_7;
        arr_21 [i_6] = (var_2 && var_1);
    }
    var_22 = ((((max((52892 - 32473), (var_4 - var_3)))) - (min(var_10, (9903623100672946288 + 65506)))));
    var_23 = (((min(var_14, var_3)) - (var_5 - var_13)));
    #pragma endscop
}
