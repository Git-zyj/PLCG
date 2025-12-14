/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = (arr_1 [i_1]);
                    var_13 = ((-((((-(arr_4 [i_2]))) * -var_0))));
                }
            }
        }
    }
    var_14 = var_11;
    var_15 = var_5;
    var_16 = (min(var_16, (((var_3 * ((((var_12 + 2147483647) >> (-113 - 133)))))))));
    var_17 = (((((-(var_5 == var_5)))) ? (((((var_3 ? var_8 : var_11)) | ((min(var_8, var_5)))))) : (max(var_3, ((var_12 ? 4503599627370496 : var_10))))));
    #pragma endscop
}
