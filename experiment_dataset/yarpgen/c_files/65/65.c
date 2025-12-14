/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((var_10 ? (8 | 1) : -214));
                    arr_10 [i_0] [i_2] = ((!((((arr_8 [i_2] [i_1] [i_0]) % (var_19 * -20))))));
                    var_20 = (((!((max(-18366, 267137399))))));
                    var_21 = (max(var_21, ((((((arr_4 [i_0] [i_0]) != var_5)) ? ((~((38488 ? 186 : var_16)))) : (((arr_8 [i_0] [i_1] [i_0]) | (arr_8 [i_0] [i_0] [i_0]))))))));
                    var_22 = (var_7 | 38488);
                }
            }
        }
    }
    var_23 = (!255);
    #pragma endscop
}
