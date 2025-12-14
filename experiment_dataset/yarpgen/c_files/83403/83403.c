/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (-5145 >= 215);
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 += (min(var_4, (((((var_10 ? var_13 : 7576025056367396496)) < (min(0, 18430415466114683916)))))));
                var_18 = (((arr_2 [i_1] [i_1] [9]) ? (((arr_2 [i_0] [i_0] [i_0]) ? var_3 : (arr_2 [i_0] [i_0] [i_0]))) : ((var_4 + (arr_2 [i_0] [i_0] [i_1])))));
                var_19 = (((~-35) ? (max(((min(var_11, 50030))), ((83 ? (arr_4 [i_0] [i_0] [i_0]) : 10870719017342155119)))) : ((-21 ? ((10870719017342155094 >> (((arr_3 [i_1] [0] [i_1]) + 1597301752)))) : 16328607594867692))));
            }
        }
    }
    var_20 = (max(var_8, ((((var_11 | -1902118567) ? (-1560955132 ^ 15505) : (~var_3))))));
    var_21 = 1865612417;
    #pragma endscop
}
