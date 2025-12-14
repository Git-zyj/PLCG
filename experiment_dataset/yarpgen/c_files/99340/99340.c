/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 48818;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((48811 ? (((127 ? (((-21 ? 48805 : (arr_0 [i_0])))) : ((~(arr_1 [i_0])))))) : ((239 * (53456 & 14499988499166130525)))));
        var_14 = ((-2377607864388808317 & (((3946755574543421065 >= 1202392292) ? -6610938654455251433 : (var_1 / 1)))));
    }
    var_15 = var_2;
    var_16 = ((var_5 >> ((((214 ? var_8 : ((((-1675453151 + 2147483647) >> (62884 - 62881)))))) - 3101115413352191404))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_17 = (max(((((arr_4 [i_2]) ? (arr_4 [i_1]) : (arr_4 [i_1])))), (max((arr_4 [i_1]), 4224534640))));
                var_18 = 37306;
                var_19 ^= (6610938654455251433 && (((arr_2 [i_1]) && var_8)));
                arr_7 [i_2] = ((((((28229 - (arr_4 [i_2]))) - (arr_6 [i_1] [i_1]))) - 3425777588));
            }
        }
    }
    #pragma endscop
}
