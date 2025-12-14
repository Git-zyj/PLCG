/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min(var_6, 104)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_12 = (min(var_12, ((min(((((var_6 || (arr_5 [i_0] [i_0] [i_3 - 1]))) || 9223372036854775799)), (((arr_0 [i_1] [i_3 - 1]) || var_9)))))));
                        var_13 = (((min(((((arr_3 [i_0]) - (arr_7 [i_3])))), (arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]))) % (arr_0 [i_0] [i_3 - 2])));
                        var_14 = (max(var_14, 65535));
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = ((((var_9 > (12666022736735927676 != 65531))) ? ((-(max(5780721336973623930, (arr_0 [i_0] [5]))))) : ((((((arr_0 [i_0] [i_0]) + 2147483647)) >> ((((~(arr_0 [i_0] [12]))) - 28859)))))));
    }
    #pragma endscop
}
