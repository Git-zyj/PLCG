/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59245
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-(max((((/* implicit */unsigned long long int) arr_2 [i_0 + 4])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (var_5))))))))));
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_18 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((long long int) (unsigned char)131))), (var_5)));
                    arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) == (((/* implicit */int) ((_Bool) var_1)))));
                    arr_10 [12U] [i_0] [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_14)) : (var_7))));
                    var_19 ^= ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_3 [i_0 + 1])))) * (((((/* implicit */int) (signed char)0)) / (((/* implicit */int) arr_0 [i_1]))))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) (unsigned char)125))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [4] [4]))))) : (min((((/* implicit */unsigned int) (unsigned char)133)), (var_9)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))) : (var_7))))))) : (max((var_1), (((/* implicit */int) (unsigned char)109))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)117)) / (((/* implicit */int) (unsigned char)127)))))));
    }
    for (unsigned short i_3 = 3; i_3 < 24; i_3 += 4) 
    {
        var_21 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_13 [i_3 - 3]), (((((/* implicit */int) var_2)) > (var_1))))))) < ((-(((arr_13 [i_3]) ? (arr_12 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3])))))))));
        arr_14 [i_3] = ((/* implicit */unsigned int) arr_12 [24ULL]);
    }
    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)131))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)125)))) : (var_10)));
}
