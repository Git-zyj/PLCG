/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83023
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (_Bool)1))));
        var_17 = ((/* implicit */unsigned char) ((((long long int) ((long long int) (signed char)69))) <= (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-84))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1167658377795721285LL)) ? (((((/* implicit */_Bool) (unsigned char)251)) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!((_Bool)1))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_8 [i_1] [i_1] [i_2])) & (((/* implicit */int) (signed char)98))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (signed char i_4 = 4; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_20 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16999))) - (1041938048U)))))), (((((((-3335483268464778806LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_1 [i_1])) - (136))))) + (((/* implicit */long long int) min((arr_7 [10U]), (((/* implicit */unsigned int) (_Bool)1)))))))));
                        var_21 = ((/* implicit */unsigned char) max((max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_13)))))), (((((/* implicit */int) ((_Bool) (_Bool)1))) >> (((1651382751U) - (1651382724U)))))));
                    }
                } 
            } 
        }
        var_22 = var_2;
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1974309592422637350LL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-27105))) == (-3335483268464778806LL)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_4 [i_1] [i_1])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (18446744073709551615ULL)))));
        arr_17 [i_1] = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (short)-22515)) : (((/* implicit */int) var_15)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        var_24 = ((/* implicit */long long int) (signed char)14);
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((_Bool)1), (var_15))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)234)))), ((_Bool)1))))));
}
