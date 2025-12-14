/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77529
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_7))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_14))));
                                var_22 *= ((/* implicit */signed char) ((((/* implicit */int) var_11)) << (((var_14) + (3223533169725641815LL)))));
                                arr_12 [i_0] [i_1] [i_0] [i_1] [i_4 + 1] |= ((/* implicit */unsigned short) var_9);
                                var_23 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) << (((/* implicit */int) var_11)))) % (((((/* implicit */int) var_5)) - (((/* implicit */int) var_7))))))) - (((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
                            {
                                var_24 += ((/* implicit */short) ((4294967295U) <= (1U)));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_1] |= ((/* implicit */unsigned int) var_14);
                                var_25 |= var_18;
                            }
                            var_26 ^= ((/* implicit */signed char) ((var_15) - (((/* implicit */unsigned long long int) var_0))));
                            var_27 *= var_2;
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((var_1) ^ (var_0))))));
            }
        } 
    } 
}
