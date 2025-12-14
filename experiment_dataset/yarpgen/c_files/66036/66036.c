/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2126313508918362551;
    var_21 = (var_3 ? ((-1180428010857425818 ? (!var_16) : (max(1180428010857425817, -1214430596160334657)))) : (((var_12 || 1152921504606781440) ? ((var_11 ? var_8 : -2)) : var_14)));
    var_22 = ((!((min((!-1180428010857425818), var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_23 = (min(var_23, 7881299347898368));
                arr_6 [i_1] = max((-9223372036854775807 - 1), -2739181350954431702);
                var_24 ^= ((var_6 ? ((arr_3 [i_1 + 2]) : (min(2739181350954431701, (arr_4 [i_0] [i_0] [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}
