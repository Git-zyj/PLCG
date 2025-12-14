/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66565
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
    var_14 &= ((/* implicit */unsigned int) (((((~((+(((/* implicit */int) (_Bool)0)))))) + (2147483647))) >> (((/* implicit */int) (unsigned char)28))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) 7826374545443332247ULL))));
                    var_16 = ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) (unsigned char)32)))));
                    var_17 = ((/* implicit */unsigned char) var_12);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 3; i_3 < 23; i_3 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) -1)) >= (2566969525U)))) & (((((((/* implicit */int) (signed char)-57)) + (2147483647))) << (((var_12) - (1105257270))))))))));
        arr_12 [i_3 - 3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (2486991557U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10640)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)226))))))))));
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-6070477481303696600LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) (short)23655)) : (((/* implicit */int) arr_11 [i_3] [i_3]))))))))) : ((~(2379970197861541590ULL)))));
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */int) arr_9 [i_4] [i_4]);
        var_19 ^= ((/* implicit */signed char) (+(((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    }
}
