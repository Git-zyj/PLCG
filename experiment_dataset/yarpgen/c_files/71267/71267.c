/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = ((((var_0 >= (arr_2 [i_0]))) ? 14429432003208566925 : (((var_2 ? ((0 ? var_3 : var_0)) : 8388480)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 -= ((((0 ? -802169015599253454 : (!31552508)))) ? 1 : 225747475);
                    var_16 = (min(var_16, ((min(var_7, (((!(((524287 ? 161 : 262143)))))))))));
                }
            }
        }
    }
    var_17 = (max(var_17, var_5));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            {
                var_18 = min((((((min(var_5, var_7))) ? (((arr_0 [i_3 + 1] [i_4]) ? (arr_9 [i_3 + 4] [1]) : var_6)) : (var_9 * var_1)))), var_0);

                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    var_19 = (min(var_9, (min(12, (min(var_3, (arr_8 [i_3 - 2])))))));
                    var_20 ^= (((((var_4 | ((max(7914319646265499598, (arr_11 [i_4]))))))) ? (min(((((-9223372036854775807 - 1) & var_10))), (min((arr_4 [i_3 - 1] [1] [1]), 11477179913243332021)))) : (((((min(6223998885694707191, 268434944))) ? var_2 : (var_13 == -1080514102))))));
                    var_21 = (((((var_13 ? var_3 : (arr_12 [i_3 - 3] [i_4 + 3] [i_5 - 1])))) ? (8589934080 / 135) : (((var_9 != var_3) ? (((9362994105819957503 ? 0 : 6))) : (min((arr_4 [i_3 - 1] [i_3] [i_3 - 1]), var_4))))));
                }
            }
        }
    }
    #pragma endscop
}
