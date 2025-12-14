/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (max(888963557, -233586570));
                    var_20 = (((((233586570 ? -233586584 : -86638701))) ? ((-233586557 ? ((14256221145351952452 ? 138 : 93)) : (-233586570 & 86638698))) : ((-888963558 / (((arr_0 [i_2]) * (arr_1 [i_0])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                var_21 = (min(var_21, (((((arr_1 [i_3]) ? (((arr_4 [i_3]) ? (arr_0 [1]) : (arr_3 [0] [i_3] [i_3]))) : (max(-233586571, (arr_1 [i_4])))))))));
                arr_14 [i_3 + 1] [i_3] [i_3 + 1] = 194;
                arr_15 [i_3] [i_3 - 1] = 0;
                arr_16 [i_3] [5] = (((15 ? (arr_2 [i_4]) : ((-233586571 ? 32760 : 1)))));
                arr_17 [i_3] [i_4 + 3] = 2643701352509633573;
            }
        }
    }
    var_22 = ((((111 ? var_7 : (min(-86638699, var_11)))) << (((var_8 + 5335448063742917585) - 10))));
    var_23 = (max((max((!var_3), ((-233586543 ? var_8 : var_16)))), ((max((max(var_15, 233586581)), ((var_2 ? var_2 : var_2)))))));
    var_24 = (max(var_24, ((((((233586542 ? (var_11 != -32757) : ((-5 ? var_19 : var_7))))) ? -var_15 : ((((((max(var_11, var_11)))) != (min(var_3, var_4))))))))));
    #pragma endscop
}
