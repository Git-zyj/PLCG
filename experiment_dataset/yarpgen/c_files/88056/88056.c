/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (((((arr_0 [i_0] [i_0]) ? (-724176779 == var_1) : var_1)) - (((arr_1 [i_0 - 4]) ^ 7860874089260777723))));
                var_16 = ((-(arr_1 [i_0])));
                var_17 ^= -48;
                var_18 += (min(((((-(arr_1 [i_1]))) >= -var_3)), ((max(var_5, var_3)))));
            }
        }
    }
    var_19 = (min(((((var_1 ? var_5 : var_8)) | -49)), ((var_13 ? -9191482954021267863 : ((var_13 ? 37 : var_8))))));
    var_20 = ((var_4 * 1) ? (max(var_2, var_11)) : -var_8);
    var_21 = 139;
    var_22 = (((((~((var_5 ? var_6 : 114))))) ? var_1 : ((~((max(111, -48)))))));
    #pragma endscop
}
