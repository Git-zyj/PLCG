/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57295
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) arr_2 [i_1 - 1] [i_1 + 1]);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) >> (((((/* implicit */int) var_13)) - (108))))) : (((/* implicit */int) (unsigned short)30668)))))));
                        var_20 = ((/* implicit */signed char) (!(((((var_16) % (((/* implicit */long long int) ((/* implicit */int) var_4))))) < (((/* implicit */long long int) min((2025412301), (((/* implicit */int) arr_5 [i_3 + 1] [i_0 + 3] [i_1 - 3] [i_0 + 3])))))))));
                    }
                    for (long long int i_4 = 1; i_4 < 23; i_4 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22146))))) >> (((((/* implicit */int) ((short) (unsigned short)22146))) - (22129))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((var_7) && (((/* implicit */_Bool) 9223372036854775807LL)))))))) < (((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)18266)) : (389560484)))) + (max((((/* implicit */long long int) (short)4064)), (var_6)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 24; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_7))));
                                var_24 = 654396604;
                                arr_17 [(unsigned short)23] [i_6] [(short)8] [(unsigned short)23] [i_1 - 2] [i_1 - 2] [i_0] = ((/* implicit */int) var_9);
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((((/* implicit */int) arr_14 [i_1] [i_1] [i_5 - 2])) + (((/* implicit */int) var_13)))) <= (((/* implicit */int) min((arr_7 [i_6] [i_1 - 1] [i_2] [i_5 + 1]), (((/* implicit */unsigned short) var_8)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [(signed char)11] [i_1] [i_1 - 2] [i_1] [(signed char)5])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_12))));
    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) ? (((unsigned long long int) ((((/* implicit */int) (unsigned short)4064)) >= (((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (var_15))))))))));
    /* LoopNest 3 */
    for (short i_7 = 1; i_7 < 18; i_7 += 4) 
    {
        for (long long int i_8 = 2; i_8 < 19; i_8 += 3) 
        {
            for (signed char i_9 = 2; i_9 < 19; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 2; i_10 < 17; i_10 += 3) 
                    {
                        arr_30 [i_8] [i_9] [i_9] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) max((min((var_11), (((/* implicit */long long int) var_7)))), (((((/* implicit */_Bool) (unsigned short)43389)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_19 [(unsigned char)14] [i_8]))))))));
                        arr_31 [i_7 - 1] [i_7 - 1] [i_8] [i_7 - 1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) arr_11 [i_7] [i_8 - 2] [i_9 + 1] [i_8 - 2] [i_7] [i_10 + 2]))));
                        var_28 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_26 [i_7] [i_8] [3] [i_7] [i_8 - 2] [i_10 + 3])) && (((/* implicit */_Bool) var_3))))));
                        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_19 [i_7 + 1] [i_9 - 1]) & (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
                    }
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_17)), (var_16))), (((/* implicit */long long int) (unsigned short)4064))))) ? (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_0))))), (((short) var_13))))) : (min((((((/* implicit */_Bool) var_14)) ? (-389560484) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((short) var_13))))))))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            {
                                var_31 ^= ((((int) (!(arr_18 [i_12])))) >> (((((/* implicit */int) max(((unsigned short)4064), (arr_26 [i_7 + 2] [i_11] [i_7 + 2] [i_7 + 2] [i_9 - 2] [i_11])))) - (61687))));
                                arr_36 [i_8] [i_7 + 2] [16LL] [i_7 + 2] [i_7 + 2] [i_8] = min((min((arr_16 [i_9 - 1] [i_8 - 1] [i_8 + 1] [i_8] [i_7 + 2] [(unsigned short)14]), ((~(((/* implicit */int) var_1)))))), (((/* implicit */int) (unsigned short)43389)));
                                var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_10 [i_11])) & (arr_29 [i_7] [9LL] [i_7] [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5594))))) : (((((/* implicit */int) arr_14 [i_7] [i_8 - 1] [i_12])) & (((/* implicit */int) var_12))))))) ? (((/* implicit */int) min((arr_12 [i_7 + 1] [i_8 - 2] [i_9 - 2] [i_7 + 2] [i_8 - 1] [i_8 + 1]), (arr_12 [i_9 - 2] [i_8 - 2] [i_7] [i_7 + 1] [i_8 - 1] [i_9])))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_14)))))))));
                                var_33 += ((/* implicit */unsigned long long int) min((min((((/* implicit */short) (signed char)-99)), (arr_1 [i_9 - 1] [i_9 - 1]))), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_9 - 2] [i_9 - 2])) >= (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 3) 
                    {
                        for (unsigned long long int i_14 = 2; i_14 < 16; i_14 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_16) + (9223372036854775807LL))) >> (((((/* implicit */int) var_14)) + (35)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((var_6) <= (arr_35 [i_7] [i_7] [i_9] [i_13 - 1] [i_14 + 2] [i_14 + 2] [i_14 + 2]))))))) ? (((((/* implicit */int) arr_28 [i_8])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)127)), (arr_12 [i_7] [i_7] [i_9 - 1] [i_9 - 2] [i_13 + 2] [i_14 + 2])))))))));
                                var_35 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((_Bool) arr_23 [i_13] [i_13 + 2]))))), (((((long long int) var_7)) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)43389)))))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (min((((/* implicit */long long int) 2858749661U)), ((-9223372036854775807LL - 1LL))))))) ? (arr_8 [i_8] [i_8]) : (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-929))))), (((((/* implicit */_Bool) var_8)) ? (389560484) : (((/* implicit */int) var_15)))))))));
                }
            } 
        } 
    } 
}
