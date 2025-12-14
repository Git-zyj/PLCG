/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_7 ^ var_2);

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_14 *= var_8;

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_15 = ((!(arr_0 [i_1 + 1])));
            arr_4 [i_0] [24] = -815;
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_16 = var_2;
            arr_7 [i_0] [i_2 - 1] [i_2] = (arr_3 [i_0] [i_0]);
            var_17 = (min(var_17, (arr_6 [i_2 + 1] [i_2] [i_2])));
            var_18 ^= (max(((~(arr_1 [i_0 + 2]))), var_3));
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_19 = (((1 && -6093517113554693204) ? (var_8 || 27174) : (min(var_1, (arr_8 [i_3])))));
        var_20 = (max(var_20, (!-27189)));
        var_21 = var_5;
        var_22 = ((((~(arr_9 [i_3])))) ? 113 : 1);
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_23 = var_2;
        var_24 -= ((!(((-(arr_6 [i_4] [i_4] [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_25 = (max((arr_3 [i_5] [i_5]), (((1 && (arr_10 [i_5]))))));
        var_26 = (((((((arr_11 [i_5] [i_5]) ? 1 : 1))) >= 2210435542)));
    }
    #pragma endscop
}
