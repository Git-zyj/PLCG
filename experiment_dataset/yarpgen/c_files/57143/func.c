/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57143
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) (short)-25448));
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    var_14 = ((/* implicit */signed char) max((((min((((/* implicit */unsigned long long int) 2342141657U)), (9004954410493254059ULL))) << (((((((/* implicit */_Bool) 2342141657U)) ? (((/* implicit */int) (short)-24)) : (((/* implicit */int) (signed char)15)))) + (78))))), (((/* implicit */unsigned long long int) 3394811922U))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 9004954410493254059ULL))) ? (((/* implicit */long long int) 3394811922U)) : (2610210986003974672LL)))) ? (((unsigned int) arr_2 [i_1] [i_1] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))))))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) 0);
    var_17 -= ((/* implicit */int) var_3);
    var_18 += ((/* implicit */short) var_7);
    var_19 = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) var_10)), (((var_12) / (((/* implicit */unsigned long long int) 3047104058U))))))));
}
