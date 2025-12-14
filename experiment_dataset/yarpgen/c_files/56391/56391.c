/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_6 & -250040583755017033) ? 2135656368 : var_5))) ? ((var_4 ? var_8 : 26438)) : (((var_9 ? (min(var_1, 48600)) : ((var_1 ? var_1 : -1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 *= ((((arr_3 [i_1]) ? (arr_3 [i_0]) : 1784964143266264763)));
                arr_7 [i_0] = ((((2135656368 ? -7657375740853745129 : ((((arr_4 [i_1]) ? (arr_4 [i_1]) : 19710))))) - 2159310940));
                var_12 = (arr_3 [i_0]);
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}
