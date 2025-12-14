/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60541
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) -1860527010)) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))), (((long long int) -6847661801074971249LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]))))));
            arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */int) var_11)), (((1860526994) + (((/* implicit */int) var_8)))))));
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)37)))) & (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (short)-22685)) : (((/* implicit */int) var_0))))))) ^ (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)66))) ^ (arr_3 [i_0] [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) << (((arr_1 [i_0] [14ULL]) - (2025437809))))))))));
            var_14 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 3])) ? (arr_3 [i_0] [i_1 - 3]) : (((/* implicit */long long int) arr_1 [(_Bool)1] [i_1 - 3]))))) ? (((((/* implicit */_Bool) min(((unsigned char)98), (((/* implicit */unsigned char) arr_0 [i_1 - 2]))))) ? (min((var_9), (var_5))) : (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2071448230U))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) + (((/* implicit */int) (signed char)3)))) | (arr_2 [i_1] [i_0]))))));
        }
        var_15 = min((((((/* implicit */_Bool) var_0)) ? (2692176914U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))))), (var_5));
        var_16 = ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) max((arr_0 [i_2]), (var_10)))) ^ (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_8 [i_0])) : (2008787581))))));
            var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) var_3))), (((((/* implicit */int) var_4)) * (((arr_0 [i_2]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_2]))))))));
        }
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            arr_12 [4U] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
            arr_13 [i_0] [7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [i_0])) ? (min((arr_2 [i_3] [4U]), (((/* implicit */int) arr_5 [i_3])))) : (((var_4) ? (arr_6 [i_0] [(_Bool)1]) : (((/* implicit */int) (signed char)66))))))) ^ (((unsigned int) min((17609211553367790063ULL), (((/* implicit */unsigned long long int) var_2)))))));
            arr_14 [19ULL] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_1 [i_0] [(short)4])), (9223372036854775807LL))), (((/* implicit */long long int) ((int) var_3)))))) || (((((/* implicit */_Bool) arr_8 [i_0])) && (((var_7) && (((/* implicit */_Bool) 2223519065U))))))));
            /* LoopSeq 2 */
            for (short i_4 = 1; i_4 < 22; i_4 += 4) /* same iter space */
            {
                var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)1001)))), (((/* implicit */int) ((unsigned char) min(((short)29747), (((/* implicit */short) var_6))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (long long int i_6 = 3; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((long long int) ((short) var_5)));
                            var_20 = ((/* implicit */short) min((((arr_15 [i_0] [i_3] [i_4]) % (arr_15 [i_6 - 2] [i_4] [i_4 + 1]))), (((/* implicit */long long int) var_5))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((long long int) ((unsigned long long int) arr_20 [i_6 - 1] [i_6 - 1] [i_4 - 1]))))));
                            var_22 = ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
            }
            for (short i_7 = 1; i_7 < 22; i_7 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_19 [i_3] [i_3] [i_3] [i_7 - 1] [i_3] [6ULL])), (arr_23 [i_7] [i_3] [i_7] [i_7 + 1])))) ? (((/* implicit */int) ((short) arr_20 [i_7 - 1] [i_7 - 1] [i_7]))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_7 + 1] [i_0])) ? (((/* implicit */int) min((var_6), (arr_8 [i_0])))) : (((/* implicit */int) (unsigned short)46999))))));
                arr_24 [i_7] = ((/* implicit */short) max((((/* implicit */long long int) (((-(((/* implicit */int) var_0)))) * (((arr_0 [i_0]) ? (((/* implicit */int) (short)-21777)) : (((/* implicit */int) arr_0 [i_0]))))))), (((((/* implicit */long long int) arr_19 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0])) + (((long long int) var_1))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_5 [i_7]), (arr_5 [i_7])))) ^ (((/* implicit */int) max((arr_5 [i_7]), (arr_5 [i_7]))))));
            }
        }
        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_7))))) : (((/* implicit */int) ((3865715596U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))))))))) | (((2223519065U) << (((max((arr_23 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0])))) - (6262236288009990980ULL)))))));
    }
    for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) min(((_Bool)1), (((((/* implicit */int) (unsigned short)17382)) >= (((/* implicit */int) (_Bool)1)))))))));
        arr_29 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) (short)22010)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) max((((/* implicit */signed char) var_1)), (var_3))))))) / (min((((/* implicit */long long int) (unsigned char)244)), (-7379566286089957054LL)))));
    }
    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        var_27 = ((/* implicit */unsigned char) min((((signed char) -4286792009394708881LL)), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)68)) && (((/* implicit */_Bool) -6498598928519113225LL)))) && (((/* implicit */_Bool) var_8)))))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((6123661391084101815ULL), (((/* implicit */unsigned long long int) arr_5 [i_9]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) arr_18 [i_9] [i_9] [(short)22] [i_9] [i_9])) == (((/* implicit */int) var_0)))))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */unsigned int) 894062575)) * (var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_9] [i_9] [i_9])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((var_3), (var_0)))))))));
        var_29 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) || (((/* implicit */_Bool) arr_30 [i_9])))) ? (((((/* implicit */_Bool) arr_2 [i_9] [i_9])) ? (2223519065U) : (arr_19 [i_9] [i_9] [i_9] [17LL] [i_9] [i_9]))) : (min((((/* implicit */unsigned int) arr_1 [i_9] [i_9])), (arr_19 [i_9] [(_Bool)1] [i_9] [i_9] [i_9] [(unsigned short)10])))));
    }
    var_30 = ((/* implicit */int) min((var_5), (var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        var_31 = ((/* implicit */short) ((((2692176914U) >> (((((/* implicit */int) (short)22864)) - (22860))))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22275)))));
        arr_35 [i_10] = ((short) ((var_4) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))));
    }
    var_32 += ((((/* implicit */_Bool) (short)-17106)) ? (((/* implicit */unsigned long long int) ((((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (((867821304) / (((/* implicit */int) var_4)))) : (((/* implicit */int) ((signed char) var_2)))))) : (((unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_2))))));
}
