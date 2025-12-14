/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = 3;
                var_12 = ((((((arr_0 [i_0 - 2]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_1])))) ? (13938121732859917462 * 9) : (((-24 ? (arr_0 [i_0]) : var_3)))));
                var_13 = (((~var_5) ? (min(var_1, ((32704 ? 9223372036854775801 : -38)))) : 32815));
                arr_5 [i_0] = (min(((32838 ? 13244464087139959732 : (var_2 > var_5))), -571504825));
                var_14 = (min(var_14, (var_3 & var_1)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            {
                arr_10 [i_3] = (min(-15015, 13938121732859917456));
                arr_11 [i_3] [i_3] [i_3] = (max((min(32718, 4294967295)), ((((arr_0 [i_2]) < (arr_9 [i_2] [i_2] [i_3 + 1]))))));
                arr_12 [i_3] [i_3] = (~3277927275);
            }
        }
    }
    var_15 = (~var_3);
    var_16 = (min(var_9, -5));
    #pragma endscop
}
