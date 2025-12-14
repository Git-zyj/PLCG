/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = (arr_11 [i_0]);
                                var_13 = ((var_11 ? var_1 : ((~(((arr_1 [i_3] [i_1]) / var_8))))));
                                var_14 = (!var_8);
                                var_15 |= (min((((23294 & 244) << (10992066940743803585 - 10992066940743803563))), (29 ^ 24576)));
                            }
                        }
                    }
                    var_16 = ((!(((19601 ? 19521 : 1)))));
                    arr_13 [12] [12] [i_2 - 1] = 65534;
                    arr_14 [i_0] [i_1] [i_2] [i_1] = ((((((((19617 ? 27074 : (arr_2 [i_0] [0] [i_1])))) ? (((var_7 ? (arr_2 [i_0] [i_0] [i_2 + 1]) : (arr_6 [i_0] [i_0])))) : ((-(arr_8 [i_0] [i_1] [1] [i_1] [1])))))) ? ((19630 | (arr_9 [i_1] [i_1] [i_1] [i_2 - 1] [i_0] [i_1]))) : (((((((arr_8 [21] [21] [11] [11] [21]) || (arr_5 [i_0] [i_1] [i_1])))) & ((max(var_0, 255))))))));
                    var_17 = (min(var_1, (((-var_4 + 2147483647) << (16295717936753675362 - 16295717936753675362)))));
                }
            }
        }
    }
    var_18 = 8589934591;
    var_19 = -4294967295;
    #pragma endscop
}
