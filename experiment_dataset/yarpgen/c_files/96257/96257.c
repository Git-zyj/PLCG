/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 182340246;
    var_12 = var_6;
    var_13 |= (((-var_10 || var_8) == (((~var_0) ? var_10 : (var_2 >= var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (var_1 != var_8);

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_15 = ((+(min((!1350551277), (((arr_3 [i_1] [i_2 + 3]) ? var_0 : -1350551278))))));
                    var_16 = ((!((max((2252294810 - 792440001), 2042672486)))));
                    var_17 *= (min(8970374388857928761, 182340252));
                    arr_6 [i_0] [i_0] [i_0] |= (min((min((!4294967295), ((-1089740619 ? var_7 : (arr_1 [i_2]))))), ((((arr_3 [i_0] [i_1]) ? 2214634255 : 792440004)))));

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_18 = ((((!792439999) ? ((-(arr_2 [i_2 - 2]))) : var_6)));
                        var_19 = (max(var_19, (((!(~var_8))))));
                        var_20 = (max((min((min((arr_5 [i_2] [i_1] [17]), (arr_1 [i_3]))), (((~(arr_3 [i_1] [i_1])))))), var_7));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_21 *= (((min(((max(2042672486, var_1))), ((var_8 ? (arr_8 [i_4] [i_1]) : (arr_1 [18]))))) * (((((arr_2 [i_4]) > (arr_2 [i_0 - 2])))))));
                        var_22 = ((-(((-1845426491 >= 2252294812) ? 1760585907444986081 : 1671912558))));
                        arr_14 [i_0] [i_2] [2] [i_2] [i_4] [i_4] = (~((((max(var_3, var_7))) ? ((2252294810 >> (var_5 - 2688963658))) : (var_0 == var_1))));
                    }
                }
                var_23 &= (arr_12 [i_0 - 2] [i_0 + 1]);
            }
        }
    }
    #pragma endscop
}
