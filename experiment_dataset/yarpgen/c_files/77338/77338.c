/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_14 [1] [1] [i_2] [i_2] [i_3] = (((max(16461, ((var_4 ? 1250616272565406757 : (arr_7 [i_0] [i_1]))))) ^ ((-4012123067574307472 ? 1 : 11191308602300586476))));
                        var_12 ^= (arr_9 [i_0] [9]);
                        var_13 = (min((((var_8 ? ((9223372036854775807 ? (arr_5 [i_0]) : 102)) : (arr_10 [i_0] [i_0] [i_0])))), ((2147483647 ? (min((arr_4 [i_0]), -3099814121132257014)) : 850731270))));
                        arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] = 187;
                    }
                }
            }
        }

        for (int i_4 = 4; i_4 < 14;i_4 += 1)
        {
            var_14 = (max(var_14, (arr_16 [i_4] [i_0] [i_0])));
            var_15 = 0;
            var_16 ^= var_2;
            arr_18 [12] = (arr_9 [i_0] [i_4 - 4]);
        }
    }
    var_17 = var_10;
    var_18 ^= var_3;
    #pragma endscop
}
