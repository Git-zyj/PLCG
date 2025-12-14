/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (min((~127), -8011439817730841807));
                var_13 = (((arr_2 [i_0] [i_1 + 1]) != (arr_2 [i_1] [i_1 + 1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_14 = (min(var_14, ((((arr_7 [4] [i_1] [i_1 - 3]) <= (arr_7 [4] [i_1] [i_1 - 3]))))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            arr_16 [i_1] [i_1 - 3] [i_1] [i_2] [i_3] [i_1 - 3] = (arr_15 [i_0] [i_1] [i_1 - 3] [i_0] [i_4] [i_4] [4]);
                            var_15 = (-(arr_6 [i_3] [i_1 + 1] [i_2]));
                            var_16 = (min(var_16, (-8011439817730841805 * 6847935355106120321)));
                            var_17 = ((0 ? (~0) : (arr_14 [i_0] [i_1 - 2] [10])));
                            var_18 += var_8;
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_19 = (((arr_6 [i_1] [i_1 - 1] [i_1 - 1]) ? var_7 : -8011439817730841819));
                            arr_20 [i_1] [i_5] [i_1] [i_5] [i_5] [i_2] [i_3] = var_4;
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_20 ^= (((arr_7 [16] [16] [i_1 - 1]) != (arr_12 [i_1 + 1] [i_1] [i_1])));
                            arr_24 [i_6] [i_3] [i_1] [i_1] [i_1] [i_0] = ((1098679900 ? -103 : -7822));
                            var_21 = 3060813313;
                            var_22 = (min(var_22, ((((var_5 <= 373672202) != (~32175))))));
                        }
                        var_23 = ((var_3 ? 73114026 : 16128));
                        arr_25 [1] [i_1] [i_2] [i_1] [i_2] [i_1 + 1] = (arr_3 [i_1 - 1] [i_1 - 2] [i_1]);
                    }
                    var_24 = ((!(arr_12 [i_0] [i_1] [i_1 - 3])));
                    var_25 = (var_4 >= ((6957991471036745256 ? 16128 : 8011439817730841807)));
                    var_26 = (((arr_19 [i_1] [i_1 - 1] [14] [i_0] [i_0] [i_1 - 3] [i_2]) ? 16122 : (arr_14 [i_1 - 1] [i_1 - 3] [i_1 + 1])));
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_27 = (((~1445222216) ^ ((~(arr_26 [i_1 - 3] [i_1 + 1] [i_1 - 1])))));
                    var_28 = 1;
                    var_29 = ((!(arr_15 [i_7] [i_7] [i_7] [i_1] [i_1] [i_1] [i_0])));
                }
                var_30 = (((231 != (arr_26 [i_1] [i_1 - 2] [i_1 - 2]))));
            }
        }
    }
    var_31 = (~27);
    #pragma endscop
}
