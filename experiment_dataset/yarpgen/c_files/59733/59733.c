/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min(var_13, 18027882806943669967)));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_21 = (max((min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 2]))), (((arr_2 [i_0 + 1]) | (arr_2 [i_0 - 1])))));
        var_22 = (arr_1 [i_0 - 2] [i_0 - 1]);
    }
    var_23 = (min(((((var_0 ? var_4 : 2147483647)))), (!var_11)));
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_24 = (max(var_24, (((+(min((576460752303423487 * var_7), ((min((arr_7 [i_1 - 1] [i_1]), (arr_11 [13] [i_2] [i_2] [i_2])))))))))));
                    arr_12 [i_1 - 1] [i_1] = (((((-(arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])))) ? (arr_11 [i_1] [i_1] [i_2] [i_3]) : (min(-18027882806943669967, -1))));
                    var_25 = (max(((max(1, ((min(32767, (-127 - 1))))))), ((var_16 - (arr_9 [i_1 - 1] [i_2] [i_3] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
