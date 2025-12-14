/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((min(((max(var_6, var_4))), (max(18065797787058694625, 2)))) - (min(2, 18065797787058694605)))))));
                arr_5 [i_0] [i_0] = (min(((var_11 ? (arr_3 [i_0]) : (arr_3 [i_0]))), var_8));
                var_18 -= (((((((max((arr_3 [14]), var_9))) ? ((min(-3, (arr_2 [i_1])))) : var_13))) ? ((var_9 ? var_5 : (arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 2]))) : (((((arr_2 [i_0 - 1]) < var_15))))));
                arr_6 [i_0] = (18065797787058694634 % 10);
            }
        }
    }
    var_19 = (var_14 == var_16);
    #pragma endscop
}
