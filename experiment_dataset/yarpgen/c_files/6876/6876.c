/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (max((((arr_1 [i_0]) ^ (((arr_2 [i_0]) ? var_0 : 255)))), (((((max((arr_3 [1] [i_1] [i_1]), var_11))) != 1)))));
                    var_16 = (max(var_16, ((((arr_0 [i_0]) - (((((~(arr_3 [i_0 + 1] [i_1] [i_1])))) ? (1879802182 || 1879802191) : (((!(arr_1 [i_2])))))))))));
                    arr_7 [i_0 + 1] [i_0 + 1] [i_2] [i_0] = (((((~(!17040413523899499344)))) | (arr_0 [i_0 + 1])));
                    var_17 += (((((var_1 ? var_1 : var_1)))) ? ((((((((!(arr_4 [i_2] [i_2]))))) > 1406330549810052272)))) : (min((((!(arr_4 [i_2] [i_2])))), (max((arr_3 [i_0] [i_1] [i_0]), (arr_2 [i_1]))))));
                }
            }
        }
    }
    var_18 |= ((var_5 ? ((((((1473360683 ? 2127028346941057070 : 9))) ? 462006499 : ((var_8 ? var_14 : var_6))))) : 15));
    #pragma endscop
}
