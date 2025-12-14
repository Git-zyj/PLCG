/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_4);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((!(arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = ((-3691896710788688985 ? -12487 : 12487));
                                var_16 = (!var_12);
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((-(~12505)));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_2] = var_5;
                                arr_17 [i_2] [i_3] [i_2] [i_1] [i_0] = -12505;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_17 |= var_7;
                                var_18 = ((!(arr_20 [i_1] [i_1] [i_2 - 1] [i_5 - 1] [i_6] [i_6])));
                                var_19 = ((((((32767 >= (arr_14 [i_2] [i_2] [i_2] [i_2] [i_2 - 1] [i_2])))))) ? var_8 : ((var_10 ? var_13 : (arr_13 [i_0]))));
                                var_20 = ((((-(arr_14 [i_0] [i_0] [i_0] [i_0] [12] [i_0])))) ? (arr_8 [i_0] [i_2] [i_5] [17]) : ((+((12487 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_11 [13] [i_1] [i_1] [i_5]))))));
                                var_21 += ((!(((((max(31275, 4432610544300485976))) ? -12490 : (~-12470))))));
                            }
                        }
                    }
                    arr_22 [i_1] [i_1] [i_0] = min((((-(!-1)))), (((((-32767 - 1) ? 8900316664206519295 : (-9223372036854775807 - 1))) | (arr_0 [i_0]))));
                }
            }
        }
        var_22 = (((!32704) ? ((-(arr_19 [15] [i_0] [i_0] [17]))) : (((arr_19 [i_0] [i_0] [i_0] [i_0]) << (((arr_19 [i_0] [i_0] [i_0] [i_0]) - 20904))))));
    }
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        var_23 = ((~(arr_21 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])));
        var_24 = (min(var_24, (((-((~(arr_4 [i_7 + 1] [i_7 + 1]))))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_25 = (max(var_25, 7212187997255477062));
        arr_28 [i_8] = ((arr_27 [i_8] [i_8]) ? ((((-32704 >= (arr_26 [i_8]))))) : ((-32759 ? 1279862804704215914 : 32767)));
    }
    #pragma endscop
}
