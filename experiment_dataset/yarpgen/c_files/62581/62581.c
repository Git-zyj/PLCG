/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(((((-8333 ? 8319 : var_1)))), 7783);
    var_21 = (max(var_21, (((!(((min(var_18, 0)) > -1132684840705178475)))))));
    var_22 = ((!((((var_0 / 23623) ? ((32767 ? var_8 : 3638207853075711899)) : -1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1 - 1] = (max(((((23624 ? 32755 : (arr_4 [i_2] [i_1 + 1]))) * (arr_2 [i_1 - 3]))), -23637));
                    var_23 = (min(134, -6031041436304553593));
                    arr_9 [i_0] = ((((6005988566554460117 ? var_0 : -32767))) ? ((((min((arr_5 [i_0] [10] [i_2]), -32755))) ? (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 2]) : (arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 2]))) : var_8);
                }
            }
        }
    }
    #pragma endscop
}
