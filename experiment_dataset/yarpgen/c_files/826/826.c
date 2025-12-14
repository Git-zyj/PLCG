/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((var_2 < (min(143, ((-35 ? 18446744073709551615 : -821862842184406684))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 += (((((((4294705152 ? 1 : 18446744073709551613)) > (arr_4 [8] [8] [8])))) < ((-26829 ? 1 : 1))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_16 = ((((65531 || (arr_0 [i_0] [i_3 + 1]))) ? (((arr_7 [i_3 + 3]) ? (arr_7 [i_3 - 3]) : 16149071736089652116)) : (((arr_8 [i_3 - 1] [i_0] [i_0] [i_1]) ? (arr_7 [i_3 - 2]) : (arr_0 [i_0] [i_3 - 2])))));
                            var_17 = (max(((((arr_9 [i_3 + 2] [i_3 + 2] [3] [i_3 - 2]) ? (arr_9 [i_3 + 1] [i_3 - 3] [i_3] [i_3 - 1]) : (arr_9 [i_3 + 2] [i_3 + 3] [i_3] [i_3 - 3])))), (min(var_7, (arr_9 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 + 2])))));
                        }
                    }
                }
                var_18 = ((((arr_5 [i_0] [i_1] [i_1]) ? (arr_5 [i_0] [i_0] [i_1]) : (arr_5 [i_1] [i_0] [i_0]))) & (((arr_5 [i_1] [i_1] [i_0]) ? (arr_5 [i_1] [i_0] [i_0]) : (arr_5 [6] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        {
                            var_19 &= var_10;
                            var_20 -= (max((0 + var_4), (((arr_1 [2] [i_1]) ? 1054608014 : 32768))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
