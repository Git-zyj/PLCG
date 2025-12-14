/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (((~(-2401618962396517144 / 6400730039239448545))));
    var_16 = ((((var_6 < var_14) ? var_14 : 25231)));
    var_17 = (((((var_9 ? var_4 : var_3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, var_9));
        arr_2 [i_0] = ((((arr_0 [i_0]) || (arr_0 [i_0]))) ? 4294967273 : (-13997 || 1706287115));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((-(((max(9502350501816561631, 181932037)) * (var_5 / var_13)))));
        arr_7 [i_1] [i_1] = -93;
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_19 = (((var_9 >= 1302221525) ? (max((min((arr_12 [i_1] [i_1] [i_3]), var_4)), var_7)) : -10633));
                    var_20 = (max(var_20, (((((((arr_8 [1] [1]) ? (((~(arr_13 [12] [i_2 + 1] [i_2 - 3] [12])))) : (arr_4 [i_3])))) ? ((var_7 ? var_4 : (max(var_1, (arr_4 [i_2]))))) : ((max(((var_11 ? -10236 : 19)), (arr_12 [20] [20] [i_3])))))))));
                    var_21 &= (((((((arr_10 [i_1] [i_2]) / (arr_13 [10] [i_2 - 2] [i_1] [10]))))) * (min(1940558813385024992, (((-(arr_13 [22] [i_1] [i_1] [22]))))))));
                }
            }
        }
        arr_14 [i_1] = ((var_7 != var_4) % ((4294967282 ? 134216704 : 413719751)));
        var_22 *= (((87 ^ var_10) && (arr_3 [i_1] [4])));
    }
    var_23 = (~4294967282);
    #pragma endscop
}
