/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_15 = (((max((((var_0 <= (arr_6 [i_0] [i_0] [2] [i_0])))), (~var_5))) | var_14));
                        arr_12 [i_1] [i_1] = (min((max(((max((arr_0 [i_3]), var_2))), 65521)), ((var_8 / (arr_9 [i_2 - 2] [i_2 + 4] [i_2 - 2])))));
                    }
                }
            }
        }
        var_16 ^= 17;
        var_17 *= var_12;
        var_18 ^= ((((((max((arr_4 [i_0]), (arr_0 [i_0])))) ? -var_10 : (((arr_3 [i_0]) ? (arr_4 [18]) : (arr_7 [i_0] [i_0] [i_0]))))) + ((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ^ 112)))))));
        var_19 = (((((-var_5 / (max(var_11, var_9))))) ? ((-(var_11 | var_6))) : ((((238 != (arr_5 [i_0])))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_16 [i_4] = ((var_0 ? ((((var_3 | (arr_4 [i_4]))) - (arr_5 [i_4]))) : ((max(((var_1 ? 612355626314691648 : (arr_8 [i_4] [i_4] [i_4]))), (arr_0 [11]))))));
        var_20 *= 99;
    }
    var_21 = 1;
    var_22 = var_11;
    #pragma endscop
}
