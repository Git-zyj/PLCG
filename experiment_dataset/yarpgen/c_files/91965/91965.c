/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_13 ? var_10 : ((min(var_4, var_5)))));
    var_20 = 3539165120;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0] = (arr_0 [i_1]);
            var_21 = (max((((arr_3 [i_1 - 1] [i_1 - 1] [i_1]) ? 0 : var_7)), (arr_3 [i_1 - 1] [12] [i_1])));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_22 = var_16;
                arr_8 [i_1] [i_2] &= (min(var_7, ((max((arr_7 [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_7 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
            }
            var_23 = (min(0, (((arr_6 [i_0] [i_0] [i_1]) ? ((-(arr_1 [i_0]))) : ((((arr_3 [i_0] [6] [i_0]) + var_8)))))));
            var_24 = (10428804979404566765 >> 0);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_25 += var_5;

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_26 = ((var_7 ? var_3 : (var_5 >> var_14)));
                arr_17 [i_0] = (arr_7 [i_0] [i_3] [i_4]);
            }
            var_27 = (1 ^ 3599682862);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_28 = (arr_13 [i_5] [i_5] [i_5] [i_0]);
            var_29 = (arr_0 [1]);
            var_30 *= var_6;
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_31 = ((arr_9 [i_0] [i_0]) ? (min(47, -1352642088)) : ((((((((arr_21 [i_0] [i_6]) | var_2))) && var_9)))));
            arr_22 [i_0] = (max(0, 1));
        }
        var_32 = (((arr_7 [i_0] [i_0] [i_0]) + (((695284434 && ((min(0, 34954))))))));
        var_33 = (min((max((arr_14 [i_0]), (arr_10 [i_0]))), (arr_14 [i_0])));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_34 = (max(var_34, ((min((arr_14 [4]), ((-var_6 ? ((((arr_15 [16] [16] [16]) + 208))) : (arr_21 [i_7] [i_7]))))))));
        var_35 &= 5153668979971045411;
    }
    var_36 = ((((((((255 >> (255 - 254)))) != (min(53, var_15))))) | var_1));
    #pragma endscop
}
