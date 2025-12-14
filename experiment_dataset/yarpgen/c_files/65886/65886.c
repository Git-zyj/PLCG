/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_10 && var_6);
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (((((arr_3 [i_1] [i_1]) / (arr_2 [i_0])))) ? ((10094564052369572579 ? 10367170601940400812 : ((((-1 + 2147483647) >> 13))))) : ((((var_1 ? var_9 : (arr_1 [i_1 - 1]))) >> ((((14982268141554594646 ? (arr_3 [i_1] [i_0 - 1]) : var_1)) + 1250924870)))));
                arr_5 [i_0 - 1] [i_1] [i_1] = (max((((!(arr_2 [i_0 + 1])))), (((((max(var_8, -2147483641)) + 2147483647)) >> (((arr_1 [i_0 + 1]) + 1488620877030761596))))));
            }
        }
    }
    var_14 = (var_6 >> var_8);
    var_15 = var_0;
    #pragma endscop
}
