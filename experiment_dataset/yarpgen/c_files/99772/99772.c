/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (((min((arr_1 [i_1 + 1]), (arr_4 [i_1 + 2]))) > (arr_1 [i_1 - 1])));
                var_16 = (max(var_16, (1 % 2594665825)));
                var_17 += ((((486477420655598112 ? 4575192634471109292 : -22291)) == ((max((arr_2 [14] [i_1 + 2]), (arr_2 [1] [i_1]))))));
                arr_5 [i_1] = (var_11 ? (var_3 < var_7) : (((var_1 != (arr_2 [i_1] [i_1 - 1])))));
            }
        }
    }
    var_18 += (!var_4);
    #pragma endscop
}
