/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84426
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8387584U)) ? (max((14084328539450559140ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))))) : (((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) var_1)) : (16320070881231772973ULL))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (var_1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_5 [i_1 - 1] [i_0 - 3])))))));
                var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_2 [i_0] [(unsigned char)6]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-95))))), (min((var_9), (((/* implicit */long long int) arr_2 [12LL] [(short)2]))))))) && (var_3)));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min(((signed char)32), ((signed char)25)));
    /* LoopSeq 1 */
    for (signed char i_2 = 1; i_2 < 8; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 10; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 8; i_4 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_15 [i_2] [i_3] = ((/* implicit */unsigned int) ((signed char) (unsigned short)22325));
                        arr_16 [i_2 + 1] [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_4] [i_3] [i_3]);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */int) (~(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_3 - 2] [i_2])), (-4157272553037186530LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1873980428067435854LL)) ? (var_2) : (((/* implicit */int) arr_6 [8] [i_3]))))) : (arr_11 [(_Bool)1] [i_4])))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1143512664443606483ULL)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned short)43200))));
                        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) max(((unsigned char)233), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) (unsigned short)0))));
                        var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43200))));
                    }
                    for (long long int i_7 = 1; i_7 < 8; i_7 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_28 *= ((unsigned long long int) (-2147483647 - 1));
                            arr_25 [i_8] [i_8] [i_3] [i_7 - 1] [i_3] [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) ((short) arr_22 [i_3 - 2] [i_4] [i_3] [i_3 - 2]))), (min(((+(((/* implicit */int) arr_0 [i_2] [i_4])))), (((/* implicit */int) min((arr_3 [i_3] [i_7] [(short)1]), (((/* implicit */unsigned char) (signed char)-56)))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_29 [i_3] [i_3] [i_3 - 2] [i_3] [i_3] [i_3 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) / (var_9)))) ? (((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */long long int) arr_12 [i_2] [(_Bool)0] [i_4])) : (arr_4 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 + 3])))));
                            arr_30 [i_3] [i_3] [(unsigned short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((long long int) 17303231409265945120ULL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) -7648205829665996333LL)) ? (((/* implicit */int) arr_14 [i_2] [i_3])) : (((/* implicit */int) (short)32767)))))));
                            var_29 += ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43204))) : (((((/* implicit */_Bool) arr_23 [i_7 + 1] [(_Bool)1] [i_7 + 2] [0LL])) ? (arr_21 [i_2 + 2] [i_3 - 2]) : (((/* implicit */long long int) arr_12 [i_2] [(_Bool)1] [i_4 + 3])))));
                        }
                        for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((var_2), (((/* implicit */int) arr_32 [i_3] [i_3]))))))) ? (var_13) : (((((/* implicit */_Bool) ((var_16) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22325)))))) ? (((/* implicit */long long int) -1661751387)) : (-1873980428067435873LL)))));
                            var_31 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_28 [10LL] [i_4 + 3] [10LL] [10LL] [i_7 - 1] [i_10 + 2])), ((-(((/* implicit */int) arr_27 [i_4] [(_Bool)1] [i_7] [(_Bool)1] [i_7 - 1] [i_10 + 2]))))));
                            arr_34 [i_3] [i_3] [i_3] [0LL] [i_2 + 1] [i_3] [i_10 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -237669033)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33181))) : (arr_11 [i_3] [i_10])));
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 9; i_11 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned int) -1873980428067435855LL);
                            var_33 += ((/* implicit */unsigned char) 2147483648U);
                            var_34 *= ((/* implicit */_Bool) arr_26 [9U] [i_7 + 1] [i_4] [i_2]);
                        }
                        var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [4LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_31 [i_2] [0] [4U] [i_4 - 1] [i_7 + 2]))))) ? (((((/* implicit */_Bool) arr_27 [i_3] [i_4 + 1] [i_4 + 1] [i_2 - 1] [i_3 - 1] [i_7 + 1])) ? (((/* implicit */int) (unsigned short)32356)) : (((/* implicit */int) arr_27 [i_2] [i_4 - 2] [i_4 + 2] [i_2 + 3] [i_3 + 1] [i_7 + 1])))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_7] [i_3]))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (signed char)32))))) : (((/* implicit */int) (short)-9))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 1; i_12 < 8; i_12 += 1) 
                        {
                            arr_39 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_3] = ((/* implicit */_Bool) 291422729U);
                            var_36 += ((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned int) 63)), (max((((/* implicit */unsigned int) arr_1 [i_2])), (arr_12 [(_Bool)1] [i_3 + 1] [i_2]))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) arr_26 [i_4 + 1] [i_4] [i_4] [i_3]);
                        arr_43 [i_2] [i_2] [i_2 + 1] [i_3] [i_2 - 1] [i_2 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) (!((_Bool)1))))));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) arr_20 [(short)4] [(short)4] [i_4] [i_13]))));
                        arr_44 [i_3] [i_3 + 1] [(signed char)6] = ((/* implicit */unsigned short) 15070646361735740531ULL);
                    }
                    arr_45 [i_2 + 2] [i_3] [(_Bool)1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)76)), (arr_42 [i_2 + 1] [i_3 - 2] [i_3 - 2] [i_3])))) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) ((signed char) arr_42 [i_2 + 3] [i_3 - 2] [i_3 + 1] [i_3])))));
                }
            } 
        } 
        var_39 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 2097144)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)17)))), (((/* implicit */int) (unsigned char)223))));
    }
}
