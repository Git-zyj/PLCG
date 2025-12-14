/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = ((~((18 ? 1879048192 : 1107985894))));
                    arr_9 [i_0] [i_1] [4] = -32540;
                    var_21 = (min((((arr_4 [i_1] [i_0]) ? var_17 : 33)), 156));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_3] = (arr_2 [16]);
                        var_22 = ((!(((((((arr_1 [20] [i_2]) == 65520))) >> (((arr_3 [i_1]) + 1628)))))));
                        var_23 = (max((((arr_0 [i_0] [i_1]) || var_6)), (((arr_3 [i_0]) < var_10))));
                        var_24 = (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (min(905470364, (var_9 > 1859))) : (((((arr_4 [11] [i_3]) || (arr_10 [24] [24] [i_2] [i_3] [24] [6])))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [1] [10] = ((-(arr_1 [i_4] [i_1])));
                        arr_16 [i_2] [i_1] = var_17;
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_25 = ((261120 ? 1 : 254));
                        arr_19 [21] [i_2] [15] [15] = (((arr_13 [i_1]) > (((~(!1))))));
                        arr_20 [i_0] [i_0] [19] [i_2] [i_2] [12] = (((-57 & ((max(232, 156))))));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_1] [i_2] &= (!1495802794352129505);
                        arr_24 [0] [i_2] [0] [i_6] [i_2] = ((((min(((87 >> (((arr_14 [i_6] [i_2] [i_1] [i_0]) - 7731719066091777551)))), ((var_3 ? var_4 : (arr_3 [11])))))) + (arr_7 [i_2] [i_2] [i_2])));
                    }
                }
            }
        }
    }
    var_26 = ((((32531 || (((var_13 ? 22 : 32761))))) ? ((max(-32540, 120))) : 15));
    #pragma endscop
}
