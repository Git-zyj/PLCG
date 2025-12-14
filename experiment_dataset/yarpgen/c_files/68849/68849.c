/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_5;
    var_21 *= (max((((106280378 ? ((min((-32767 - 1), (-32767 - 1)))) : var_15))), 5810519322480653417));

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_22 = (!-var_4);
            var_23 = var_3;
            arr_6 [i_0] [i_1] = var_18;
        }
        arr_7 [i_0] [i_0] = ((((arr_5 [i_0 - 1] [i_0 - 3]) - (arr_5 [i_0 - 1] [i_0 + 1]))));
        var_24 = (max(var_24, (arr_4 [i_0])));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_25 = (((arr_1 [i_0] [i_2]) <= (arr_8 [i_0] [i_2])));
            arr_10 [i_2] = -1135354406;
        }
        arr_11 [i_0 - 2] = (((((((~(arr_0 [i_0] [i_0])))) ? (-32767 - 1) : var_13))) ? var_13 : ((((max(511, var_17))))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((+(((arr_0 [i_3 - 2] [i_3]) ? (arr_2 [i_3]) : 1135354405))));
        var_26 = (((((arr_5 [i_3 - 2] [i_3 - 2]) ? (-32767 - 1) : var_1)) >= (arr_15 [i_3] [i_3])));
    }
    for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4 + 1] = (~var_0);
        var_27 = (arr_15 [i_4] [i_4]);
    }
    var_28 &= var_8;
    #pragma endscop
}
