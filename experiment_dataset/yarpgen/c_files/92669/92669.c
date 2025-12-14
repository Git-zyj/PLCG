/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 210));
    var_15 = -12;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= (7 < -30157);
        var_16 = (min(((max(2748707361281466300, 1))), ((((max((arr_1 [i_0] [i_0]), (arr_2 [i_0])))) ? ((210 << (var_12 + 91))) : ((51276 ? var_0 : 65528))))));
        var_17 = (max(var_17, 1));
        var_18 &= ((!(arr_1 [i_0 + 1] [i_0])));
        var_19 = (min(var_19, ((min((min(((706833892 ? 1 : var_1)), (arr_2 [i_0]))), -var_10)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = 65513;
        arr_8 [i_1] [i_1] = var_11;
        var_20 ^= ((-(arr_1 [i_1] [i_1])));
        var_21 -= (((arr_5 [i_1]) ? (arr_4 [i_1]) : (arr_1 [i_1] [i_1])));
        arr_9 [i_1] = ((((1 * (arr_5 [i_1])))) ? ((248 ? (arr_2 [i_1]) : 5990)) : ((var_9 ? 255 : (arr_5 [i_1]))));
    }
    #pragma endscop
}
