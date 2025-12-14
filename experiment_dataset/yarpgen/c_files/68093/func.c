/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68093
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 += ((/* implicit */unsigned int) (+(1044480)));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8122252904172163802ULL)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) != (arr_0 [i_0])))))));
        var_22 ^= ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) -894827824))));
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (short)7924)), ((-(((((/* implicit */int) var_2)) + (((/* implicit */int) (short)7924))))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) 2749990679U))))) ? (min((((/* implicit */unsigned int) arr_4 [i_1])), (((((/* implicit */_Bool) arr_5 [14LL] [0])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) arr_6 [i_1] [i_1])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2LL)), (var_0)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (2389372609841215598LL)))) : (((/* implicit */int) (short)0)))))));
        arr_8 [13ULL] [i_1] = ((/* implicit */short) max((((arr_6 [i_1] [14LL]) | (arr_6 [i_1] [i_1]))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+(((var_19) - (((/* implicit */int) (short)-11313)))))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) (~(arr_5 [i_3 - 1] [i_2 + 2])))) : (arr_10 [i_3 - 1] [i_2 - 1])));
                    arr_14 [i_1] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-61)), (min((((/* implicit */unsigned int) 1666983284)), (((var_16) + (arr_5 [i_1] [(short)2])))))));
                    arr_15 [i_3] [(short)6] = ((/* implicit */unsigned int) max((max((var_8), (((/* implicit */int) (signed char)-81)))), (((((int) arr_4 [i_3 + 1])) / (((/* implicit */int) (signed char)61))))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 3; i_4 < 19; i_4 += 4) 
                    {
                        arr_19 [i_3] [i_2 + 2] [i_3 - 1] [i_3] = ((/* implicit */short) (+(-7800083315108743033LL)));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4 - 3]))) != (var_16)))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 4294967268U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)-15))))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */int) -7LL);
                        arr_23 [i_1] [19] [i_1] [i_3] = ((/* implicit */_Bool) ((short) arr_11 [i_3 - 1] [i_2 + 1] [i_2 + 3]));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) (~(min((7800083315108743025LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) (short)-7634)))))))));
        arr_24 [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [12U] [i_1] [(signed char)16] [i_1]))) != (max((((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [6])), (-7800083315108743033LL)))))), (arr_21 [i_1] [i_1] [17ULL] [i_1])));
    }
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_8)) + (var_13)))) ? ((~(arr_27 [i_6]))) : (((/* implicit */unsigned long long int) 2749990684U)))))))));
        arr_28 [(signed char)13] [i_6] = ((/* implicit */short) var_13);
    }
    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        var_29 = ((/* implicit */unsigned int) (!(var_7)));
        arr_32 [i_7] = ((/* implicit */int) ((336326348) < (((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_18)), (arr_30 [i_7])))) > (((unsigned long long int) (short)29653)))))));
        var_30 = ((/* implicit */unsigned int) arr_26 [i_7] [i_7]);
        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_10))));
        var_32 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) arr_29 [(signed char)0])), (((arr_26 [i_7] [i_7]) ? (((/* implicit */unsigned long long int) 8857681307636788728LL)) : (var_1))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-61)), (min((arr_29 [(_Bool)1]), (((/* implicit */long long int) -1217731548)))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_33 = ((/* implicit */_Bool) ((signed char) (((((_Bool)0) ? (((/* implicit */unsigned long long int) var_4)) : (18446744073709551615ULL))) != (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_27 [i_8]))))));
        var_34 = ((/* implicit */int) max(((+(((((arr_33 [i_8]) + (9223372036854775807LL))) << (((5639960675376568141LL) - (5639960675376568141LL))))))), (((/* implicit */long long int) arr_26 [i_8] [i_8]))));
    }
    var_35 = ((/* implicit */int) min((var_35), ((((((+(8857681307636788728LL))) == (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) ((8320285508794793574LL) != (((/* implicit */long long int) var_13)))))))));
}
