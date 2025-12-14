/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_8));
    var_16 *= (min((((2 ? 1 : 68))), ((3451571956 ? (!var_1) : var_14))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] &= (((((2147483644 ? (max(var_9, (arr_2 [i_0]))) : 1))) ? var_4 : (((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_17 = (((-(arr_1 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_18 = (min(((-((1 ? var_0 : 3451571975)))), (((max(134, -964051405))))));
        var_19 *= ((((max(1, (~var_5)))) ? (((+((max((arr_2 [i_1]), var_0)))))) : (((((1 ? (arr_6 [i_1]) : 313632145))) ? (((min(1, 14)))) : (min(573820306659048816, 1))))));
    }
    #pragma endscop
}
