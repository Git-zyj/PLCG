/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_1] [i_2] = ((-((((var_2 ? 0 : var_0)) << (((max(var_12, 3669653470)) - 3669653441))))));
                    arr_8 [i_2] = ((((1460036391632463791 ? (arr_1 [i_1 + 1]) : var_11))) ? (((arr_0 [i_2 + 2]) ? -1460036391632463786 : (arr_1 [i_1 - 3]))) : var_8);
                    var_13 = (min(var_13, ((max(6543753470811984579, -1460036391632463791)))));
                }
            }
        }
    }
    var_14 = (~var_5);
    var_15 = (((((var_8 <= ((var_6 ? var_10 : 1460036391632463786))))) <= ((max(var_1, (var_0 == -7))))));
    var_16 = var_1;
    #pragma endscop
}
