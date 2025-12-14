/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((-16 ? 8834745372215739190 : 61603)) >= (((((0 ? -1606481603 : -1606481603))) ? (6841869352104486054 * -795475816) : (((var_10 ? var_0 : var_5)))))));
    var_18 = ((1869541288387432049 ? 13739490592747236088 : (-127 - 1)));
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_1] [i_3] [i_2] [i_3 - 3] = (1 - -29);
                            var_20 = ((((((247 ? 97309037 : -1606481603)) ? (((((arr_5 [i_1] [i_1]) || (arr_4 [i_0] [7]))))) : ((0 ? 2147483647 : 3758096384))))));
                            var_21 -= (((((0 ? 4294967295 : (((~(arr_1 [i_0] [i_0]))))))) | (arr_9 [i_2])));
                        }
                    }
                }
                arr_11 [i_0] [i_0 + 4] = (((arr_6 [i_1]) && 0));
            }
        }
    }
    #pragma endscop
}
