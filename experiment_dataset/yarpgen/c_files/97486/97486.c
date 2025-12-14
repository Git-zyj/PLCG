/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_14 += (((max(var_9, (arr_2 [i_0 - 1] [i_0 + 1])))) && (((4294967295 | (arr_2 [i_0 - 1] [i_0 - 1])))));
                var_15 = (max(var_15, (((((0 ? 3155375787 : 3241599896)) < ((((((var_0 - (arr_2 [9] [i_0]))) >= -444204000)))))))));
                var_16 = 3155375756;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_17 &= var_7;
                                var_18 = var_3;
                            }
                            var_19 *= var_1;
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(((((var_5 < -91) << (var_4 + 736537968369216153)))), (((max(2236, 0)) * 1))));
    #pragma endscop
}
