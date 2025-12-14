/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (max(var_8, (arr_0 [i_0 + 3] [i_0 + 2])));
        var_16 = (((arr_1 [i_0]) ? (((-((-1 ? 47047 : -5))))) : (min(10, ((((arr_2 [i_0 + 3]) >= 23)))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_2] = ((~(arr_8 [i_1] [i_2 - 1] [i_1])));

            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                var_17 ^= (~var_12);
                var_18 = (max(var_18, var_2));
                arr_13 [i_1] [i_2] [i_1] [i_3] = ((((((arr_4 [i_2 + 1] [i_3 - 3]) > (arr_4 [i_2 - 2] [i_3 - 2])))) == (min(var_14, (arr_4 [i_2 - 2] [i_3 - 2])))));
                var_19 = -111;
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_18 [i_2 + 1] [i_2 + 1] = (min((arr_4 [i_2 + 1] [i_2 - 2]), ((((arr_7 [i_1] [i_2] [i_4]) ? (arr_12 [i_4] [i_2 + 1] [i_1]) : var_8)))));
                arr_19 [i_2] [1] [i_2 - 1] [i_2 - 2] = min((((((((arr_12 [i_1] [i_2] [i_4]) - (arr_16 [13] [i_1])))) ? -7 : 4194304))), (max(var_3, (var_13 + var_14))));
            }
        }
        var_20 -= (~2016);
        arr_20 [i_1] = var_3;
    }
    var_21 = (max(var_0, (max((~18483), (max(var_3, var_14))))));
    #pragma endscop
}
