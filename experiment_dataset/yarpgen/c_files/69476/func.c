/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69476
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] |= ((/* implicit */signed char) (~((((~(4959660796398870346ULL))) ^ (max((((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1])), (4959660796398870346ULL)))))));
                var_10 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                var_11 *= (+(((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [(_Bool)1]) - (651318568U))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (signed char i_6 = 2; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_5] [i_5]))))) ? (((4905226778314853214LL) / (((/* implicit */long long int) -1691921888)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 2575297594U)) >= (-4905226778314853221LL))))))) + (9223372036854775807LL))) << ((((+(((((/* implicit */_Bool) arr_9 [i_4 - 1])) ? (((/* implicit */int) arr_11 [i_2])) : (arr_14 [i_6 + 4] [i_6 + 4] [i_6]))))) - (11))))))));
                                arr_22 [i_2] [i_3] [i_4] [i_3] [i_6 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((long long int) arr_20 [i_6 - 1] [i_3])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)31))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((((/* implicit */_Bool) 1719669687U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_2] [i_3]), (((/* implicit */unsigned int) -530860430))))) ? (((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (3355992029U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [(_Bool)1])))))))) : (((4959660796398870346ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))))));
            }
        } 
    } 
}
