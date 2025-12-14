/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((!var_9) + (var_2 || var_7))) <= (-var_5 || var_15)));
    var_17 = var_12;
    var_18 = (min(var_0, var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 |= ((!((((arr_2 [i_0 - 1]) ? (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 += (((arr_1 [0]) >> (((arr_8 [i_3] [i_2] [i_1] [i_0]) + 2008031850))));
                            var_21 = (arr_7 [i_0] [i_1]);
                        }
                    }
                }
                arr_9 [12] [12] = ((((((arr_5 [4] [i_1] [i_1] [i_1]) ? ((((arr_7 [i_0] [i_0]) >> (((arr_4 [i_0] [i_0] [i_0]) + 24))))) : (arr_3 [i_1] [i_1] [i_1])))) || ((((arr_1 [i_0 + 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 1]))))));
            }
        }
    }
    var_22 = var_15;
    #pragma endscop
}
