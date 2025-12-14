/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84661
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_11 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_3 [i_2] [i_2])), ((unsigned short)13206)));
                        var_12 = ((/* implicit */short) max((((/* implicit */long long int) arr_3 [i_1] [i_1])), (((long long int) var_2))));
                        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) == (((/* implicit */int) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (_Bool)0))))))) : ((-(min((1152921504606715904LL), (((/* implicit */long long int) (short)-10325))))))));
            var_15 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(signed char)16] [(signed char)16])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1842541906)) ? (arr_7 [i_1]) : (((/* implicit */int) (unsigned char)251))))) ? (((/* implicit */int) ((((/* implicit */int) (short)21899)) == (2147483643)))) : (((arr_7 [i_1]) >> (((arr_0 [(_Bool)1]) - (13065050383885757906ULL))))))) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
        }
        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
        {
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4 - 1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13221)))))), (((arr_4 [i_4 + 1] [i_4]) << (((7771349163857900853ULL) - (7771349163857900818ULL))))))))));
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) ((short) (unsigned short)13188)))))) : (((arr_0 [i_0]) | (arr_0 [i_0]))))))));
        }
        arr_13 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (((-(554858508U))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (short)-29049))))))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)13499))))), (arr_9 [i_0] [i_0] [6ULL] [6ULL])))));
        arr_14 [i_0] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((597980723U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [6U] [i_0]))) : ((+(4127334335U)))))), (13943241421511008454ULL)));
    }
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned short) ((13943241421511008454ULL) & (((/* implicit */unsigned long long int) -1581063572))))))));
}
