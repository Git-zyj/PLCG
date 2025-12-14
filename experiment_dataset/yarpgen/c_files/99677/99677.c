/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= 364564575;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((!((max((min(727068392, (arr_4 [i_1]))), ((var_2 >> (((arr_4 [i_1]) - 14360610878144417570))))))))))));
                var_21 *= (((((2636137184 ^ var_4) & var_10))) || ((((-32767 ^ var_7) ? var_13 : (arr_4 [i_0])))));
            }
        }
    }
    var_22 = ((((((229 ? 1 : 360641741))) ? (var_15 - var_6) : var_4)));
    #pragma endscop
}
