/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            arr_6 [5] [i_0] [i_1] = (max((((var_6 * 268431360) * (min((arr_3 [i_0] [i_1]), (arr_4 [i_1] [i_0]))))), 1));
            var_19 = (min(((~(!-1))), (!var_18)));
            arr_7 [i_0] |= (min((!var_11), (min(19, var_14))));
        }
        var_20 = ((((((((~(arr_0 [i_0] [i_0])))) ? ((((var_13 > (arr_4 [i_0] [i_0]))))) : ((1 ? 18446744073709551615 : (arr_0 [17] [i_0])))))) ? (((((min((arr_5 [10] [i_0] [i_0]), (arr_1 [15])))) || (((15 + (arr_3 [i_0] [i_0]))))))) : ((min(var_10, var_2)))));
        var_21 = ((!var_10) & (max((var_7 / var_16), (arr_0 [i_0] [i_0]))));
        arr_8 [i_0] [i_0] = (min((min((((0 << (arr_1 [17])))), ((127 ? 127 : 0)))), ((min(0, 0)))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((min((min(var_18, 1024)), (min(0, var_15)))));
        var_22 -= (((min(var_14, var_16))));
        var_23 = ((((max((((arr_5 [i_2] [i_2] [i_2]) ? (arr_0 [i_2] [i_2]) : var_4)), 17))) ? (((min(var_1, var_9)))) : ((18446744073441120255 ? (arr_2 [i_2] [i_2]) : -128))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_24 -= (min((min(32761, (max(var_0, 4294967295)))), 1022));
            var_25 = (min(var_25, ((max((max((arr_16 [i_4] [i_3]), var_9)), (((((max(var_14, (arr_9 [i_3] [i_4])))) ? (arr_4 [i_3] [i_4]) : (!var_2)))))))));
            arr_18 [i_4] = (arr_2 [i_3] [i_4]);

            /* vectorizable */
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                arr_22 [i_4] [i_4] = ((var_8 ? var_4 : (var_11 % 1048320)));
                var_26 &= ((268431334 % (arr_3 [i_5 + 2] [i_5 - 3])));
            }
        }
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            arr_25 [15] |= (min(-1048319, 18446744073709551592));
            arr_26 [i_3] [i_6 + 1] [i_6 + 1] = ((!((min((min(var_16, var_17)), (((var_1 ? (arr_19 [i_3] [i_3] [1] [i_6]) : var_4))))))));
            arr_27 [i_6] [i_6] = ((!(!-1)));
            var_27 *= (((((((-(arr_5 [i_3] [i_3] [i_3])))) ? var_3 : var_16)) >> (((min(32760, var_4))))));
        }
        var_28 |= (min(((((arr_24 [16]) < var_1))), var_4));
        arr_28 [14] = (min((4294967272 % 1), ((max((arr_5 [i_3] [i_3] [i_3]), ((var_8 ? var_8 : var_13)))))));
        var_29 = (((2143289344 < (32748 ^ 64512))));
    }
    var_30 = ((((((1 / var_7) << (var_11 - 235)))) ^ (max((var_6 - 72057594037927936), ((min(var_8, var_14)))))));
    var_31 = (max(var_1, var_4));
    #pragma endscop
}
