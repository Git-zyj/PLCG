/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_3, var_12));
    var_14 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = max(((((((-24796 ? (arr_4 [i_0] [11] [1]) : (arr_2 [i_0])))) ? var_11 : (min((arr_1 [i_0] [i_1 + 2]), (arr_2 [i_1])))))), ((+((3387989839826266235 ? (-9223372036854775807 - 1) : -24796)))));
                arr_5 [i_1] [i_1] [3] = (max(1, (min((arr_4 [i_0] [i_1 - 1] [i_1 - 1]), ((0 ? (-32767 - 1) : -5505))))));
            }
        }
    }
    #pragma endscop
}
