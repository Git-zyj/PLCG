/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max((((~var_6) ? 6111335058056186949 : 6111335058056186949)), (((((var_0 ? var_0 : var_2)) < 114))))))));
    var_15 -= (~0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = ((-(((var_6 ? var_3 : var_5)))));
                    var_17 = (~((((var_1 ? var_9 : var_11)))));
                    arr_8 [i_2] [i_2] = (((arr_4 [i_1]) != -114));
                    var_18 = ((var_5 ? ((-((max(-117, (arr_6 [i_2] [i_2])))))) : ((((var_1 & var_10) != var_2)))));
                }
            }
        }
    }
    #pragma endscop
}
