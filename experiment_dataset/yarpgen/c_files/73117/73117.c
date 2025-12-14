/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (min(((((((arr_4 [i_0] [i_1]) & (arr_3 [i_1] [i_1])))) ? (18446744073709551615 % 18446744073709551596) : (arr_0 [9] [i_1]))), var_10));
                var_15 = (((arr_2 [i_1 + 1] [i_1 + 2]) ? (arr_2 [i_0] [i_1 + 1]) : (((((min(8, var_9)))) + (min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))))));
                arr_6 [i_1] = arr_1 [i_1 + 1];
            }
        }
    }
    var_16 ^= var_0;
    #pragma endscop
}
