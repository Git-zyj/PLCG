/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (~1);
        arr_3 [i_0] [i_0] = (((((min(((max(var_0, -32751))), (arr_1 [i_0]))) + 2147483647)) >> (var_12 - 263476860564449620)));
        arr_4 [i_0] = (min((-1 - -var_5), (-var_12 || 1)));
        var_14 = (min(var_14, (~70)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_15 = -var_11;
                    var_16 *= (var_12 ? (!2977639417) : (arr_5 [0]));
                    arr_13 [i_2] [i_2] [i_3] = ((-((-18942 ? (arr_5 [i_2 + 2]) : -37))));
                }
            }
        }
        var_17 -= (var_2 ? var_9 : (arr_12 [2] [2] [i_1] [0]));
        arr_14 [i_1] = ((-(arr_6 [i_1] [i_1])));
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_18 *= (max((((!((max(8678829464899311070, var_8)))))), 2977639431));
        arr_17 [i_4] [i_4] = (arr_16 [i_4]);
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
    {
        arr_20 [10] = (arr_16 [i_5 + 2]);
        var_19 = ((3487101432 * ((((((-37 ? -34 : 807865848))) ? (~-67) : var_7)))));
        var_20 = (max(2977639423, 3782234602));
    }
    var_21 *= ((((((!15125) - ((max(var_6, var_9)))))) < var_12));
    var_22 = var_6;
    var_23 = (max(((var_1 ? var_5 : var_12), ((max(15125, 50))))));
    #pragma endscop
}
