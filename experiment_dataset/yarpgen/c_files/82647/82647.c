/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_16, (min(((var_7 ? var_9 : var_16)), var_12))));
    var_19 = (((var_7 ? 59 : 994608662)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (((((((19624 ? 32205 : (arr_4 [i_0] [i_0])))) ? -var_14 : ((((arr_2 [i_0] [i_0] [i_1]) ? (arr_2 [i_0] [4] [1]) : var_15))))) <= ((((((61211 ? -32765 : 13635417060581291575))) ? 1455437034 : 1)))));
                arr_5 [i_1] [i_1] = (max((((arr_4 [i_0] [i_1]) ^ (arr_4 [i_1] [i_0]))), ((31243 ? (((arr_0 [6]) ? 1048 : var_1)) : ((1104 ? -651311295 : var_8))))));
            }
        }
    }
    var_21 ^= var_1;
    var_22 = ((var_4 ? -460032896 : ((135 ? 3477215892722616264 : 32767))));
    #pragma endscop
}
