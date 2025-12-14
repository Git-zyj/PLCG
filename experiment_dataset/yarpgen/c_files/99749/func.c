/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99749
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)-104)) + (((/* implicit */int) (short)29640)))))) >= (((var_11) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_2 [(unsigned char)21])) : (((/* implicit */int) arr_0 [0U]))))))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */int) (short)-29652)) : (((/* implicit */int) (unsigned short)61635))))) ? (((/* implicit */int) ((short) arr_10 [i_2] [i_1] [(unsigned short)4] [i_0]))) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [(_Bool)1]))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) || (arr_13 [i_3] [i_3 - 1] [i_3 - 1]))));
                        var_16 |= ((/* implicit */int) (-(((unsigned int) arr_10 [i_0] [i_1] [i_2] [i_3 - 1]))));
                        arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) var_9);
                    }
                    for (unsigned int i_4 = 4; i_4 < 19; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-14765)))) ? (min((((/* implicit */unsigned int) (short)29644)), (6U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4 - 4])) && (((/* implicit */_Bool) var_13))))))));
                        var_18 ^= ((/* implicit */long long int) (unsigned short)65524);
                        arr_20 [i_4] [i_1] [i_0] = ((((/* implicit */_Bool) arr_14 [i_4] [i_1] [i_1] [i_0])) ? ((((!(var_11))) ? (((((/* implicit */_Bool) (short)14781)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) : (16U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-29654)) : (((/* implicit */int) var_13))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (short)-29654)))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_23 [(signed char)18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (short)29653)) : (((/* implicit */int) (short)-14772))));
                        var_19 = ((/* implicit */long long int) var_11);
                    }
                    arr_24 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)43)))) / (((/* implicit */int) (unsigned char)177))))) ? (max((((((/* implicit */_Bool) (signed char)-18)) ? (-461702785607138890LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (8226447806990488774LL))) < (((/* implicit */long long int) var_4)))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_7) : (var_10)))) / (((long long int) (signed char)119))))));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))), (var_5)));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_11) ? (var_1) : (((/* implicit */int) (short)-9186)))) | (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((var_9) + (var_1)))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))) / (55360318417798855LL)))));
}
