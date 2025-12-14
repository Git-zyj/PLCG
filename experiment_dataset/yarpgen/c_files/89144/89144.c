/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((((0 ? var_12 : var_5)) <= ((26966 ? -26948 : var_5))))) - var_2));
    var_19 = var_14;
    var_20 ^= 65521;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = 3;

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            arr_13 [i_1] [i_1] [i_1] = (((arr_10 [i_0] [i_0] [i_2] [i_3]) ? (max((((arr_8 [i_0] [i_1] [i_2] [i_0] [21] [i_0]) % 69)), (!18446744073709551615))) : ((max(26980, 80)))));
                            var_22 = (--26);
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] [i_4 + 1] |= 69;
                            var_23 += (((arr_7 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_1 + 2]) ? ((8352 ? ((min(29, (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3])))) : (242 || 63))) : ((min((69 || var_7), ((13563 || (arr_9 [i_0] [19] [19]))))))));
                        }
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            arr_19 [i_0 + 3] = (arr_4 [i_5 + 3] [i_5] [i_5]);
                            var_24 = (max(var_24, ((min((arr_10 [i_1] [i_1] [i_3] [i_5]), (min((min(17949, 1862255708443890137)), var_8)))))));
                            arr_20 [i_2] [i_3] = (arr_0 [i_0] [21]);
                            arr_21 [i_2] [i_1] = (arr_1 [i_0 + 3] [i_0]);
                        }
                        var_25 = (max(var_25, ((((arr_12 [i_0 + 3] [i_1 + 1] [i_2] [i_1]) ? (arr_1 [i_0] [i_1]) : (((((8349 + (arr_4 [i_1] [i_1 - 1] [4])))) - (max((arr_10 [i_0] [i_0] [21] [i_3]), (arr_5 [i_3] [i_2] [17] [i_0]))))))))));
                    }
                    arr_22 [i_0] [i_0] [i_2] [i_2] = ((((11572 ? (arr_3 [i_0] [i_1 - 2] [i_0 + 1]) : (arr_4 [10] [i_1 - 3] [i_0 + 2]))) - (arr_6 [i_2] [i_1 - 1] [12])));
                    var_26 = ((max((arr_9 [i_0] [i_0] [13]), ((min(var_14, 0))))));
                }
            }
        }
    }
    #pragma endscop
}
