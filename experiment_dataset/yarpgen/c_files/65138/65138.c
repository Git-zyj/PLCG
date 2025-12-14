/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((~((-11801 ? var_11 : var_0))))));
    var_18 = (max(var_18, ((min(187, 12)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (min(var_19, 51784));
                arr_5 [i_0 - 2] [i_1] &= ((((min((arr_4 [i_0 - 1]), (min(var_7, (arr_2 [i_0])))))) && (((13704 ? (arr_3 [i_0 + 4]) : (arr_2 [i_0 + 3]))))));
                var_20 = (max(var_20, (((13751 * (5328148163472009823 == 1218042426))))));
                arr_6 [i_1] [i_0] [i_0] = ((-12 ? (!255) : (arr_2 [i_0 + 3])));
            }
        }
    }
    #pragma endscop
}
