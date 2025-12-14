/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70313
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
    var_17 -= ((/* implicit */long long int) (unsigned short)51311);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) arr_0 [i_1]);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [(unsigned short)15] [i_0] = ((/* implicit */_Bool) var_2);
                                var_19 *= ((/* implicit */_Bool) ((unsigned long long int) var_0));
                                var_20 = var_15;
                            }
                        } 
                    } 
                } 
                var_21 ^= ((/* implicit */long long int) max(((-(634186298362334688ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) < ((~(((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_14);
}
