/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    var_19 = 0;
    var_20 = (((((var_1 ^ var_8) <= var_6)) ? 3336396985 : (((18446744073709551614 & 7447453293011652612) & (max(1, var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_21 ^= (var_12 || 7079715886978166770);
                var_22 = (min(var_22, (arr_0 [i_0])));
                var_23 = (max(var_23, var_17));
            }
        }
    }
    #pragma endscop
}
