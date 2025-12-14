/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] [0] = (arr_4 [i_0] [i_0 + 2] [i_1]);
                var_19 = var_1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                var_20 = (max((((var_6 - (arr_12 [i_2] [i_3 + 1])))), var_0));
                var_21 *= ((max(var_3, (arr_3 [i_3 + 1] [i_3 + 2]))));
                var_22 = ((!((max(var_18, (arr_8 [i_3 - 1]))))));
                arr_14 [i_3] [14] = var_15;
                var_23 = (max(var_23, (((!(((arr_9 [i_3 - 1] [i_3 - 1]) || 2340437550)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                var_24 *= (max((((!((max(var_8, 0)))))), ((~(((var_16 || (arr_6 [i_4] [19]))))))));
                arr_19 [i_4] = 95;
                arr_20 [i_4] [i_4] [i_4] = ((max(2147483520, (var_0 & var_16))));
                arr_21 [i_4] [i_4] = (max((max(((-4656564110111316957 ? var_5 : 95)), var_9)), (((var_16 ? var_16 : (arr_2 [i_4] [i_5]))))));
            }
        }
    }
    var_25 = var_4;
    var_26 = (((var_17 ^ var_1) | var_3));
    #pragma endscop
}
