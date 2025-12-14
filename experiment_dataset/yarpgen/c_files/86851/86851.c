/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = var_12;
                var_20 = (((((arr_3 [i_1] [i_0] [i_0]) > (arr_3 [i_0] [i_0] [i_1]))) ? (max((arr_0 [i_0] [i_1]), (arr_3 [i_0] [i_0] [i_1]))) : (arr_0 [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_21 ^= ((((((((-(arr_0 [i_2] [i_1])))) ? (~21278) : (~var_17)))) ? (arr_4 [i_0] [i_1] [i_0] [i_2]) : 7852874151207367181));
                    arr_7 [i_1] [0] [i_0] = (((!5502667969768625559) ? ((~(435579747 < var_14))) : ((-(arr_0 [i_0] [i_0])))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_22 = ((((((arr_10 [i_0] [i_0]) * ((0 ? 4341857670501674841 : 16915126467932712661))))) || ((((arr_2 [i_0] [i_1] [i_3]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_1]))))));
                    var_23 = (min(var_23, (((arr_10 [i_0] [i_1]) ? ((((arr_5 [i_0] [i_1] [i_3] [i_0]) - (arr_8 [i_3] [i_3])))) : var_12))));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_24 += (var_14 > var_4);
                    arr_13 [i_0] [i_0] = (((4341857670501674841 > -26) - ((var_17 ? var_0 : (arr_9 [i_4] [i_0] [i_4] [i_4])))));
                    var_25 = (max((arr_5 [i_0] [i_1] [i_4] [i_4]), (((arr_3 [i_4] [i_4] [8]) - (arr_3 [4] [i_4] [i_4])))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_26 = (((max(var_16, (max((arr_10 [i_0] [i_0]), (arr_16 [i_5] [i_1] [i_1] [i_0]))))) <= ((((arr_9 [i_0] [i_0] [i_1] [i_5]) < (arr_0 [i_0] [i_0]))))));
                    var_27 = (-(26 + 11));
                    var_28 = ((var_8 ? ((~(97 || -2513006916758514706))) : (arr_10 [i_5] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
