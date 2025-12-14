/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = ((!(((26 ? -27 : 26)))));
                    arr_8 [0] [i_1] [i_1] [i_0] = ((((((var_12 ? 219 : var_9)))) ? 1 : (((((var_3 ? -156030437638448795 : var_8))) ? (-127 - 1) : ((min(var_9, 26)))))));
                    arr_9 [i_0] [i_1] [i_2] [i_1] = (min(((0 ? -126 : var_1)), (((((-127 - 1) ? var_0 : 1245292556))))));
                }
            }
        }
    }
    var_15 = ((var_10 ? (((((var_9 ? var_0 : var_0))) ? -var_0 : 127)) : (!var_9)));
    var_16 = (max(((var_1 ? var_12 : var_3)), (((var_7 ? (((min(65535, 194)))) : 3237500881)))));
    var_17 = (!(((var_8 ? (!var_8) : var_1))));
    #pragma endscop
}
