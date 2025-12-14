/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57502
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (unsigned char)171);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 6; i_4 += 2) 
                    {
                        {
                            arr_14 [i_2] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_4 - 1]);
                            var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_4 + 3] [i_4 + 4] [i_2 - 1])) >> (((/* implicit */int) arr_4 [i_4 + 4] [i_4 + 4] [i_2 - 1]))));
                        }
                    } 
                } 
                arr_15 [i_2] [(_Bool)0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (short)30509)) ? (var_8) : (((/* implicit */int) arr_13 [i_2] [i_1])))));
            }
            for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                arr_19 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) var_8)) % (1023ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5] [i_1]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9)))));
                var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)9)) ? (arr_18 [i_0] [8U] [i_5]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */int) arr_0 [(short)2] [i_0])) : (((/* implicit */int) arr_1 [(signed char)4] [i_1])))))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        {
                            var_14 = (signed char)-67;
                            var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((unsigned char) var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_5] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((!(((/* implicit */_Bool) arr_5 [i_0])))))))));
                            var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0]))) + (18446744073709551596ULL))))) : (((/* implicit */int) var_6))));
                            var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_1] [i_7]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 2; i_8 < 8; i_8 += 4) 
                {
                    for (signed char i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) var_3))));
                            arr_28 [i_9] = ((/* implicit */unsigned long long int) ((int) arr_23 [i_0]));
                            arr_29 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9))));
                            var_19 = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */unsigned long long int) arr_11 [(signed char)9] [i_1] [i_1] [i_1] [(_Bool)0])) - (10318982327014899009ULL)))) > (((/* implicit */unsigned long long int) ((arr_4 [i_8 + 2] [i_8 + 2] [i_9 + 1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) : (18446744073709551615ULL)));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    for (signed char i_12 = 1; i_12 < 7; i_12 += 4) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-13)) < (((/* implicit */int) arr_5 [i_1]))));
                            var_22 += ((/* implicit */unsigned char) var_2);
                            var_23 = ((/* implicit */signed char) ((unsigned char) arr_26 [i_12] [i_12] [i_12] [i_12] [i_12]));
                        }
                    } 
                } 
                arr_37 [i_0] [i_1] [i_10] = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((arr_16 [i_0] [i_0]) && (((/* implicit */_Bool) (short)-3))))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_10])))) != (((/* implicit */int) var_11))));
            }
            for (short i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    var_24 = ((/* implicit */unsigned char) ((short) (unsigned char)191));
                    arr_44 [i_0] [i_1] [0U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_1]))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        var_25 = arr_11 [i_0] [i_1] [i_13] [i_14] [(short)1];
                        arr_47 [i_0] [i_0] = (+(((/* implicit */int) ((_Bool) ((signed char) (signed char)-13)))));
                    }
                    arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_9 [(signed char)6] [(unsigned char)7] [i_13] [i_1] [i_0] [i_0])))));
                    var_26 = ((arr_12 [(signed char)0] [(signed char)0] [i_13] [i_14] [i_13] [i_1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)13697)) + (((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) % (((unsigned long long int) var_9)))));
                }
                var_27 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0]))) & (((((/* implicit */_Bool) (short)10632)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (var_0))))) - (52U)))));
            }
            arr_49 [(unsigned char)7] [(unsigned char)7] = ((/* implicit */short) ((int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [2ULL]));
        }
    }
    for (int i_16 = 3; i_16 < 10; i_16 += 3) 
    {
        var_28 *= ((/* implicit */_Bool) var_0);
        arr_52 [i_16] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) arr_51 [i_16 - 1] [i_16]))))) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) arr_51 [i_16] [i_16 + 1]))))));
    }
    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 1) 
    {
        arr_56 [i_17] = ((/* implicit */unsigned char) ((short) var_8));
        arr_57 [i_17] [i_17] = ((/* implicit */unsigned int) var_5);
        arr_58 [6U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_50 [i_17] [i_17]))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-15)) >= (((/* implicit */int) (signed char)-126))))) : ((~(((/* implicit */int) arr_51 [i_17] [i_17]))))));
    }
    for (unsigned int i_18 = 2; i_18 < 20; i_18 += 3) 
    {
        arr_62 [i_18] [i_18] = (i_18 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_61 [i_18])) + (((((((/* implicit */int) arr_60 [i_18])) + (2147483647))) >> (((((/* implicit */int) arr_61 [i_18])) - (30))))))) > (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_59 [i_18 - 1])))))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_61 [i_18])) + (((((((/* implicit */int) arr_60 [i_18])) + (2147483647))) >> (((((((/* implicit */int) arr_61 [i_18])) - (30))) - (13))))))) > (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_59 [i_18 - 1]))))))))));
        var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) arr_59 [i_18]))))));
    }
    var_30 = ((/* implicit */_Bool) var_1);
}
