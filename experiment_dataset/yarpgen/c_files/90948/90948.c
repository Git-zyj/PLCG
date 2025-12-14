/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = var_12;
    var_16 = (max(var_16, (((-1104743916 ? (min(((min(-102, 33))), ((-24038 ? var_8 : 53)))) : (max(((var_0 ? var_8 : -10)), var_7)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                arr_9 [i_0] [5] [i_1] [i_0] = ((28881 >= (arr_6 [i_0] [i_1] [1])));
                var_17 = 102;
                var_18 = ((-80 / (arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 1])));
                var_19 = (min(var_19, (arr_4 [i_2 + 1] [i_0] [i_2 + 1])));
            }
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    arr_17 [i_0] [10] [i_1] [i_0] = -302700627620444046;
                    arr_18 [i_0] [i_1] [i_1] [4] = (arr_15 [i_0] [i_0] [i_3] [5]);
                }
                var_20 = (max(-56, (min((arr_8 [i_1] [i_3 - 1] [9]), (arr_8 [i_0] [i_3 - 1] [i_0])))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_21 = (!3642877726);
                var_22 *= arr_15 [i_0] [i_0] [i_0] [7];
                var_23 = ((-(arr_5 [i_0] [i_5])));
            }
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                arr_23 [i_1] [8] [i_0] [i_1] = (min((((min(5407, (arr_11 [i_6] [1] [i_0]))) / 1104743930)), var_5));
                arr_24 [i_1] = ((((min((2365914337 - -26036), 4013393855))) ? ((max(-1104743887, ((37583 >> (-1104743926 + 1104743948)))))) : (-107 - 1170045469)));
            }
            arr_25 [i_1] = (min(((((arr_19 [i_0] [i_1] [i_0]) ^ 90))), (max(var_2, (!-5285)))));
            arr_26 [5] [5] [i_1] = (arr_8 [i_0] [8] [4]);
            var_24 = (min(var_24, ((max(((((~-43) ? 11108 : -125))), (((arr_14 [6] [6] [i_1] [i_1]) ? (((~(arr_4 [i_1] [i_0] [i_0])))) : (arr_10 [i_1] [0] [10] [7]))))))));
        }
        arr_27 [1] = -17508;
    }
    #pragma endscop
}
