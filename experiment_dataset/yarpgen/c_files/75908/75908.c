/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = (max(var_18, (((~((var_4 ? (~var_1) : ((var_3 ? var_16 : var_4)))))))));
            arr_4 [i_0] [i_1] [i_1] = (((!((max(-78, (arr_2 [5])))))));
            arr_5 [i_1] [i_1] = ((var_12 ? (((min(var_12, 23676)))) : (((arr_0 [i_0]) / ((var_6 ? (arr_0 [i_0]) : (arr_1 [i_0])))))));
            arr_6 [i_1] [i_1] = ((-23670 ? 23676 : 32220));
        }
        arr_7 [i_0] [i_0] = 52;
        arr_8 [i_0] = 200876530755578108;
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_3] [i_2] = (((0 || -78) ? (arr_12 [i_2 + 1] [i_3] [i_2 + 1]) : -var_13));
                    arr_17 [i_4 - 1] [i_2] [i_2] [i_2] = (max((-12341 / -4107), -78));
                    arr_18 [i_2] = ((((((((var_13 ? 1103809845 : var_7))) ? var_9 : (~-108)))) ? (((((var_17 ? 29983 : var_13))) ? (max(3651619174, -23670)) : ((max(var_2, var_6))))) : (-1106628049270964966 & var_11)));
                    arr_19 [i_2] [i_3] [i_3] = (min(var_3, 0));
                }
            }
        }
    }
    var_19 = ((((min(var_6, -16885))) ? ((var_16 ? (var_5 && var_6) : (var_10 | var_15))) : var_16));
    var_20 = ((~(((((var_10 ? var_12 : var_15))) ? var_9 : (max(var_15, var_17))))));
    #pragma endscop
}
