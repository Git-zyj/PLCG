/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_5);
    var_13 = ((var_4 >> (var_2 + 1811528086)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 += (((arr_4 [i_0 - 1]) | ((0 ? var_3 : (arr_4 [i_0 - 2])))));
                arr_6 [5] [i_0 - 2] = (min(var_10, ((var_5 >> (var_1 - 775571041059440041)))));
            }
        }
    }
    #pragma endscop
}
