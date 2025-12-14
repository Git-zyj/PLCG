/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((var_3 ? var_4 : var_9))) ? var_9 : (min(-4919, var_7))))) ? (min((((var_9 ? var_3 : var_0))), var_6)) : ((-((-3758995060213795366 ? var_5 : var_7))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min(((-(var_3 != var_0))), 1219688910));
        arr_3 [i_0] [i_0] = ((1219688937 ? ((var_9 ? (arr_1 [i_0]) : var_3)) : var_5));
        arr_4 [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] = ((-1101218971 ? -4924 : 4902));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_11 = ((215900628 ? 38154 : -12));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_12 = (min(var_12, (~var_2)));
                    var_13 = (max(var_13, ((((arr_1 [i_1]) ? ((1345722917 ? (arr_7 [i_1]) : var_3)) : ((2932539779892901825 ? (arr_12 [i_2] [i_3]) : var_0)))))));
                    var_14 = ((~(((arr_9 [i_1]) ? var_7 : var_2))));
                }
            }
        }
        arr_15 [i_1] = ((!((((arr_9 [i_1]) / 2932539779892901816)))));
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        arr_18 [i_4] = var_1;
        var_15 = 1;
    }
    var_16 = ((((((((var_3 ? var_0 : var_9))) ? var_7 : var_0))) >= 5013668015850302411));
    #pragma endscop
}
