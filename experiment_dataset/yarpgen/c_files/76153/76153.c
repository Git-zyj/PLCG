/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_15 ? (((!((max(var_13, var_7)))))) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((~12288) ? (max((((arr_0 [i_0] [i_0]) ? 8670201925051279243 : var_1)), ((max(-9877, 224))))) : ((((min((arr_3 [i_0]), -808834865761366953)) * var_4)))));
                arr_5 [i_1] = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? -var_5 : ((-(arr_2 [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_17 = ((~(max((!var_11), ((var_4 ? var_8 : var_14))))));
    var_18 = (var_7 ? (min(((-31628 ? var_3 : var_0)), (min(var_3, 1)))) : (((-18293 ? (!var_6) : 2147483641))));
    #pragma endscop
}
