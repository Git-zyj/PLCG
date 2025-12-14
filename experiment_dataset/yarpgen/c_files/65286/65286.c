/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = (min((((var_1 < ((60 ? var_13 : var_12))))), (73 - 161)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (arr_3 [i_1] [9] [i_0]);
                arr_5 [i_1] = (max((var_7 + -1269527259), (arr_3 [i_0] [i_1] [i_1])));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_18 = (((((((-2147483647 - 1) - -9223372036854775793)))) ? ((((((arr_2 [i_2]) ? (arr_4 [i_2] [i_2]) : (-2147483647 - 1)))))) : 9223372036854775803));
                    var_19 = (min(var_19, 60));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, var_3));
                    var_21 = (min(var_21, (((((max(((188 ? (arr_8 [9]) : var_13)), var_10))) ? (min((((arr_6 [i_0] [i_0] [i_0] [i_0]) % var_2)), (((var_4 ? (arr_7 [22] [i_1] [i_3]) : var_4))))) : var_0)))));
                }
                var_22 = ((max(((var_14 ? (arr_9 [i_0] [i_0]) : var_10)), -53)));
            }
        }
    }
    var_23 = var_3;
    #pragma endscop
}
