/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (max(var_10, ((((((min((arr_2 [19]), (arr_0 [i_0]))) | -4050277570)) < ((((5675443334218370867 > ((((arr_0 [i_0]) ? (arr_1 [i_1]) : (arr_2 [i_0])))))))))))));
                var_11 = (min(4050277570, (arr_2 [i_0])));
            }
        }
    }
    var_12 &= (min(var_8, 192));
    var_13 = (var_8 | var_8);
    var_14 = ((var_8 + (201 ^ 2968392132)));
    var_15 = ((4503599627370495 >= ((((min(var_1, var_4))) ? (min(4050277570, 18446744073709551611)) : (((var_9 ? 0 : (-2147483647 - 1))))))));
    #pragma endscop
}
