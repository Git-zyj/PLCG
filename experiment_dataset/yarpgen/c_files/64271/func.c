/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64271
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
    var_14 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 3]))))) && (((/* implicit */_Bool) max((arr_3 [i_0 - 1]), (((/* implicit */unsigned char) var_8)))))));
        arr_4 [(short)4] [(short)4] &= ((/* implicit */short) max((min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0]))))), (min((0U), (4284785506U))))), (((/* implicit */unsigned int) (!(var_13))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
        {
            var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((7U), (((/* implicit */unsigned int) arr_5 [6U] [i_1]))))) ? (((/* implicit */long long int) (+(4284785518U)))) : (((var_6) / (((/* implicit */long long int) var_3))))))) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */int) arr_3 [i_0 - 3])) >> (((((/* implicit */int) arr_3 [i_0 - 2])) - (40)))))));
            var_17 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((arr_2 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (max((((/* implicit */unsigned int) (unsigned char)213)), (10181796U))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_0))))), (((/* implicit */unsigned int) max((((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) arr_5 [4U] [i_1])) << (((/* implicit */int) var_8)))))))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_0 + 1]))) : (var_10)))));
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 10181790U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_10))), (((/* implicit */unsigned long long int) arr_6 [(short)11] [i_0] [i_0]))));
            var_20 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_2])) == (((/* implicit */int) var_8)))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (var_11))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_8)), ((unsigned char)252)))) | (((var_3) & (((/* implicit */int) (signed char)-125))))))) : (max((((/* implicit */unsigned int) (short)19718)), (var_0)))));
        }
    }
    for (unsigned char i_3 = 3; i_3 < 24; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(arr_11 [i_3 + 1])))) >= (min((var_1), (((/* implicit */unsigned long long int) arr_14 [i_3 - 1] [i_4]))))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)126)), ((+(8183905817808607041LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14680064U)) ? (((/* implicit */int) arr_10 [i_3 - 3] [i_4])) : (var_3)))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((((/* implicit */int) var_2)) + (87))) - (12)))))) : (((var_8) ? (arr_12 [i_3] [i_4] [i_4]) : (var_0))))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) ((var_8) && (((/* implicit */_Bool) var_0)))))))) ? (((((var_10) >= (((/* implicit */unsigned long long int) var_6)))) ? (((/* implicit */long long int) var_0)) : (var_6))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 14234783717084225216ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)7779))))), (((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
        }
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (var_3)))))), ((+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0)))))));
        var_25 = ((/* implicit */unsigned long long int) arr_11 [(short)7]);
    }
    for (unsigned char i_5 = 3; i_5 < 24; i_5 += 3) /* same iter space */
    {
        arr_19 [i_5 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)338))) : (4284785506U))), (((/* implicit */unsigned int) (unsigned char)193))))) ? ((-(((/* implicit */int) (unsigned char)253)))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) 855647092U)))), ((_Bool)1))))));
        arr_20 [i_5] = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_6)) + (var_1))) <= (((/* implicit */unsigned long long int) arr_17 [i_5 - 3]))))), (var_12)));
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (max((arr_12 [(signed char)19] [(signed char)19] [(short)10]), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) & (((/* implicit */int) (signed char)113))))))))))));
        var_27 = ((/* implicit */short) ((arr_11 [i_5 - 2]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_11 [i_5]), (((/* implicit */long long int) (_Bool)1)))))))))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 - 2] [21U]))) + (var_10)))))) ? (((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)127))))) : (max((arr_15 [i_5]), (((/* implicit */unsigned int) -2055282741)))))) : ((-(arr_15 [i_5])))));
    }
    for (unsigned char i_6 = 3; i_6 < 24; i_6 += 3) /* same iter space */
    {
        arr_23 [(_Bool)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_22 [4ULL]), (arr_22 [i_6 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_6] [(unsigned char)10])) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((~(var_9))))) : (((/* implicit */long long int) (((!((_Bool)0))) ? ((+(((/* implicit */int) (short)-20966)))) : ((-(((/* implicit */int) var_8)))))))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_16 [i_6 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))) : (arr_14 [i_6] [i_6])));
    }
}
