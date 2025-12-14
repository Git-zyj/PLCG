/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = var_11;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] &= (max((~var_0), (((-127 - 1) & var_5))));
        var_12 = ((-((max(0, 6924180365230370204)))));
        arr_9 [i_1] [i_1] = ((!(-6924180365230370226 ^ 6361)));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = 6924180365230370226;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_13 = (max(var_13, (((arr_17 [i_2] [i_2] [i_4]) ? -3079563926 : ((14 ? (min(2974429064220126132, (arr_10 [i_2]))) : (arr_4 [i_3])))))));
                    var_14 |= -6924180365230370204;
                }
            }
        }
        arr_20 [i_2] |= ((-(((30560 == ((min(var_7, 207))))))));
        arr_21 [i_2] [i_2 - 1] = (!var_6);
        var_15 += var_4;
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] = (13 + var_7);
        arr_25 [i_5] = (((((-(arr_19 [i_5] [i_5] [14] [i_5])))) / (((arr_19 [i_5 - 1] [i_5] [i_5 - 2] [i_5 - 2]) ? var_8 : -5323312019546289493))));
    }
    var_16 += 2993779102607688908;
    #pragma endscop
}
