/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((!(var_9 >= var_0))) ? 65 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((var_5 ? (((max(119, 116)))) : ((0 & (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                var_11 = ((((max(-123, (min(var_4, -123))))) ? (arr_1 [i_0]) : (max((arr_1 [i_0]), ((max(-123, 114)))))));
                arr_7 [i_0] [i_0] [i_0] = 9223372036854775798;
            }
        }
    }
    #pragma endscop
}
