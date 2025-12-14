/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = ((((~(arr_8 [i_0]))) | ((~(arr_8 [i_0])))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] = 127;
                        arr_12 [i_3] [i_3] [i_2] [i_3] |= 120;
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, (((((1 && (var_10 && 57464))) ? (arr_16 [i_0] [i_0] [i_0]) : -var_12)))));
                        var_24 = -5660433332077206479;
                        arr_17 [i_0] [i_0] [i_2] [i_4] [i_4] = arr_6 [i_0];
                        arr_18 [i_0] [i_0] [i_0] [i_0] = (((((var_4 && 3491458925433820130) / -61)) >> (((min(var_17, var_0))))));
                    }
                    arr_19 [i_0] [i_1] [i_1] [i_1] = var_1;
                    arr_20 [i_0] = (max((((((arr_1 [i_1]) / var_18)) * 17469)), ((((!var_7) || (((arr_7 [i_2]) || var_7)))))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_25 |= (!(arr_2 [i_0] [i_1]));
                        arr_24 [i_1] [i_1] [i_1] |= ((!((((arr_10 [i_0] [i_1] [i_2] [i_1]) ? (arr_10 [i_0] [i_0] [i_0] [i_1]) : (arr_10 [i_0] [i_0] [i_0] [i_1]))))));
                        var_26 = ((-0 || ((((8528 & var_3) * ((~(arr_22 [i_2] [i_2] [i_0] [i_0]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
