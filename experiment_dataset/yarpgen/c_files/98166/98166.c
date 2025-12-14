/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((1 + 100) - (var_14 + var_6))) & (1 + var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((max(((max((arr_2 [i_0] [i_1]), (arr_5 [1])))), ((var_6 ? var_14 : (arr_2 [i_1] [i_0]))))))));
                arr_6 [i_1] = (max(((((((-32767 - 1) % var_12)) & (arr_4 [i_0] [i_0] [i_0])))), (min((arr_1 [1]), (var_14 && 549755813887)))));
                var_18 = max((arr_0 [i_1]), ((-26126 & (18160 % var_2))));
                arr_7 [i_0] [i_1] [i_1] = (min((((var_2 / 14428318740357062024) / (((251 ? (arr_0 [i_0]) : var_9))))), (((4018425333352489591 - var_13) * 18160))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 &= (max((((arr_10 [i_0] [i_1]) % var_3)), ((max(((((arr_9 [i_3] [i_2] [i_1] [i_0]) & var_11))), var_3)))));
                            arr_15 [i_3] [i_2 + 1] [i_1] [i_3] = (((arr_3 [i_0]) << (((max((min(32768, 65523)), ((min(32766, (arr_0 [i_0])))))) - 32754))));
                            var_20 = (max(var_20, (((((((2003 == var_6) << (var_12 - 65)))) ? ((((var_12 ? var_0 : (arr_1 [i_0]))) + (((var_0 << (((arr_4 [i_0] [i_1] [i_2]) - 24760))))))) : -var_9)))));
                            var_21 = ((var_1 && (arr_4 [i_1] [i_2 - 1] [i_3 + 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
