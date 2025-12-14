/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55376
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned long long int) arr_5 [i_1 + 3] [i_1 + 2] [i_1 + 2])) : (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 2] [i_1 + 2])) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        arr_12 [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_6)) ? (var_8) : (4294967270U)))));
                        var_12 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (100436689U) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-114)) + (var_1)))))));
                        arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (unsigned short)11910);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            var_13 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77))) - (((((((/* implicit */unsigned long long int) 3945601961U)) - (0ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (0U) : (((/* implicit */unsigned int) 7))))))));
                            var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2751602170U)) ? (4125945571U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_4 - 2] [i_3 + 1] [i_2 + 1] [i_1 - 1]))))) ? (((102435015U) << (((4194530637U) - (4194530622U))))) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1])))))));
                        }
                        var_16 = ((/* implicit */unsigned int) arr_15 [i_3 - 1] [i_3] [i_2 - 3] [i_2] [i_2] [i_2] [i_1 + 3]);
                    }
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) (_Bool)0))))) + (min((((/* implicit */unsigned int) var_11)), (var_5)))))), (min((-8180387464828880115LL), (var_2)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 1727095756U)) : (0ULL)));
    var_19 = ((/* implicit */unsigned long long int) var_2);
}
