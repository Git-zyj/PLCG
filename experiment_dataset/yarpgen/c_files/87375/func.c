/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87375
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
    var_11 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_12 += ((/* implicit */unsigned short) max((((/* implicit */int) max((((((/* implicit */_Bool) var_1)) || ((_Bool)1))), (arr_3 [i_0] [i_2])))), (((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (_Bool)1))))));
                    var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(7280836257782329534ULL))))));
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)3072)), (arr_1 [i_0])))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)128))))))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) 5ULL))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((var_1) * (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */int) (short)-19994)))))))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_18 |= (!(((/* implicit */_Bool) arr_2 [i_3])));
        var_19 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)24)) > (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 3) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (max((((/* implicit */unsigned int) var_9)), (arr_10 [i_4 + 1]))) : (((/* implicit */unsigned int) ((arr_11 [i_4 + 2]) ^ (((/* implicit */int) ((3504097809U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))))))));
        arr_12 [i_4] [1U] &= max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) var_8)))))), ((-(arr_10 [i_4 - 1]))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)123)), (1172057971U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_4 + 2]) >> (((var_8) - (1408928288113301049LL)))))) ? (((((/* implicit */int) (unsigned char)101)) >> (((arr_11 [i_4]) - (1903121739))))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_9))))))) : (((arr_10 [i_4 + 2]) + (arr_10 [i_4 - 1])))));
    }
    var_22 = ((/* implicit */signed char) var_6);
    var_23 = ((/* implicit */int) ((((((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))))) << (((max((3122909324U), (((/* implicit */unsigned int) (unsigned char)144)))) - (3122909296U))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) 0U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-82))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)154)))))))));
}
