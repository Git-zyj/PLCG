/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (985285896 + var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_2 [i_1 + 1] [i_1 - 1] [i_1]);
                var_18 = (var_2 ? (min(8, 3309681406)) : (arr_3 [i_0] [i_1 - 2] [i_1 - 1]));
                var_19 = ((~(((3309681406 >= ((((arr_2 [0] [i_0] [i_1]) ? var_4 : var_0))))))));
            }
        }
    }
    var_20 += ((min(((var_3 ? var_4 : 65535)), var_12)));
    var_21 = var_0;
    #pragma endscop
}
