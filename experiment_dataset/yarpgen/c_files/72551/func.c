/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72551
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
    var_14 = ((/* implicit */short) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) arr_0 [i_0]))))) ? (min((var_6), (var_6))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_15 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((-1059025323) + (2147483647))) << (((((/* implicit */int) (signed char)31)) - (31))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (+((+(1059025323)))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((max((arr_5 [i_1]), ((short)32767))), (min((arr_1 [i_1]), (var_11)))))), (((-739685608) / (((/* implicit */int) var_5))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) 1059025323)) ? (-4118792113127626512LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11244))))))));
                        arr_16 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((1059025322), (((/* implicit */int) arr_5 [i_2]))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)-24704)) : (((/* implicit */int) arr_5 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        var_17 = max((0ULL), (((/* implicit */unsigned long long int) (short)32767)));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */_Bool) 1059025322)) || ((!(((/* implicit */_Bool) (signed char)127))))))), ((short)(-32767 - 1)))))));
                        var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)23))))), (((-8705292996298963621LL) + (9223372036854775807LL)))))), ((~(min((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL)))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 2) 
                        {
                            {
                                arr_25 [i_1] [i_1] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [i_8 - 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1]), (var_11))))) + (((((/* implicit */_Bool) ((4118792113127626512LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112)))))) ? (((((/* implicit */_Bool) arr_6 [i_6])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */unsigned long long int) -2046306942)) - (var_12)))))));
                                arr_26 [5ULL] [i_5] [i_5] [5ULL] = (-(min((5957084592601469978LL), (((/* implicit */long long int) 562818438U)))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2827066141U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)144)))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_1 [i_7])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_1 [i_8 + 1])))))))))))));
                                arr_27 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) & (((/* implicit */int) (signed char)127))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (min((((5055489685367380926ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))), (max((var_12), (var_10)))))));
                }
            } 
        } 
        arr_28 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((min((var_1), (((/* implicit */long long int) arr_6 [i_1])))) < (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_1]), (arr_13 [i_1] [i_1] [i_1])))))))), (((251658240) & (((/* implicit */int) var_3))))));
    }
    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        arr_31 [i_9] = ((/* implicit */signed char) max((((/* implicit */long long int) min((((1068223148U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9)))))))), (((((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) (unsigned char)112)))) ? (((((/* implicit */_Bool) arr_5 [i_9])) ? (arr_21 [(signed char)7] [(signed char)7] [(signed char)7] [(signed char)7] [7U]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)143)), (arr_22 [i_9] [i_9] [1] [i_9]))))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_9])), (arr_19 [i_9] [(signed char)3] [i_9] [i_9])))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) arr_10 [i_9])) - (34))))))))) ? (min((-9051146867283643982LL), (((/* implicit */long long int) -1318638699)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_9] [i_9] [8U] [i_9])) ? (arr_12 [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))))));
    }
}
