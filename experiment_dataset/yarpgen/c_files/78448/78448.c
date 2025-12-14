/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((max((~0), var_11)), ((var_14 ? (var_12 ^ 10194881367082819168) : (var_13 || var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (max((var_4 ^ 14336), (min(1333297323477008272, var_11))));
                var_18 = (min(var_18, (((((arr_0 [i_1] [i_1 - 1]) > (arr_0 [i_1] [i_1 - 1])))))));
            }
        }
    }
    #pragma endscop
}
