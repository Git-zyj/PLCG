/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((min(-5212, -1945112457)), ((var_6 ? (var_4 >= 1) : ((var_15 ? var_9 : 27162))))));
    var_21 = ((((844170379 ^ (((var_18 ? var_7 : 143596438)))))) ? (((var_18 > (min(var_14, var_4))))) : 247);
    var_22 += (min(22153, 4565));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_23 = var_19;
                var_24 = (max(var_24, (min(((max((((arr_3 [i_1 + 1] [i_1]) ? (arr_0 [i_0] [i_1]) : var_8)), (((9 ? var_11 : (arr_4 [i_1] [13]))))))), (((arr_1 [i_1 - 3] [i_1 - 1]) ? (arr_1 [i_1 + 1] [i_1 - 3]) : (arr_1 [i_1 - 4] [i_1 - 3])))))));
            }
        }
    }
    var_25 += var_14;
    #pragma endscop
}
