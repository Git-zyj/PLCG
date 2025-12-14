/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= 4482861181634644710;
    var_21 = (max(((((min(var_2, var_13))) ? ((-1179230843 ? 16376 : var_13)) : -76)), var_12));
    var_22 = (~var_14);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_23 = (max(var_23, ((((((arr_0 [0] [i_0 - 2]) ? (arr_0 [18] [i_0 - 2]) : (arr_0 [16] [i_0 - 2])))) - var_7))));
                var_24 = (min(var_24, (!-8)));
                arr_5 [i_0] = (((((arr_1 [i_0]) ? -7580 : (arr_4 [i_1] [i_1] [i_1])))));
                var_25 = ((((!(((1179230843 ? (arr_3 [i_0 - 2] [i_1]) : (arr_4 [i_0 - 2] [i_1] [i_0])))))) ? 268173312 : (min(15536644340622927711, 8602567476459028093))));
            }
        }
    }
    #pragma endscop
}
