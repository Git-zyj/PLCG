/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((((((1 ? var_4 : var_4))) ? var_3 : var_1))), (min(4294967295, var_4))));
    var_12 = (((((!(!var_3)))) > (min(65534, (-2147483647 - 1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 -= ((!((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (!65524);
                    arr_8 [i_0] [i_0] [13] = (((arr_3 [i_1 - 1]) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 + 3])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_15 = arr_2 [i_3] [i_3];
        arr_11 [i_3] = ((((min((arr_10 [i_3]), (arr_10 [i_3])))) ? ((max((~var_0), (max((arr_3 [i_3]), (arr_2 [i_3] [i_3])))))) : ((-8267 ? (arr_3 [9]) : (((arr_4 [i_3] [i_3] [i_3]) ? (arr_1 [i_3]) : (arr_0 [i_3])))))));
        var_16 = (arr_10 [i_3]);
    }
    var_17 = ((((var_4 && (max(var_10, var_1)))) ? var_4 : (var_3 && -8041703603321332398)));
    var_18 = (((((((var_1 ? var_4 : var_4)) << var_10))) == (min(1, (max(8041703603321332406, var_10))))));
    #pragma endscop
}
