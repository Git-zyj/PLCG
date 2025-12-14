/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_14 + (var_7 | 3738612943)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = ((((86 <= (arr_6 [i_1 - 1] [i_1 - 1]))) ? 1 : (arr_2 [i_0] [i_2 + 1])));
                    var_19 ^= ((-((~((137 ? var_7 : 20447))))));
                    arr_7 [i_2 - 1] [i_1 - 1] [i_1 - 1] [i_0] = ((((11811 > (arr_4 [i_2 + 1] [i_2 - 1] [i_1 - 2] [i_1 + 1]))) ? ((17 ? var_5 : 0)) : (81 % 17798)));
                }
            }
        }
    }
    #pragma endscop
}
