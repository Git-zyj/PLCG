/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_19 ^= arr_2 [i_1] [i_0];
                var_20 = var_7;
                arr_5 [i_1] [i_1] = (((((-71 ? 1 : -11158))) ? (min((arr_0 [i_1] [i_1 - 2]), (arr_2 [i_0] [i_1]))) : (max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_21 = ((-(arr_4 [i_1 + 2] [i_0] [1])));
                    var_22 = ((1 / (arr_4 [i_0] [i_0] [i_0])));
                }
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    var_23 &= -962539401930039899;
                    var_24 = (max((arr_9 [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1 - 3] [i_3 + 1])));
                    var_25 = (max(var_25, (16049 < var_1)));
                    var_26 = (min(var_26, (arr_0 [i_0] [12])));
                }
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    var_27 = max((((1470136264 || (arr_7 [i_0] [i_0] [i_0] [i_4])))), (arr_1 [16] [i_1]));
                    var_28 = (arr_3 [i_1]);
                    var_29 = (var_1 - -1);
                    arr_15 [i_0] |= (28410 & (arr_13 [i_0] [i_0] [i_4]));
                }
                var_30 ^= (((((arr_14 [0] [i_1 + 1] [i_0] [i_0]) - 0))));
            }
        }
    }
    var_31 = ((((-127 - 1) ? 0 : 68719476735)));
    #pragma endscop
}
