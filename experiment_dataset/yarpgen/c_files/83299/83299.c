/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((!(var_12 < 18446744073709551615)))), ((var_5 ? (17301188422270441867 <= var_7) : var_11))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_15 *= 16061;
                var_16 = ((~(((arr_3 [i_0] [i_0 - 2] [i_1 - 1]) ? (((arr_5 [i_0] [i_0] [i_0]) ? (arr_4 [i_1 - 1] [22]) : (arr_4 [i_1] [i_0]))) : (((arr_3 [i_0] [i_0 - 3] [i_1]) + (-2147483647 - 1)))))));
            }
        }
    }
    var_17 = ((~((-(!var_12)))));
    var_18 -= ((var_8 ? ((76 - (-32764 || var_12))) : ((var_0 + (~var_4)))));
    #pragma endscop
}
