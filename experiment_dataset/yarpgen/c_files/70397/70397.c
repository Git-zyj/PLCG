/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!12520834761234382666);
    var_20 = (~(max(16230, var_4)));
    var_21 ^= var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] [1] [i_2] [i_0] = 19187;
                    var_22 = (min(var_22, (arr_1 [i_2] [i_2])));
                    var_23 = (~var_3);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_24 *= (var_7 / 1);
                        arr_10 [i_0] [i_0] [i_0] = var_6;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_25 = (~var_11);
                        var_26 = (min(var_26, (((!(arr_1 [i_1 + 1] [i_1 - 3]))))));
                        var_27 = (min(var_27, (((arr_8 [1] [1] [i_2] [i_4]) ? (arr_8 [i_1 - 1] [13] [i_1] [i_1]) : 523776))));
                        arr_15 [i_2] [i_2] [i_2] [i_0] = ((5152618982730871082 ? -24 : 24383));
                    }
                }
                var_28 = var_11;

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_29 = (((((arr_8 [i_0] [i_1] [i_5] [14]) ? 1 : 6908))));
                    arr_19 [i_0] = ((arr_14 [i_1]) ? (((-((523792 ? var_0 : 9))))) : (arr_3 [i_1] [i_1] [i_0]));
                    var_30 = (((~(arr_9 [i_1] [i_1] [i_0] [i_0] [4] [4]))));
                    var_31 = ((-24383 ? (arr_0 [i_0]) : ((3305818869 ? ((-21 ? 1592417655 : 16173943149294929639)) : (((5152618982730871067 ? (arr_3 [i_0] [i_0] [i_5]) : 1)))))));
                    var_32 |= ((((!((max(509158393, (arr_0 [14])))))) ? ((min((arr_2 [i_0] [i_0] [i_0]), -var_2))) : (arr_8 [i_0] [i_1] [i_1] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
