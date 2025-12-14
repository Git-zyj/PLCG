/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99554
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned short)3884)))) != (((/* implicit */int) (unsigned short)61675))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)3884))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_0);
                                var_21 += ((/* implicit */long long int) var_2);
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_1 [i_4 + 1] [i_4 + 1]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)240)))));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */unsigned short) ((unsigned char) (short)6654));
    }
    var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)61651))));
}
