/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 3;
    var_21 = (min(1, var_1));
    var_22 = (~(var_8 & var_19));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((+((min(var_14, (((arr_3 [i_0]) >= (arr_2 [i_0 + 1] [i_0]))))))));
                arr_7 [i_0] = ((!((((1 * -5620549649324845214) ? (arr_5 [i_0 + 1] [i_1]) : ((96 ? var_2 : (arr_0 [i_1]))))))));
            }
        }
    }
    var_23 = (((((~(~1)))) ? (((2147483647 ? 1 : 1))) : var_13));
    #pragma endscop
}
