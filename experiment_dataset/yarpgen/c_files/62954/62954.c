/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -80;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [12] [i_0] = 9223372036854775807;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [3] = -9223372036854775805;
                            arr_13 [i_4 + 2] [i_3 - 2] [i_0] [i_1] [i_0] [i_0] [11] = -32753;
                            arr_14 [i_4 - 1] [i_0] [i_3 - 2] [i_2] [i_1] [i_0] [i_0] = ((((arr_1 [i_3 - 2]) && (arr_9 [i_4 + 2] [i_4 - 1] [i_3] [i_3 - 2]))) ? var_11 : (arr_5 [i_0]));
                            var_14 = (((51 << (((min(3043296809, (arr_3 [i_1] [i_2] [i_3 - 1])) - 3043296784))))));
                        }
                    }
                }
            }
            var_15 = 175085115;
            var_16 = (((-9223372036854775807 - 1) ? (((arr_6 [i_0] [i_1] [i_0] [i_1]) % (arr_6 [4] [i_1] [i_0] [i_0]))) : (arr_6 [i_1] [i_0 - 1] [i_0 - 1] [0])));
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_18 [i_5] = (max(-175085099, ((((arr_15 [i_5]) * (arr_15 [i_5]))))));
        var_17 = (175085110 ? -466053979 : 938339246302650877);
    }
    var_18 = var_12;
    #pragma endscop
}
