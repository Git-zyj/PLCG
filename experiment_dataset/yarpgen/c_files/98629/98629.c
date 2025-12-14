/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [6] [i_0] = (((((((min(var_6, var_6))) ? ((max(var_9, (arr_3 [3] [6] [i_1])))) : (max(5981563737380108433, -2147483630))))) ? (var_13 ^ 5981563737380108439) : ((max((max(55678, 813802823)), (((var_7 ? var_3 : var_7))))))));
                var_16 = ((((2147483647 + (var_1 + -2147483647))) + (arr_0 [i_1] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {
                var_17 = (max((min(-var_12, 1)), (((((((arr_1 [i_3]) ? 1 : var_2))) && 9223372036854775807)))));
                var_18 = (((((((min(var_6, var_6))) && (arr_3 [1] [i_2] [i_3])))) * ((((arr_1 [i_2]) >= ((min(21925, 1))))))));
            }
        }
    }
    #pragma endscop
}
