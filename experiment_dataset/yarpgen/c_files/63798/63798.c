/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((1 ? 0 : var_11))) ? (max(var_10, 46)) : (((var_8 ? var_0 : 1)))))) ? (((((-6703677434862643290 ? -28858 : var_14))) ? ((var_3 ? var_13 : var_5)) : 106)) : ((((((221 ? -21286 : 26))) ? (var_8 > var_6) : ((var_4 ? var_7 : -1))))));
    var_17 = (min(255, (((255 && var_2) - ((max(-8298, 1)))))));
    var_18 = (max((min((~var_1), (((-2754 + 2147483647) << (1 - 1))))), (min(((var_10 ? 245 : var_9)), (58514 % var_4)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(var_11, (((arr_1 [i_0]) ? 1 : 1))));
        var_19 = (min(var_19, ((((((var_8 ? 2219209491227343035 : (((var_14 ? -22039 : 13)))))) ? (arr_0 [i_0]) : (9081352826073029174 / var_4))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_0] = (((min(((var_4 ? 18446744073709551615 : (arr_9 [i_0] [i_1] [i_0]))), (arr_6 [i_1]))) < var_0));
                        arr_11 [5] [i_3] [i_2] [5] [i_0] = ((arr_1 [i_0]) / ((min((arr_1 [i_0]), (arr_1 [i_0])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
