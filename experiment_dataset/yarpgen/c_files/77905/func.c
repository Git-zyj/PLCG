/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77905
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (_Bool)1))));
    var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1758683463)) ? (-1758683451) : (1758683457)));
    var_18 -= ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_19 &= ((/* implicit */unsigned long long int) ((long long int) arr_1 [(short)11]));
        arr_2 [i_0] = (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_0 [i_0]))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((signed char) 1758683451)))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                arr_12 [i_1] [i_1] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) ? (var_9) : (((/* implicit */unsigned int) (-(1113526754))))));
                var_21 -= ((/* implicit */short) ((unsigned long long int) max((arr_1 [i_1]), (arr_1 [i_1]))));
            }
            for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!((!(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (var_11))))))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-23232)) ? (((arr_11 [i_4] [6] [i_1]) % (arr_11 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102)))));
                arr_17 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((var_6) >= (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) -1113526765)) : (var_9)))), (((((/* implicit */_Bool) min(((short)-13), (((/* implicit */short) (unsigned char)232))))) ? (((/* implicit */unsigned long long int) arr_10 [i_4] [(short)11] [i_2] [i_1])) : (((unsigned long long int) 16804202226377221418ULL))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                arr_21 [i_1] [i_2] [i_5] [i_1] = ((unsigned long long int) (short)23217);
                var_24 -= ((/* implicit */short) ((unsigned char) max((((((/* implicit */_Bool) -1113526749)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_13 [i_5] [i_2] [i_1])))), (((((/* implicit */_Bool) (short)11)) ? (((/* implicit */int) (short)-23236)) : (785922332))))));
                arr_22 [i_1] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(1113526766)))) ? (-1113526751) : (((/* implicit */int) (short)14062)))) >= (((/* implicit */int) (unsigned char)76)))))));
                var_26 = var_14;
                var_27 = ((/* implicit */int) max(((~(2050904151007486071ULL))), (((/* implicit */unsigned long long int) var_11))));
                var_28 -= ((/* implicit */unsigned int) (((-(16395839922702065538ULL))) != (((/* implicit */unsigned long long int) arr_10 [(unsigned char)3] [i_2] [(short)3] [i_1]))));
            }
            var_29 += ((/* implicit */unsigned long long int) (short)-23229);
            var_30 = (~(((/* implicit */int) (short)14072)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                var_31 = ((((/* implicit */_Bool) arr_0 [i_7])) ? (arr_0 [i_2]) : (arr_0 [i_2]));
                var_32 = ((/* implicit */int) (+(arr_8 [2ULL] [i_7])));
            }
            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                arr_31 [i_8] [i_1] &= ((/* implicit */unsigned long long int) arr_29 [i_8] [i_1]);
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) arr_25 [i_8]))));
                var_34 *= ((/* implicit */unsigned long long int) (short)-24920);
            }
        }
        var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) 3318910455U))))), ((short)-17055)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((int) -8388608))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-7769114534798375324LL))))))) : (max((((/* implicit */unsigned long long int) 1164485429)), (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (16804202226377221396ULL)))))));
        arr_32 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)24908)) ? (16395839922702065529ULL) : (11618894230174272922ULL))) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_12)) : (16804202226377221419ULL)))));
    }
    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-1))))) * (var_6))))));
}
