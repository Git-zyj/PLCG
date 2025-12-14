/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59365
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = var_2;
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_11 [17] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_12);
                        var_15 = ((/* implicit */long long int) var_8);
                        var_16 = (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_10))));
                    }
                    for (long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL)))) ? (var_1) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_11)) : (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)123)))))));
                        arr_15 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) arr_6 [i_2]);
                        arr_16 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)46))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) max((var_8), (var_6)))))))));
                        arr_17 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)11)) ? (var_5) : (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
                        arr_18 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) 4611683819404132352LL)) ? (var_2) : (((/* implicit */int) var_8))))) % (var_1)))));
                    }
                    var_18 = ((/* implicit */unsigned char) var_3);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_5 = 3; i_5 < 12; i_5 += 2) 
    {
        arr_21 [i_5] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)255)) : ((-(((/* implicit */int) (unsigned char)0)))));
        arr_22 [i_5] = ((/* implicit */long long int) (signed char)(-127 - 1));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_19 ^= ((/* implicit */int) (unsigned char)133);
                        var_20 = (!(((/* implicit */_Bool) var_5)));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_5] [i_5 + 2] [i_7])) >> (((var_0) + (584547919439755968LL))))))));
                            var_22 = ((/* implicit */_Bool) 469762048);
                        }
                        arr_34 [(signed char)3] [i_6] [i_6] [i_7] [i_6] [i_8] = ((/* implicit */signed char) (+(1964668335)));
                    }
                    for (signed char i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
                        {
                            arr_39 [i_6] [i_6] [i_6] [i_10 + 1] [i_11] = ((/* implicit */_Bool) (+(var_1)));
                            arr_40 [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-88))));
                        }
                        for (int i_12 = 0; i_12 < 15; i_12 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) (unsigned char)241);
                            var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7] [i_10 - 1] [i_12])) ? (((/* implicit */int) arr_9 [i_7] [i_10 + 1] [i_12])) : (((/* implicit */int) (unsigned char)0))));
                        }
                        /* LoopSeq 2 */
                        for (int i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_6])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (469762048)))) : (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (288230374004228096LL)))));
                            var_26 = (-(((arr_2 [i_6] [i_6]) % (1900074074))));
                            var_27 = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_35 [9] [i_6] [i_6] [i_6] [i_10] [i_13])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) arr_25 [i_5 + 2] [i_10 - 1])));
                            arr_47 [i_5] [i_6] [4] [8] [8] = ((/* implicit */signed char) 2023794486);
                            var_28 = ((/* implicit */long long int) (((~(var_5))) <= (((((/* implicit */_Bool) -7694211344353210178LL)) ? (var_12) : (arr_6 [i_6])))));
                        }
                        for (unsigned char i_14 = 3; i_14 < 13; i_14 += 2) 
                        {
                            var_29 = ((/* implicit */int) ((1159965331) <= (((/* implicit */int) (signed char)-1))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (var_3) : (((/* implicit */unsigned long long int) var_11))));
                            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1900074069) : (((/* implicit */int) var_7)))))));
                        }
                        arr_50 [i_10 + 1] [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) arr_1 [18LL] [i_7]);
                    }
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 15; i_16 += 3) 
                        {
                            {
                                arr_58 [i_5] [i_5] [(signed char)5] [i_5] [i_5] [i_5 - 1] [i_6] = ((/* implicit */signed char) (-(((6825276514311823LL) / (var_12)))));
                                var_32 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))))) ? (2147483647) : (((/* implicit */int) var_13)));
                                var_33 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))));
                                arr_59 [5] [5] [(signed char)13] [i_6] = ((/* implicit */int) (unsigned char)135);
                                arr_60 [1ULL] [i_6] [i_6] = ((signed char) ((-622795160) & (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
