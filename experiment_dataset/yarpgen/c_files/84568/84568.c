/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 3431367421;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_19 ^= ((((max((arr_1 [i_1]), (arr_2 [i_0] [i_0])))) - (4245678710225291082 + 863599875)));
                var_20 = ((!(((-(arr_2 [i_1 + 2] [i_1 + 2]))))));
                arr_4 [0] [0] &= ((~((~(((arr_0 [i_0]) ? (arr_3 [i_0] [2]) : 201))))));
                var_21 = ((57898 ? ((-9223372036854775807 ? ((var_6 & (arr_0 [3]))) : ((max(var_9, var_4))))) : ((((-9223372036854775807 ? -6378396213074961258 : 18446744073709551589)) / ((((((arr_1 [13]) + 2147483647)) << var_5)))))));
                var_22 = ((var_12 ? (min((((arr_1 [i_0]) ? var_15 : (arr_3 [i_1] [i_0]))), -3431367411)) : 3431367393));
            }
        }
    }
    #pragma endscop
}
