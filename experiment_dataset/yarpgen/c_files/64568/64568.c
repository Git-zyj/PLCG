/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (!18406)));
                var_17 = ((~((var_12 ? (((1 >> (((arr_2 [i_0] [i_0]) - 937787241))))) : ((-7171024726376977814 ^ (arr_5 [3] [i_0] [i_0])))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((-(arr_1 [i_2]))))));
        var_19 = (min(var_19, 1654953895));
        var_20 = (max(var_20, (((var_7 % ((((((arr_3 [i_2] [i_2] [i_2]) >= (arr_3 [18] [i_2] [i_2])))) ^ (arr_0 [i_2]))))))));
        var_21 *= ((((((arr_5 [i_2] [i_2] [i_2]) || 14127313790944798229))) == ((((arr_2 [i_2] [i_2]) <= var_5)))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((((max(((-16893 ? var_4 : var_5)), (arr_3 [i_3] [i_3] [i_3])))) && (arr_5 [i_3] [i_3] [i_3]))))));
        var_23 = (min(var_23, (min(-5564222942350648290, 16266033423419315938))));
    }
    #pragma endscop
}
