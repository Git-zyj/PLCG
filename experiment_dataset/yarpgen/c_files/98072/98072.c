/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] [i_3] [i_2] [i_1] [i_3] = ((~((1 ? (arr_2 [i_0 + 2] [i_1 + 2]) : (arr_9 [0] [i_2] [i_2] [i_0])))));
                        arr_12 [i_3] [i_3] [i_2] [i_3] [i_2] [3] = ((((min((0 * 0), (65535 > 65535)))) ? (max((237 ^ 18446744073709551615), (((arr_7 [6] [i_1] [i_2] [5]) ? 18446744073709551615 : (arr_2 [i_0] [i_1]))))) : (arr_9 [i_0 + 1] [i_1] [i_2] [i_0 + 1])));
                    }
                    arr_13 [i_2] [i_1] [i_2] = ((-24547 ? 1 : 1298319376));
                }
            }
        }
    }
    var_15 = 18209727724644702892;
    #pragma endscop
}
