/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64043
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (signed char)61))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-7422))))) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (signed char)67))));
        arr_3 [i_0] = ((short) min(((signed char)-57), (arr_1 [i_0])));
        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (_Bool)1))))) & (min((((/* implicit */unsigned long long int) (short)-32438)), (13055798032348685690ULL)))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
            {
                var_21 = ((/* implicit */short) ((max((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)-67)))), (((/* implicit */int) (signed char)-74)))) > (((((/* implicit */_Bool) (short)-6522)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (unsigned short)25619))))));
                var_22 = var_17;
                var_23 = (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (10ULL))));
            }
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_16 [i_1] [i_1] [(short)10] [(signed char)6] = ((/* implicit */short) (+(((((((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_2] [i_4])) + (2147483647))) >> (((((/* implicit */int) (signed char)45)) - (38)))))));
                var_24 = (~(((var_2) ? (arr_14 [(signed char)1] [i_2]) : (arr_9 [i_1] [i_1 + 1]))));
            }
            var_25 = ((/* implicit */unsigned short) ((unsigned long long int) min(((unsigned short)41413), (((/* implicit */unsigned short) (short)-15575)))));
            arr_17 [i_1] = ((/* implicit */signed char) var_5);
            arr_18 [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) (((_Bool)0) ? (3226119044U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15581)))));
            var_26 += ((/* implicit */unsigned long long int) var_4);
        }
        for (short i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_20 [i_1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((((/* implicit */int) (signed char)-67)) + (((/* implicit */int) (signed char)45)))) : (((/* implicit */int) arr_13 [i_1] [i_5] [i_5] [i_5])))), (((/* implicit */int) ((min((arr_14 [5ULL] [i_5 + 1]), (9950922577041934853ULL))) != ((+(arr_20 [i_1] [i_5]))))))));
            arr_21 [i_5] [i_1 + 1] [i_5 - 1] = ((/* implicit */_Bool) var_0);
        }
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            var_28 -= ((/* implicit */short) var_8);
            var_29 = ((/* implicit */short) min((((((/* implicit */_Bool) (-(4888433274249008811ULL)))) ? (arr_10 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) (short)-23422)) : (((/* implicit */int) (unsigned short)61800))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2243478093657635294ULL)) ? ((-(((/* implicit */int) arr_23 [i_1 + 1] [i_1 + 1])))) : (((/* implicit */int) var_12)))))));
            var_30 = ((/* implicit */unsigned int) max(((unsigned short)25643), (((/* implicit */unsigned short) (short)-23419))));
        }
        var_31 = ((/* implicit */_Bool) (short)32761);
    }
}
