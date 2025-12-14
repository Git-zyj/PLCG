/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95080
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) : (min((0LL), (((/* implicit */long long int) var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)-10))))) ? (max((((/* implicit */unsigned long long int) var_19)), (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> (((/* implicit */int) var_18))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0 + 1] [i_1] [9ULL] [i_0 + 1] = ((/* implicit */unsigned short) (-(2563626710U)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1731340586U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) arr_13 [3] [i_4] [i_3] [i_3] [i_2] [i_1] [i_0])), (995142978U)))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0 - 1] [i_3] [i_4] [i_4] [1LL])) ? (((3299824317U) + (((/* implicit */unsigned int) 1424763649)))) : (min((((/* implicit */unsigned int) 1424763662)), (3299824307U)))))));
                                var_22 -= ((/* implicit */long long int) (+(var_6)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0 + 2] [i_0 + 2]);
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? ((~(((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (164833507U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
    /* LoopNest 3 */
    for (unsigned int i_5 = 4; i_5 < 17; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned char i_7 = 2; i_7 < 16; i_7 += 2) 
            {
                {
                    arr_24 [14LL] [i_7 + 3] [i_7] = ((/* implicit */signed char) arr_20 [(short)17] [(short)17] [i_7 - 2]);
                    var_25 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)62553))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3299824318U)))) : (((((/* implicit */_Bool) (unsigned char)2)) ? (arr_18 [(unsigned char)3] [i_6]) : (arr_18 [i_5] [i_5]))))), (((/* implicit */unsigned long long int) -1424763649))));
                    var_26 = ((/* implicit */unsigned short) arr_18 [i_5 + 2] [i_7 + 1]);
                    arr_25 [i_5 - 4] [2ULL] [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_19 [i_5])))) - ((-(((((/* implicit */_Bool) arr_19 [i_5 - 2])) ? (2051096635U) : (2243870655U))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) ((short) 2563626702U)))) : (((/* implicit */int) var_18))));
}
