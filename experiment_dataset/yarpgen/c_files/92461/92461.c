/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = 1;
        var_19 = ((((((1 << (65509 - 65493))))) ? -105 : 1));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_20 = -1605743018;
                        arr_10 [i_0] [i_0] [i_0] &= ((!((max((((arr_2 [i_3] [i_0]) ? 115 : 20)), ((26 << (((arr_1 [i_2]) - 34)))))))));
                        var_21 = (min((243 * 13), ((max((((255 <= (arr_4 [i_0] [i_0] [i_0])))), -2147483626)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_22 = (((2 <= -1) ? 3331173959 : (arr_11 [i_5])));
                    arr_18 [i_5] = ((26 ? (((1 ? -123 : (arr_14 [i_4] [i_5])))) : ((((((arr_16 [i_4] [i_4] [i_4] [i_4]) ? 241 : (arr_0 [i_6]))) << ((((((13657 ? -1 : 0)) + 26)) - 13)))))));
                }
            }
        }

        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_23 = (max(var_23, ((((((min((arr_15 [i_4] [i_7]), (arr_0 [i_7]))))) ? (((min(65509, 38)))) : ((65531 ? -98 : ((1 ? 65507 : -1019183917509936568)))))))));
            var_24 = ((((((2251799813685247 ? 1 : 10))) ? ((max(28539, 1))) : (((arr_6 [i_4] [i_7] [i_7]) ? 1 : 127)))));
        }
        var_25 = (max(var_25, ((((!1) && ((1 <= (((5344341346098050417 ? 3840959895 : (arr_19 [i_4] [i_4])))))))))));
    }
    #pragma endscop
}
