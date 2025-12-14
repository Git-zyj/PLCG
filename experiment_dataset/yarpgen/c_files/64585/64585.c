/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_12);
    var_20 = (max((((!var_9) % var_12)), 4294967295));
    var_21 = (((min((var_5 && 44587), (953206320 % 65427)))) ? (min(var_10, var_14)) : var_16);
    var_22 = ((var_15 == (((var_2 + (!var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_23 = (((((var_0 + var_4) ? 4294967295 : -40932)) != (((63805 >= (arr_3 [i_1 + 2] [i_1]))))));
                arr_5 [i_1] = ((arr_1 [18] [18]) & (((-(arr_2 [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
