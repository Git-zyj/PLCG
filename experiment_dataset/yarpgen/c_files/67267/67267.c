/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = (((-18888 != -17) ? 9007 : (((32754 && (((4294967294 ? 95 : 67))))))));
                            var_16 = ((~((~(18446744073709551598 > 7787)))));
                            arr_14 [i_0] [i_1 + 3] = (((((-2147483644 - ((3411272514 ? -1123882266 : -32758))))) ? (((((~-12) > (((2842146393 ? 3483107717 : -32729))))))) : ((80 ? ((32755 ? 16 : -1448932760)) : (!14)))));
                            var_17 = 2383991552;
                        }
                    }
                }
                arr_15 [i_1] = (~32762);
            }
        }
    }
    var_18 = 3258264009903324721;
    #pragma endscop
}
