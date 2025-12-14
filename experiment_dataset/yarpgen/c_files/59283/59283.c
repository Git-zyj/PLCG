/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_21 = (min(var_21, ((((1 - 811104373) ? (((1 ? (arr_3 [i_0]) : var_11))) : (((max(var_11, 1)) ? -6587647778263195283 : ((4323455642275676160 ? (arr_1 [i_0]) : var_6)))))))));
        arr_4 [i_0] = ((236 ? -811104374 : 20));
        arr_5 [i_0] = ((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_6 [i_0] [i_0] = ((min((arr_1 [i_0]), -811104394)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_22 ^= ((0 ? ((1 ? 562949953159168 : 0)) : (1 != 1)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_23 = (min(var_23, -811104381));
                        arr_19 [i_2] [i_2] [i_3] [i_4] [i_4] [i_1] &= arr_1 [i_3];
                    }
                }
            }
        }
        arr_20 [i_1] &= (((arr_1 [i_1]) ? ((((arr_9 [i_1] [i_1]) ? -811104358 : ((3586939355723392793 ? (arr_0 [i_1]) : (arr_14 [i_1])))))) : (max((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]), ((((arr_3 [i_1]) ? 50 : 422743466)))))));
    }
    var_24 &= var_10;
    #pragma endscop
}
