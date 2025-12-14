/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67069
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
    for (long long int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) max((((/* implicit */long long int) max(((+(arr_4 [i_1 - 1]))), ((+(((/* implicit */int) arr_5 [i_0] [i_0]))))))), (((-9223372036854775800LL) | (((/* implicit */long long int) arr_1 [i_0 - 1] [i_1 - 1]))))));
                var_19 = ((/* implicit */_Bool) ((((unsigned long long int) min((var_1), (var_1)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_7))))) ? (((((/* implicit */unsigned int) var_1)) ^ (arr_2 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)1), ((unsigned char)78)))))))) ? (min((((arr_2 [i_0 - 2]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_0 - 4] [i_1 - 1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-9090), ((short)9109)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)78)) ? (var_5) : (((/* implicit */int) var_7))))), ((~(var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1760685365769022376ULL)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)9089)), (var_14))))))) : (max((((/* implicit */long long int) min((var_14), (var_1)))), (min((((/* implicit */long long int) (short)-1)), (var_2)))))));
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_8))));
    /* LoopSeq 4 */
    for (int i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((4183500791180206432ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) var_12))))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (144115153716117504ULL)))) ? (((var_13) ? (arr_1 [i_2] [i_2]) : (((/* implicit */int) var_4)))) : (((arr_1 [i_2 + 1] [i_2]) * (((/* implicit */int) (signed char)0))))))));
        var_23 = ((/* implicit */unsigned char) arr_8 [i_2] [i_2]);
    }
    for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_6)), (var_12)))) ? ((+(((/* implicit */int) var_7)))) : ((+(arr_1 [i_3] [i_3])))))), (16686058707940529240ULL)));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2147483647) << (((((/* implicit */int) (unsigned char)11)) - (11)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) min((3581862622754156869ULL), (((/* implicit */unsigned long long int) arr_3 [i_3 + 1]))))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_3] [i_4])) + (((/* implicit */int) (signed char)-115))))) > (max((arr_2 [i_3]), (((/* implicit */unsigned int) var_13))))))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (arr_1 [i_3] [i_4])))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_6))))) : ((+(((/* implicit */int) var_13))))))));
            var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) arr_4 [i_3])) + (arr_2 [i_3]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_16)), (var_4))))))) + (((((/* implicit */_Bool) ((var_13) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_3] [i_3])), (arr_11 [i_4]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)9089))) + (arr_10 [i_3])))))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_5] [i_5])) >= (((((/* implicit */_Bool) 4050534571543486253ULL)) ? (((/* implicit */int) arr_0 [i_5] [i_5])) : (((/* implicit */int) var_12)))))))));
        var_29 = ((/* implicit */unsigned short) arr_1 [i_5] [i_5]);
        var_30 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) var_15)) : (-198991924)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_11)))))) ? (((/* implicit */unsigned long long int) var_14)) : (max((max((var_17), (((/* implicit */unsigned long long int) var_10)))), (((arr_5 [i_5] [i_5]) ? (var_17) : (((/* implicit */unsigned long long int) arr_1 [i_5] [i_5]))))))));
    }
    for (int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) var_11)) % (arr_19 [i_6])))))) ? (((((/* implicit */int) var_16)) - (var_1))) : (((int) arr_20 [i_6] [i_6]))));
        arr_22 [i_6] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_15 [i_6] [i_6])) ? (arr_8 [i_6] [i_6]) : (((/* implicit */int) arr_14 [i_6]))))))) ? (((long long int) ((((/* implicit */_Bool) 2147483641)) ? (var_2) : (((/* implicit */long long int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_6])) ? (var_2) : (((/* implicit */long long int) arr_1 [i_6] [i_6]))))) ? ((+(arr_15 [i_6] [i_6]))) : (min((arr_7 [i_6]), (arr_12 [i_6] [i_6])))))));
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 131071)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))) ? (min((arr_10 [i_6]), (4001031491480235405ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (var_2) : (((/* implicit */long long int) 2147483647)))))))) ? (((((/* implicit */_Bool) arr_12 [i_6] [i_6])) ? (min((((/* implicit */unsigned long long int) (unsigned char)254)), (18446744073709551615ULL))) : (((var_17) - (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) arr_12 [i_6] [i_6]))));
    }
    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_15) ? (((/* implicit */unsigned int) var_5)) : (1459940623U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) (unsigned char)185)) ? (-794431989) : (-1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)177))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_6))))) : (((((/* implicit */long long int) var_1)) ^ (var_2))))))))));
}
