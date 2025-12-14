/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62189
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
    var_18 = (((+(((/* implicit */int) var_7)))) * (((/* implicit */int) (unsigned short)0)));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((379723664603443614LL), (((/* implicit */long long int) (unsigned short)50373))))), (((((/* implicit */unsigned long long int) 1683479543857644148LL)) * (17406469839690505920ULL)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)224))))) < ((-(var_13)))));
        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) -8847000501271073844LL)) ? (523384114) : (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                for (long long int i_4 = 2; i_4 < 12; i_4 += 3) 
                {
                    {
                        var_21 += ((/* implicit */short) min((((arr_3 [i_4 - 2]) / (((((/* implicit */_Bool) var_16)) ? (524287LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-36)))))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3])) ? (1040274234019045685ULL) : (((/* implicit */unsigned long long int) arr_11 [i_4] [i_3 - 2] [i_1] [2LL] [i_1]))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1993386125)) ? (max((63453114629939223LL), (8660476157333476626LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)210)))))))) ? (((/* implicit */long long int) ((var_17) ? (((/* implicit */int) arr_5 [i_3 + 2] [i_3 + 2] [i_4 - 2])) : (((((((/* implicit */int) (signed char)-104)) + (2147483647))) << (((var_10) - (3835754028846952958LL)))))))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_3 - 1] [i_4] [i_4] [i_4])) ? (arr_10 [i_1] [i_3 - 1] [i_4] [i_4] [i_4]) : (arr_11 [i_3] [i_3 - 1] [i_4] [i_4] [(unsigned short)7])))));
                        arr_12 [i_3] [4LL] [i_3] [i_4 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) -1652115405)) / (arr_10 [i_3 - 1] [i_3 + 1] [(unsigned short)6] [i_4 + 1] [i_4 - 2]))) % (((((/* implicit */_Bool) var_8)) ? (216024411677828553LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32)))))));
                        var_24 = ((/* implicit */unsigned char) arr_6 [i_4 - 1]);
                    }
                } 
            } 
        } 
        arr_13 [i_1] &= ((/* implicit */unsigned int) min((var_3), ((+(((long long int) (short)32055))))));
        arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_9 [6] [i_1]), (((216024411677828536LL) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (arr_10 [i_1] [i_1] [(short)5] [i_1] [i_1]) : (arr_0 [3ULL])));
    }
}
