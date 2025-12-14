/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (arr_3 [i_0 - 1] [0]);
                var_12 &= 1;
            }
        }
    }
    var_13 &= 115;
    var_14 = var_6;
    var_15 = (min(((115 ? (14774260980411752798 * -108) : var_1)), var_10));

    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((((arr_8 [i_2] [i_2]) < (((arr_7 [i_2] [i_2]) ? (((~(arr_7 [i_2] [i_2])))) : (arr_8 [i_2] [i_2]))))))));
        var_17 = 69805794224242688;
        var_18 = 60;
        var_19 = (arr_8 [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_20 = var_5;
        var_21 = ((~(arr_7 [i_3] [i_3])));
        var_22 = ((+(((arr_11 [i_3]) ? -92 : -115))));
    }
    #pragma endscop
}
