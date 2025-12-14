/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_6));
    var_13 -= 4948167405579965246;
    var_14 = (min(var_14, (((var_0 ? var_0 : (var_9 != var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = 9677179305716005455;
                var_16 *= (((arr_4 [i_0] [i_1] [0]) / (((arr_3 [4]) - ((max((arr_4 [i_0] [i_1] [8]), var_1)))))));
            }
        }
    }
    var_17 = (max(var_17, ((((((51888 & (!0)))) ? ((((!var_0) <= (min(var_8, var_11))))) : (((18446744073709551615 || (!var_8)))))))));
    #pragma endscop
}
