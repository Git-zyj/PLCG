/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_4 [i_0] [i_0]);
                var_14 += ((!(arr_2 [i_0])));
                arr_6 [i_0] = (min((((((var_7 % (arr_0 [i_0])))) ? (((arr_3 [0]) % (arr_2 [i_1]))) : var_7)), ((((arr_4 [i_0] [i_0]) ? var_0 : (arr_4 [i_0] [i_0]))))));
            }
        }
    }
    var_15 = (~(((!var_9) ? (!var_2) : (2130767902 < -692))));
    #pragma endscop
}
