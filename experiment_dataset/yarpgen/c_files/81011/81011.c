/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = (((((var_6 ? -8 : var_3))) ? (((max(var_9, var_2)) / 9)) : (((6143 * 11650) ? ((-7 ? 1475699823 : var_0)) : ((min(var_0, var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = 6;
                    arr_7 [i_0] [i_0] [4] [i_0] = ((min(17569, 9)));
                }
            }
        }
    }
    var_13 = (((~2) ? (((~(var_3 ^ var_9)))) : ((((var_4 ? 9223372036854775807 : var_2)) | var_8))));
    #pragma endscop
}
