/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61826
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) min((arr_3 [i_2] [(signed char)21] [i_0]), (((/* implicit */short) arr_6 [i_0 - 1])))))) ? (((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))))) ^ (((var_17) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(unsigned short)10] [i_2] [(unsigned short)7]))))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0 + 2] [i_2] [i_1]), ((signed char)-2)))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (~(arr_4 [i_0] [i_3 - 2] [i_0])));
                        arr_13 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 3980853135852442747ULL)) ? (480852637U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((/* implicit */int) arr_2 [i_0 - 1] [(unsigned char)7] [i_0 - 1])) : (min((((/* implicit */int) ((arr_5 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) (unsigned char)202)) ? (arr_9 [i_0] [i_1] [i_2] [9ULL] [i_2] [i_0]) : (var_9)))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_10 [i_0] [i_1] [i_3] [i_3])))) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))))) << (((var_1) - (6233007202773160188LL))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        arr_18 [i_0 + 2] [i_0 + 2] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) 1402093256U))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) <= (8122043590340866787ULL))))));
                        arr_19 [i_1] = ((/* implicit */unsigned char) max((arr_3 [i_0 + 2] [i_0 + 2] [i_0 - 1]), (((short) arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) 
                        {
                            var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((3814114658U), (480852637U)))) ? ((((!(((/* implicit */_Bool) arr_10 [(unsigned short)22] [i_2] [i_4] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (-7479392879954767608LL))))) : (((/* implicit */long long int) ((((arr_15 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0]) + (2147483647))) << (((((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) - (((/* implicit */int) (unsigned short)49250)))) - (1714982970))))))));
                            var_21 -= ((/* implicit */signed char) ((unsigned int) ((8388607U) >> (((8388607U) - (8388592U))))));
                        }
                        var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2] [i_2] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [(unsigned char)20] [i_1])) : (((/* implicit */int) var_7))))) : (var_1)))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_1] [i_1] [1LL] [i_7] = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_7]))) : (9223372036854775807LL))) ^ (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (0U))))))));
                            arr_28 [i_7] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9146))) + (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) (_Bool)1)))))) : (3814114663U)))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) 589404514U);
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_1] [i_1] [i_0] [i_6] [i_8])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_31 [i_0] [i_1] [i_2] [i_6] [(unsigned char)0])))));
                            var_25 = ((/* implicit */short) ((((unsigned int) var_7)) == (((/* implicit */unsigned int) arr_16 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2]))));
                        }
                        var_26 = ((/* implicit */unsigned short) var_5);
                        var_27 *= ((/* implicit */unsigned long long int) var_14);
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        for (signed char i_10 = 1; i_10 < 23; i_10 += 1) 
                        {
                            {
                                arr_36 [i_10 + 1] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_24 [i_10] [i_10] [i_9] [i_2] [i_1]);
                                var_28 = ((/* implicit */unsigned char) (-(max((arr_10 [i_0 - 1] [i_2] [i_2] [i_9]), (((/* implicit */unsigned int) arr_33 [i_0] [i_1] [i_2] [i_2]))))));
                                var_29 = ((/* implicit */unsigned short) (signed char)116);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 1; i_11 < 23; i_11 += 2) 
                    {
                        arr_41 [i_0] [i_0] [i_2] [i_0] [i_1] = ((/* implicit */short) (!(((arr_39 [i_0 + 2] [i_11 + 1] [i_2] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_1] [i_11] [i_11] [i_11] [i_11 - 1])))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) arr_21 [(signed char)16] [i_1] [i_2] [i_11] [i_0 - 1] [i_11] [i_11])) <= (((/* implicit */int) (signed char)127)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-127))))) : (min((30908552U), (((/* implicit */unsigned int) (short)-25153))))))) == ((((~(var_17))) / (((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_2] [i_1] [i_1])))))))));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_6 [i_11 + 1]) ? (((((/* implicit */_Bool) arr_30 [i_11 + 1] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_11] [i_2] [i_1] [i_0]))) : (var_4))) : (((/* implicit */unsigned int) ((906548477) ^ (((/* implicit */int) (signed char)78)))))))))))));
                        arr_42 [i_1] [i_1] [i_2] [i_11] [(unsigned short)18] = ((/* implicit */unsigned short) ((min((min((((/* implicit */long long int) var_10)), (var_1))), (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_0])))) ^ (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_11] [i_11 + 1] [i_0 + 1])))))));
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (721214059) : (((/* implicit */int) (signed char)-116)))))));
                    }
                    var_33 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_0 - 1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        arr_46 [10U] = ((/* implicit */unsigned int) min((arr_43 [i_12]), (((/* implicit */long long int) ((((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_14)))) ^ (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_45 [i_12]))))))))));
        arr_47 [i_12] [(unsigned short)4] = ((/* implicit */int) var_10);
        /* LoopSeq 3 */
        for (short i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
        {
            arr_51 [i_13] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_12] [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_1))) | (((/* implicit */long long int) arr_4 [i_13] [i_13] [i_12]))));
            arr_52 [i_12] [i_13] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_12]))) ? (min((arr_0 [i_12]), (arr_0 [(short)12]))) : (((arr_0 [i_12]) % (arr_0 [i_12])))));
            arr_53 [13LL] [i_13] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (signed char)-44)) ? (13835058055282163712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44))))));
        }
        for (short i_14 = 0; i_14 < 17; i_14 += 2) /* same iter space */
        {
            arr_57 [(short)16] = ((/* implicit */long long int) var_6);
            var_34 = ((/* implicit */unsigned char) var_6);
        }
        /* vectorizable */
        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) 
        {
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_12] [i_15]))) % (3111640669U))))));
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_12] [i_15] [i_12] [i_12])) == (((/* implicit */int) var_12))));
        }
        var_37 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_55 [i_12] [2ULL] [i_12])) ? (var_17) : (arr_55 [i_12] [i_12] [i_12])))));
    }
}
