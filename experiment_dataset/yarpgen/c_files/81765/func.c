/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81765
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1]))) ? (min((((/* implicit */long long int) max(((unsigned char)4), ((unsigned char)9)))), (var_4))) : (((/* implicit */long long int) min((((((/* implicit */int) var_13)) ^ (872813469))), (((/* implicit */int) arr_2 [i_0])))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((unsigned short) max((var_3), (((/* implicit */int) max((var_11), (var_5))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (var_14)));
    /* LoopSeq 2 */
    for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) var_17);
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 - 1]))))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_2 - 1])), (var_6)))) - (194)))));
    }
    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 19; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_17 [i_3 + 2] [i_4 - 2])) ? (arr_13 [i_4 - 1]) : (((/* implicit */int) (unsigned char)252))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) max(((unsigned char)4), ((unsigned char)6)))), ((~(((/* implicit */int) var_5))))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_20 [7U] [i_3 + 1] [6LL] [(signed char)10] [(signed char)10] [i_3 - 2]), ((~(var_12)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)5493)), (0ULL)))) ? (((((/* implicit */_Bool) arr_7 [i_5])) ? (var_17) : (var_15))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_3)) : (var_15))))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */short) arr_8 [i_4 - 1] [i_4 - 3])), (max((var_11), (((/* implicit */short) (unsigned char)188))))))))));
                            arr_26 [i_4] [(_Bool)1] [3ULL] [i_6] [3ULL] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) >= (21ULL)))), ((+(((/* implicit */int) ((unsigned short) arr_13 [i_7])))))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)19278)) - (((/* implicit */int) (unsigned char)150))));
                            arr_27 [i_3] [i_4] [i_5] [i_5] [i_7] [(short)11] = ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((arr_21 [i_4] [i_4] [i_4] [(signed char)0] [i_4] [(signed char)2]) + (((/* implicit */unsigned int) arr_16 [i_4 - 2] [i_4] [i_4 - 3])))) : (((/* implicit */unsigned int) ((int) var_12))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 18; i_8 += 2) 
                        {
                            var_26 ^= var_17;
                            arr_30 [i_3 + 1] [i_4] [9U] [i_4] [i_3 + 1] [i_8] = ((/* implicit */signed char) ((unsigned short) ((unsigned short) (-(((/* implicit */int) (unsigned short)60042))))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) max((((unsigned short) (unsigned char)148)), (((/* implicit */unsigned short) ((signed char) var_17))))))));
                            arr_31 [i_3 - 2] [(unsigned short)10] [i_4] [i_3] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (var_2))), (((/* implicit */unsigned long long int) ((signed char) var_2)))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_4))));
                        }
                        for (long long int i_9 = 4; i_9 < 19; i_9 += 1) 
                        {
                            var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)4)), ((unsigned short)60042)))) ? ((~(((/* implicit */int) (signed char)69)))) : (((/* implicit */int) arr_12 [i_3]))))) <= (((unsigned int) min((var_15), (((/* implicit */unsigned long long int) var_5)))))));
                            var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6] [i_9])) ? (((/* implicit */int) arr_25 [i_3 + 1] [i_4] [i_5] [11ULL] [i_9])) : (((/* implicit */int) var_0))))) ? (min((var_10), (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65024)))))) && (((/* implicit */_Bool) arr_25 [i_3 - 1] [i_3 - 1] [1U] [(short)7] [i_9]))));
                        }
                        for (short i_10 = 1; i_10 < 18; i_10 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (signed char)3)), (0U)));
                            var_32 = ((/* implicit */signed char) min((1819310546U), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) | (2035449696U)))));
                            var_33 = ((/* implicit */signed char) var_14);
                        }
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) var_6))));
                    }
                    for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -493805708)) ? (1072822097U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))));
                        arr_41 [i_4] [i_4] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) min((var_3), (((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) arr_36 [11LL] [11LL] [i_5] [i_4] [(short)7])) : ((+((+(var_1)))))));
                    }
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-19535)) ? (((/* implicit */int) (short)31434)) : (((/* implicit */int) (unsigned short)6030))));
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (+(-969884838))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_12 = 2; i_12 < 18; i_12 += 1) 
        {
            var_38 = ((/* implicit */unsigned short) var_2);
            var_39 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_3 - 2])) ? (arr_24 [i_3] [6] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((unsigned long long int) var_11))));
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
        {
            arr_48 [i_3] = ((/* implicit */long long int) var_11);
            arr_49 [i_3] = ((/* implicit */unsigned long long int) ((long long int) ((int) var_10)));
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                arr_54 [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_43 [(signed char)9] [i_3 + 1] [i_3 - 1]))));
                arr_55 [i_3 + 2] [i_3 + 2] [(signed char)17] = ((/* implicit */unsigned short) (+(var_3)));
            }
            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((unsigned int) (short)31434)) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        }
        var_41 = ((/* implicit */int) ((unsigned short) var_0));
        var_42 = ((/* implicit */unsigned int) var_1);
    }
    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((signed char) var_11)))));
}
