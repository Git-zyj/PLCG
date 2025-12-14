/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 24270));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((((arr_4 [2]) != 41249)) ? (((((!(arr_3 [1]))) ? 202 : 41259))) : (((((arr_3 [0]) ? (arr_0 [i_0] [i_1]) : (arr_3 [8]))) + 5355433951688985681)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 -= (max(21875, (min(-5015737808814227618, 622662157))));
                            var_16 = ((((((!47) >> (((((((arr_7 [i_1] [i_2] [i_1] [i_1]) ? (-2147483647 - 1) : (arr_1 [i_0]))) - -2147483639)) + 37))))) & ((((((127 ? -3439876953208010293 : var_7)) + 9223372036854775807)) >> (-1 + 55)))));
                        }
                    }
                }
                var_17 = (max(var_17, ((max((((arr_7 [4] [i_1] [i_1] [i_1]) ? 3439876953208010306 : (arr_7 [4] [i_0] [i_1] [i_1]))), ((((arr_7 [8] [4] [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))))))));
                var_18 &= (((arr_0 [4] [4]) >> ((((-8 ? 1567733216 : 47)) - 1567733212))));
                arr_10 [i_0] [i_1] [i_1] = (min(((~(arr_7 [i_1] [i_1] [i_1] [i_1]))), (((1126378357 != ((var_5 ? 5 : 1)))))));
            }
        }
    }
    var_19 = var_6;
    var_20 = ((((!var_4) && (((1 ? 122 : 9223372036854775807))))) ? 3544389264 : 18446744073709551596);
    #pragma endscop
}
