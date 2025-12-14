/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((var_12 / ((-((max((arr_3 [i_0] [i_0 - 2] [i_0]), (arr_0 [i_0]))))))));
                var_21 *= (((-var_14 + 2147483647) << ((((-(arr_3 [i_0 + 1] [i_0 - 1] [i_1 + 1]))) - 30352))));
                arr_5 [i_0 + 1] [i_1 - 1] = min((((arr_1 [i_0] [i_0 + 1]) == (((((arr_3 [i_0] [i_1] [i_1 + 1]) > (arr_3 [i_0] [14] [i_1 + 1]))))))), (((arr_4 [i_1 + 1]) == (arr_4 [i_1 + 1]))));
                arr_6 [i_0 - 2] [i_1 + 1] = (min(var_13, ((max(((((arr_0 [i_1 - 1]) > var_18))), 0)))));
            }
        }
    }
    #pragma endscop
}
