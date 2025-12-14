/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [10] [i_0] = 6323042390669826944;
                    var_11 = 4940678207807306463;
                    arr_11 [i_1] = (arr_6 [i_0] [i_2]);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_12 = var_3;
                        var_13 = (((((((arr_9 [i_0] [i_1] [i_0] [i_3]) ^ var_6)))) << (((min(5685, (arr_1 [i_0]))) - 5664))));
                        var_14 = (max(var_14, ((((var_6 ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_1] [i_1] [i_0])))))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_4] = ((((min(-5686, 15094337607888549839))) && (!12168093119148292621)));
                        var_15 = (max(var_15, ((max(134, var_2)))));
                        var_16 = (max(var_16, (((var_0 ? ((((((arr_7 [i_2]) ? 3352406465821001765 : (arr_16 [i_0] [i_0] [i_0] [i_4]))) > var_2))) : (arr_5 [i_0] [i_0]))))));
                        var_17 = (32515 ? (min((!5710), 7863904464478184266)) : 3352406465821001777);
                    }
                }
            }
        }
    }
    var_18 = var_0;
    #pragma endscop
}
