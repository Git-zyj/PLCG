/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_11 = var_6;
        var_12 = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                var_13 = ((22 ? var_9 : ((var_4 | (var_3 - var_4)))));
                var_14 = (max(((6 >= (min(var_10, 65529)))), (((arr_1 [i_1 + 1]) == (min(var_8, (arr_3 [6] [i_2])))))));
                var_15 = ((((((var_3 - 1182433193) * (!32736)))) ? (var_5 - 3171766623978977296) : ((max((~var_4), (arr_0 [i_1 + 1]))))));
                var_16 &= (arr_7 [i_2] [i_2]);
                arr_8 [i_3] [i_3] = 2782;
            }
            var_17 = (((arr_2 [11]) ? (arr_2 [7]) : ((var_3 ? (arr_2 [i_2]) : (arr_2 [i_2])))));
        }
        arr_9 [i_1 - 1] [i_1] = ((min(var_6, (~var_10))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            {
                var_18 = var_4;
                var_19 |= ((((((((min(124, (arr_14 [i_4] [4])))) + 2147483647)) >> ((((var_6 ? (arr_10 [i_4]) : 62742)) + 425370720))))) || ((((((arr_10 [i_4]) != var_4)) ? 6 : 11059906695358630016))));
                var_20 = ((var_2 ? ((((var_10 ? 206 : var_8)))) : 18385));
                arr_15 [i_4] [i_5] [i_5] = var_5;
            }
        }
    }
    #pragma endscop
}
