/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_17 = ((((~((var_11 >> (((arr_2 [0] [i_0]) - 756131086))))))) ? (arr_2 [i_0] [i_0]) : (~var_0));
        var_18 = min((((~var_4) ? (arr_1 [i_0 + 1]) : (var_5 && var_11))), ((1 << ((max(var_0, 1))))));
        var_19 = ((-(min(((-(arr_0 [i_0] [i_0]))), (arr_2 [i_0] [i_0 + 1])))));
        arr_3 [i_0] = var_16;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_20 = ((1 || ((((((arr_1 [i_1 + 1]) + 2147483647)) >> (((arr_1 [i_1 + 1]) + 985057869)))))));
        var_21 = (var_16 << (((~1) + 30)));
        var_22 = var_13;
    }
    var_23 = var_8;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_24 = (~(((((((arr_7 [1] [i_3]) - 0))) || (arr_2 [i_3] [i_3])))));
                var_25 *= var_16;
            }
        }
    }
    var_26 = (((min(var_5, -545147834)) <= (min(var_3, var_14))));
    var_27 = (((var_9 <= 1) || (((var_12 & (min(2140602703, var_3)))))));
    #pragma endscop
}
