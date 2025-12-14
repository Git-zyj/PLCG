/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_18 = ((((1382541325438859157 << (var_13 - 47028))) << (((arr_3 [i_0]) - 6027153876318933727))));
                        arr_9 [i_0] [i_0] [7] [5] [i_3] = ((((0 * (arr_1 [i_0]))) % ((((arr_4 [i_0] [i_0] [i_0]) ? (arr_0 [i_1] [i_1]) : (arr_7 [i_3] [6] [i_3]))))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_19 = (((arr_1 [i_3]) ? 9496 : 2147483647));
                            var_20 = ((1 ? 2147483647 : -2882437166501576923));
                            var_21 |= ((arr_8 [i_0] [i_1] [1]) < var_5);
                            arr_12 [i_4] = (0 + 1073741823);
                        }
                        var_22 += (((arr_7 [i_1] [i_2] [i_2]) | var_9));
                        arr_13 [i_2] [i_3] = ((arr_2 [i_1]) ? var_8 : 1);
                    }
                    var_23 = (((((2514533902 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((((var_4 / var_6) >= (((var_4 ? 32640 : (arr_8 [2] [i_1] [i_0])))))))) : (((-9223372036854775807 - 1) + 1390118763))));
                }
            }
        }
    }
    var_24 ^= ((-(min((((138 ? var_10 : 65408))), ((var_16 << (-8751574525310978349 + 8751574525310978361)))))));
    var_25 = var_14;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            {
                var_26 = (max(var_26, (((((~(-2882437166501576923 / 60294))) != 1683498442)))));
                var_27 ^= (((max(2882437166501576923, 191)) / (arr_6 [1] [1] [3] [i_6 - 2])));
            }
        }
    }
    #pragma endscop
}
