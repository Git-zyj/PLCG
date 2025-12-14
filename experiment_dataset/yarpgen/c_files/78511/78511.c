/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((9223372036854775807 <= (var_1 % 2761967592))))) % var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [4] [i_1] [i_0] [i_2] = ((~((((2030730122 ? (arr_9 [1] [i_0]) : (arr_8 [i_0] [10] [0] [i_0])))))));
                    arr_11 [i_0] [1] [i_0] [i_0] = (arr_7 [i_0] [11] [i_2]);
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_12 = (max(var_12, (((((((!(arr_2 [i_3]))) ? -var_5 : (114 % var_3))) > (var_6 * var_2))))));
                    var_13 *= (((arr_8 [i_0] [i_0] [5] [i_3]) != ((var_1 ? 3979145752 : (max(1, (arr_1 [i_0] [i_1 + 1])))))));
                    var_14 = (max(49, ((((arr_8 [i_1] [i_1] [i_3] [i_1 - 1]) & 1)))));
                }
                var_15 = ((((((arr_5 [i_0] [i_1]) ? -89 : 100)) * 26608)) & -54);
            }
        }
    }
    #pragma endscop
}
