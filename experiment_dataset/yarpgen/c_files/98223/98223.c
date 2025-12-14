/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_17 += ((1 >> (((((65534 - 1996973556) + (254 - 1228038265))) - 1070021237))));
                arr_6 [i_0 - 1] = 127;
            }
        }
    }
    var_18 ^= var_16;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_19 -= (51637 & 5344100150235291281);
            var_20 = 127;
        }
        arr_13 [1] = (65432 / 18446744073709551593);
        arr_14 [i_2] = (((124 - 0) >> 11));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_22 [i_5] [i_4] [i_5] [i_6] [i_6] = ((7243402459660453875 & 65521) | (0 && 1));
                        arr_23 [i_2] [i_4] [i_5] = (((3242 | 8) - 1));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_27 [i_7] = ((((((65401 << (3113939162 - 3113939154))) / -103)) / 127));
        arr_28 [i_7] = 2351647715651808467;
    }
    #pragma endscop
}
