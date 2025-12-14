/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89828
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_13 += ((/* implicit */short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))) ^ (((unsigned int) arr_2 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)117)) / (((/* implicit */int) (unsigned char)172)))) <= (((/* implicit */int) ((signed char) (~(var_1)))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    arr_14 [i_2] [i_1] [i_2] [(signed char)1] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
                    arr_15 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned short) var_0));
                }
                var_14 = ((unsigned int) ((short) (unsigned char)135));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_4])) ? (arr_2 [i_0] [(unsigned short)4]) : (arr_2 [i_1] [i_0])))));
                arr_20 [(unsigned char)8] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (arr_2 [i_0] [i_1])));
                var_16 = arr_19 [i_1] [0ULL] [i_1];
                var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) arr_7 [i_4] [i_0] [i_4]))))) ? ((+(((/* implicit */int) arr_19 [i_1] [i_1] [i_1])))) : (((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : ((+(((/* implicit */int) ((signed char) (unsigned char)124)))))));
            }
            for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((long long int) 0ULL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10627266901539236951ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned int) 10627266901539236951ULL))))));
                var_18 = ((/* implicit */signed char) max((var_18), (arr_5 [i_5 + 2] [i_5 + 2] [i_0])));
            }
            arr_24 [i_1] = ((/* implicit */long long int) min((((unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_1])), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [(unsigned char)7]))) + (arr_18 [i_0] [i_1] [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) - (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))));
            arr_25 [i_0] = ((/* implicit */int) ((max((var_5), (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-107), (var_2)))))));
            var_19 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)17))))) ? (17299778365907566937ULL) : (10658725212638748545ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_0] [i_0])), ((short)1124)))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_4)))))) && (((/* implicit */_Bool) (unsigned char)6))));
            arr_30 [i_6] [(signed char)6] |= ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) arr_16 [i_0] [1U] [i_6])) : (((/* implicit */int) (signed char)-59))))), (max((var_5), (((/* implicit */unsigned long long int) var_4)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8657929856150195960ULL)) ? (398579106U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))));
            var_21 *= ((/* implicit */unsigned char) arr_1 [i_0] [i_6]);
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            var_22 ^= ((/* implicit */short) ((((((/* implicit */int) arr_26 [i_7])) <= (((/* implicit */int) (short)8894)))) ? (((((/* implicit */int) arr_26 [(unsigned short)16])) / (((/* implicit */int) (signed char)3)))) : (((/* implicit */int) arr_32 [(unsigned char)17] [i_7]))));
            var_23 -= ((/* implicit */unsigned int) arr_33 [i_7]);
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) 72057589742960640LL))))))));
            arr_36 [i_0] [10ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8894))) : (1146965707801984678ULL)));
        }
    }
    for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        arr_39 [i_9] = ((/* implicit */unsigned int) 1ULL);
        var_25 ^= arr_38 [i_9];
        var_26 = ((/* implicit */_Bool) arr_37 [i_9]);
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((var_12) >> (((((/* implicit */int) arr_19 [i_10] [i_10] [i_10])) - (54))))) < (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_10] [i_10] [i_10]))))))))));
        arr_43 [i_10] = ((/* implicit */unsigned int) (short)17358);
    }
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)97)) != (((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (short)511)))), (((/* implicit */int) var_9))))) : (((((var_5) % (((/* implicit */unsigned long long int) 827271293U)))) / (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) var_9)))))))));
}
