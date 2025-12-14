/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(((var_0 <= var_1) ? var_8 : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (max(var_12, 7705031472416751507));
                var_13 = ((((((((min((arr_3 [i_0]), var_6))) <= 29)))) == (max(var_4, (((var_5 >> (var_1 - 4292463665322079101))))))));
            }
        }
    }
    #pragma endscop
}
