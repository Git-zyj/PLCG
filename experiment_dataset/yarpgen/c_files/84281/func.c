/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84281
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
    var_16 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) min(((short)(-32767 - 1)), (((/* implicit */short) ((signed char) (signed char)28)))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_1 + 2])) : (((/* implicit */int) arr_0 [i_0] [i_1 + 2]))))) ? (((/* implicit */int) max(((short)32767), (((/* implicit */short) var_15))))) : ((+(((/* implicit */int) arr_0 [i_0] [i_1 + 2]))))));
                        var_19 = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((((/* implicit */int) (signed char)7)) <= (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))) && (((/* implicit */_Bool) arr_5 [i_0]))))), (max((((signed char) 1239779125U)), (arr_3 [i_0])))));
                    }
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_12 [15ULL] [(signed char)18] [(signed char)0] [i_4])), (var_0)))) ? (min((var_0), (((/* implicit */unsigned int) (unsigned short)127)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (var_14))))))) ? (max((0ULL), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6042323286592453659LL)) ? (((((/* implicit */int) arr_6 [i_4] [i_2] [i_1 + 3] [i_0])) + (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */int) (short)19648)) / (((/* implicit */int) (signed char)28))))))));
                        arr_14 [11ULL] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */signed char) arr_12 [i_0] [i_1] [i_2] [i_4])), (arr_8 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) : (var_12))) & (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) (signed char)108);
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)239)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)9619))))) ? (((((/* implicit */int) arr_1 [i_1 - 2] [i_1])) + (((/* implicit */int) arr_11 [(unsigned short)16] [i_1] [i_1 + 3] [i_2])))) : (((/* implicit */int) arr_3 [i_0]))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1] [i_1 + 2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_4 [i_1 - 2] [4LL] [i_1 - 2]))))) ? (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1] [i_1 + 2]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1] [i_1 + 2]))) + (13090326462580949120ULL))))))));
                    arr_15 [i_0] [i_1] [i_0] [i_2] = max((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))), (((((/* implicit */int) var_5)) >> (11ULL))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_14) < (((((/* implicit */int) var_9)) & (((/* implicit */int) (_Bool)0))))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) -1227952352)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (signed char)-86)))) > (((/* implicit */int) max((var_7), (var_3)))))))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48876))) == (511U)));
    var_26 = ((/* implicit */unsigned char) 2892617376U);
}
