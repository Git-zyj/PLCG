/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [10] [i_2] [0] [i_2] = (max(((((~(arr_1 [i_0]))) | ((~(arr_6 [i_2] [i_2] [i_2]))))), ((~(((!(arr_3 [i_2]))))))));
                    var_16 = ((((max((((arr_3 [i_1]) ? 5440919941982131209 : (arr_6 [i_2] [11] [i_2]))), ((max(-29148, (arr_3 [i_0]))))))) ? (((!((((arr_3 [i_2]) | (arr_6 [i_0] [i_0] [i_0]))))))) : ((((((arr_3 [i_1]) ^ 17))) ? ((min((arr_6 [i_0] [4] [4]), 146))) : ((max(110, var_14)))))));
                    var_17 = (max(var_17, -var_9));
                    var_18 = (min((((!28189) ? ((((!(arr_4 [5]))))) : ((146 ? (arr_5 [11] [11] [i_2] [11]) : var_10)))), ((((!255) && ((((arr_4 [7]) ? var_7 : (arr_6 [4] [10] [i_2])))))))));
                }
            }
        }
    }
    var_19 = (((((var_14 ? var_15 : 8))) == (((((255 / var_7) && -var_4))))));
    #pragma endscop
}
