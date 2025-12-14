/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [9] &= (arr_0 [2]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [3] [i_1] = (((56 & 6860265365169791866) ? (((~(arr_1 [i_0] [2])))) : (~18446744073709551603)));
            arr_7 [i_0] = arr_5 [i_0] [i_1] [i_1];
            var_18 = (min(var_18, ((((arr_0 [i_1]) ? (65 | var_3) : (arr_5 [i_0] [i_0] [6]))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_19 = var_17;
            arr_10 [i_2] = ((!(((11586478708539759749 ? (arr_1 [2] [2]) : -9223372036854775803)))));
            arr_11 [i_0] [i_2] = ((6063 << (6860265365169791868 - 6860265365169791850)));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_14 [i_2] [5] [i_3] = (arr_13 [i_2]);
                arr_15 [i_2] [10] [i_3] = (((((var_12 << (16977614949106026807 - 16977614949106026795)))) ? var_8 : (arr_0 [i_3])));
                arr_16 [i_0] [8] [i_2] = (((~6611697633289581832) - (arr_3 [i_0] [i_0] [i_3])));
                var_20 = 4648138787770644215;
            }
        }
        var_21 = (min(var_21, (~-15932)));
    }
    var_22 = var_14;
    var_23 = (min(var_23, ((max(var_15, 6611697633289581832)))));
    var_24 = (max(var_24, (9073667568419820190 > 930290586)));
    #pragma endscop
}
