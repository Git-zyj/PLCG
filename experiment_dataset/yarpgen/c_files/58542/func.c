/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58542
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
    var_20 &= ((/* implicit */signed char) var_0);
    var_21 *= ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (min((var_6), (((/* implicit */unsigned long long int) (~(var_18)))))) : (((/* implicit */unsigned long long int) var_2)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_22 = ((/* implicit */short) arr_4 [i_0]);
            arr_6 [i_0] [i_0] = (unsigned char)11;
            var_23 *= ((/* implicit */unsigned char) (~(((unsigned long long int) ((((/* implicit */int) (short)6857)) <= (((/* implicit */int) (signed char)-1)))))));
            var_24 = ((/* implicit */short) min((((arr_4 [i_0]) <= (((/* implicit */int) (unsigned char)80)))), (((((/* implicit */int) arr_2 [i_0] [i_1])) == (((/* implicit */int) (unsigned char)11))))));
        }
        for (short i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(var_9))), (((/* implicit */unsigned long long int) 726358592))))) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)207)))) : (((/* implicit */int) arr_2 [i_2] [i_2]))));
            arr_10 [i_0] = ((/* implicit */int) arr_8 [i_0] [i_2] [i_2]);
            var_26 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_8 [(_Bool)0] [i_2 - 1] [(_Bool)0])))));
        }
        var_27 = ((/* implicit */unsigned char) max((var_27), ((unsigned char)110)));
        arr_11 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)41928)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (signed char)1)))) : (((/* implicit */int) arr_5 [(unsigned char)1] [i_0]))))));
        arr_12 [4LL] [4LL] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_0 [4LL])), ((short)6857))))));
        arr_13 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((arr_4 [i_0]) == (((/* implicit */int) arr_1 [i_0] [i_0])))) ? (arr_3 [i_0]) : (-726358593))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 577599787U)) : (var_9)))) ? (arr_14 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [17])))));
        var_29 = var_19;
        var_30 = ((/* implicit */_Bool) 467077927);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 2366445666U)))) & (((14325127406698250809ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4])))))))) ? ((-((~(((/* implicit */int) (short)-3217)))))) : (((/* implicit */int) ((unsigned short) arr_7 [(short)14]))))))));
        arr_21 [i_4] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_4]))) != (1184517475U)));
        var_32 &= ((((/* implicit */int) (unsigned char)183)) | (arr_3 [i_4]));
    }
    var_33 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
}
