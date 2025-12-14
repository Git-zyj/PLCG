/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_1 + 4]);

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_18 = (arr_8 [i_0] [i_1] [i_0]);
                    var_19 = (min((((arr_3 [i_1 - 2] [i_2 - 1] [i_2 + 2]) ? var_8 : var_9)), ((max((arr_3 [i_1 + 3] [i_2 - 1] [i_2 - 1]), (arr_3 [i_1 - 1] [i_2 - 1] [i_2 - 1]))))));
                    var_20 = ((((((arr_0 [i_1 + 1]) ? (arr_8 [i_2 + 1] [i_1 + 4] [i_0]) : var_0))) % (min((((-(arr_0 [i_2])))), var_7))));
                }

                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    var_21 = (((((arr_4 [i_0] [i_0]) <= var_7))) % -var_2);
                    arr_11 [i_3] [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((((((arr_9 [i_0] [i_1] [i_3]) ? var_8 : (min(var_14, (arr_10 [17])))))) ^ (((arr_4 [i_3 + 1] [i_0]) >> (((arr_4 [i_3 + 1] [i_0]) - 3491874955947059522))))))) : (((((((arr_9 [i_0] [i_1] [i_3]) ? var_8 : (min(var_14, (arr_10 [17])))))) ^ (((((arr_4 [i_3 + 1] [i_0]) + 9223372036854775807)) >> (((((arr_4 [i_3 + 1] [i_0]) + 3491874955947059522)) + 3362673294381564210)))))));
                    var_22 = (arr_4 [i_1 - 1] [i_0]);
                }
            }
        }
    }
    var_23 = var_4;
    var_24 = var_4;
    var_25 = var_16;
    #pragma endscop
}
