/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = min((1 >= -17524619), ((32751 << ((((arr_0 [i_0] [i_1]) > -32756))))));
                var_21 = (max(var_21, ((((((arr_0 [i_0] [i_1]) % (arr_2 [i_0] [i_0] [0]))) > -2)))));
                var_22 = (max(var_22, ((((1 || -32736) && ((((arr_3 [1]) ? (arr_0 [i_0] [i_0 - 3]) : (arr_4 [i_1] [i_1])))))))));
                var_23 = (((4294967294 + 1) >= ((+(min((arr_0 [i_0] [i_0]), (arr_5 [1] [i_0] [i_1])))))));
            }
        }
    }
    var_24 = (max(((((min(var_16, -4634)) > -15))), ((var_10 >> (var_17 - 3406626120872163210)))));
    var_25 = ((max(((var_9 ? var_10 : 32755)), 32751)) < ((-(1 != -32753))));
    #pragma endscop
}
