/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = var_7;
        var_21 = -64;
        arr_4 [i_0] [i_0] = var_7;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((-(((arr_3 [i_1]) ? ((-(arr_3 [i_1]))) : ((var_15 ? 192 : 1))))));
        arr_10 [i_1] [i_1] = min(((((1 & var_7) ? 19281 : ((((arr_2 [i_1] [i_1]) != var_5)))))), (min((arr_3 [i_1]), var_8)));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_18 [i_2] [i_3] [i_3] = 0;
                arr_19 [12] = ((((((~var_18) < ((((arr_16 [i_2] [i_3] [4]) <= var_15)))))) % (~1)));
                var_22 = (var_14 ^ 1);
            }
        }
    }
    var_23 ^= (((((((max(var_8, var_19))) ? -1 : (max(1, var_14))))) ? ((0 ? (min(var_15, 9007199254740928)) : (((max(var_12, var_6)))))) : var_0));
    var_24 = ((1 ? ((min((!var_10), var_0))) : ((((((0 ? 47 : 46258))) || var_17)))));
    #pragma endscop
}
