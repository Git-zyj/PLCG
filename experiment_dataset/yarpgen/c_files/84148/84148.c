/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 34715;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_0] = ((113247014 ? 126 : 4181720282));
                arr_9 [i_1] [1] [i_1] = (min((0 != 4181720270), (((27 ? var_15 : var_12)))));
                var_18 = (max(var_18, (arr_6 [i_0] [i_1])));
                var_19 = (arr_7 [i_1]);
                var_20 = (max(var_20, (((!((min((arr_5 [i_0]), (arr_5 [i_0])))))))));
            }
        }
    }
    var_21 = 1647734123;
    var_22 = ((6730292078071077295 > (((((var_6 ? var_16 : 225809549))) ? ((min(var_15, 491520))) : var_13))));
    #pragma endscop
}
