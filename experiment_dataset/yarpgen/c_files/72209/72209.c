/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = ((!(!var_2)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_15 = (((((-(((arr_0 [i_0]) ? var_12 : -1839553269))))) ? (((((2 >> (var_8 - 6559213419685199287)))) ? var_10 : (arr_3 [i_0] [i_0]))) : ((1659336603 ? (arr_5 [i_0]) : (arr_4 [i_0])))));
            var_16 ^= ((((((!1659336603) ^ var_4))) ? (arr_2 [i_0] [7]) : 65504));
            var_17 = (((((min(2, var_4))) ? (arr_3 [i_0] [i_1]) : (arr_5 [i_0]))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_2] [i_0] [i_0] = ((-(var_3 <= var_10)));
            var_18 = ((!(((-(arr_0 [i_2]))))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_14 [i_0] [i_3] [i_4] = min((((min(2124468726, -1659336592)) | var_9)), var_11);
                    var_19 = (((2147483635 ? (~var_12) : var_9)));
                }
            }
        }

        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] = (9223372036854775807 & 0);
            var_20 = 1659336592;
            arr_19 [i_0] [i_5] [i_5] = ((min((((arr_13 [i_0] [4] [10] [1]) ^ var_8)), ((((arr_1 [i_5]) ? (arr_11 [1] [i_5]) : 67))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_22 [i_6] = var_6;
            var_21 = (-var_1 & (arr_13 [i_6] [i_6] [i_0] [i_0]));
        }
        arr_23 [i_0] &= var_9;
        arr_24 [i_0] = (max((max((67 | var_12), ((var_2 ? var_4 : var_12)))), (((~(arr_10 [i_0] [i_0]))))));
    }
    var_22 = (((((9 ? 0 : -1262548518))) ? 18446744073709551608 : ((((!var_8) ? var_2 : (var_6 % var_7))))));
    #pragma endscop
}
