/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 5;
    var_12 = var_0;
    var_13 = (min(var_13, ((((!4294967295) ? (max(var_3, (max(var_1, (-2147483647 - 1))))) : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    var_14 = (max((max(311328754, 4294967295)), ((min(var_2, (arr_5 [i_0] [4] [0]))))));
                    var_15 ^= ((((((!1) ? (max(var_1, (arr_5 [i_0] [i_1] [i_0]))) : 32854))) ? 3 : var_1));
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    var_16 = (((((255 / (arr_3 [i_3 + 1] [i_3 - 1] [i_3 + 1])))) ? 41364 : 1372219042));
                    var_17 = (arr_10 [i_0] [i_3]);
                }
                var_18 = (max((max(var_8, ((-(arr_10 [i_0] [i_0]))))), (((!((((arr_10 [i_1] [i_1]) ? 1 : 4294967291))))))));
            }
        }
    }
    #pragma endscop
}
