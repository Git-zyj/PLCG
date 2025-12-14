/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65879
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
    var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) (unsigned char)19))))) ? (((var_10) >> (((((/* implicit */int) (unsigned char)236)) - (230))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */int) ((max((824939010U), (((/* implicit */unsigned int) (short)30206)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_3 + 2])) < (1591845112)))))));
                        var_17 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)217))))) != (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))) : (3470028286U)))))) <= (((/* implicit */int) min((arr_3 [i_3 + 1] [i_3]), (arr_3 [i_3 - 1] [i_3 - 1]))))));
                        var_18 = ((/* implicit */long long int) max(((unsigned char)66), ((unsigned char)4)));
                        arr_9 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)25076)) ? ((~(((/* implicit */int) arr_6 [i_3 - 2] [i_3 + 1] [i_3 + 2] [i_3] [i_3 - 2] [i_3])))) : (max((arr_0 [i_0]), (((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0] [i_0] [i_3]), (((/* implicit */unsigned short) (unsigned char)17)))))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_8 [i_0] [i_1] [i_3 - 3] [i_2] [i_0] [i_0])))) - (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_3 - 3] [i_3 - 2] [i_0]))))));
                    }
                } 
            } 
        } 
        var_20 *= ((/* implicit */_Bool) ((2586778905U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224)))));
        var_21 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) >> (((((((unsigned int) var_7)) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)191)) - (((/* implicit */int) arr_2 [i_0] [i_0]))))))) - (2666499360U)))));
        arr_10 [i_0] = ((/* implicit */unsigned short) var_5);
        var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0]) ^ (((/* implicit */unsigned int) var_14))))) ? (max((2742243100U), (3470028293U))) : (((/* implicit */unsigned int) (~(-466680701))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)5)) | (((/* implicit */int) (unsigned short)65521))))))) : ((~(((((/* implicit */_Bool) 10785461241712507025ULL)) ? (1708188391U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2)))))))));
    }
    var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 469762048U)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)29)))))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (0U))))))));
    var_24 = ((/* implicit */unsigned char) 3260089440303366523ULL);
}
