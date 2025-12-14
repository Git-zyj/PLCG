/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_7 ? var_7 : (max(var_2, var_2)))));
    var_15 -= var_5;
    var_16 += ((var_10 ? (((min((0 != var_5), var_4)))) : var_6));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((arr_1 [i_0 - 1] [i_0 + 1]) ? var_4 : var_3)) * (((~(arr_1 [i_0 + 3] [i_0 + 3]))))));
        var_17 = var_10;
        var_18 = (max(var_18, var_4));
        var_19 = var_5;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_20 *= (((((((min(6383628835540524816, 3911))) ? (arr_0 [i_1]) : (arr_0 [i_1 + 3])))) ? var_2 : -6383628835540524813));
        var_21 = (min(var_21, (((((((-6383628835540524816 ? -507872118134601062 : 4294967295))) != (((arr_1 [3] [i_1]) ? 216 : var_9))))))));
    }
    #pragma endscop
}
