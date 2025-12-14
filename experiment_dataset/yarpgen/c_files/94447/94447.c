/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 112;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 = (min(((1 + (arr_3 [i_0 - 1] [i_0 + 2] [i_1]))), 97));
            arr_5 [i_1] [1] [i_1] = (min((141 <= 73), (var_6 | 148)));
            var_20 = 155;
            var_21 = (min(var_21, (((((((arr_4 [i_0 + 2]) % -30748))) ? 30517 : -3562914825998523832)))));
            var_22 = (min((arr_3 [i_0 - 1] [i_0] [i_0]), (((arr_3 [i_0 - 2] [i_0] [i_0 - 1]) - (arr_3 [i_0 - 2] [11] [i_0])))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_23 = ((131 || (((min(14253256566451198169, 0)) > (((-(arr_7 [i_0] [i_0]))))))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] = (142273348 || var_12);
                        arr_17 [i_2] [i_2] = (max((((146 ? (((arr_4 [0]) ? (arr_10 [0]) : 5465983410603452645)) : var_8))), (min(4, -4193487507258353447))));
                        arr_18 [i_4] [i_2] [i_3] [i_2] [i_0 - 1] = (~31324126);
                    }
                }
            }
            var_24 = 4050403367176735414;
        }
        arr_19 [1] = 2200;
        var_25 = (max(var_25, ((min((min((arr_0 [16]), (min(var_16, -480815733700637292)))), (((((16383 - (arr_12 [i_0] [i_0]))) | ((min(34436, 2048)))))))))));
    }
    #pragma endscop
}
