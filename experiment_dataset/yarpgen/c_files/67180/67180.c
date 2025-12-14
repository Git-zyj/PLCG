/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((max((max(var_7, 18446744073709551615)), var_1)) ^ var_7)))));
    var_12 = -87;
    var_13 |= var_7;
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((12790346537533201694 ? 5656397536176349922 : 12790346537533201681));
                var_15 = (max(var_15, ((((((((min((arr_1 [i_0]), var_6))) / (((arr_5 [i_0] [i_1]) / 64))))) / ((-(arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 2]))))))));
            }
        }
    }
    #pragma endscop
}
