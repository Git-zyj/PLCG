/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7220
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) arr_3 [i_0]);
                var_11 ^= ((/* implicit */_Bool) min((978018810), (((/* implicit */int) (unsigned char)18))));
            }
        } 
    } 
    var_12 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) min(((unsigned short)65535), ((unsigned short)65535))))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_8 [(unsigned short)1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))))) | ((~(((/* implicit */int) arr_6 [i_2] [i_2]))))));
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 1; i_4 < 23; i_4 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_5 = 2; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    arr_16 [(unsigned char)3] [i_3] [i_4 + 1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((-978018811) - (((/* implicit */int) arr_6 [i_4 + 1] [i_5 + 3]))))) ? ((~(((/* implicit */int) arr_6 [i_4 + 1] [i_5 - 1])))) : ((~(((/* implicit */int) arr_12 [i_4 - 1] [i_5 + 2]))))));
                    var_13 *= ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_11 [i_5] [i_5 + 3] [i_5 + 1])) / (((/* implicit */int) ((unsigned char) 10322099801849651162ULL)))))));
                }
                /* vectorizable */
                for (short i_6 = 2; i_6 < 21; i_6 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned int) var_10));
                    arr_20 [i_3] [i_3] [i_6 + 2] [i_3] = ((/* implicit */_Bool) arr_14 [i_6 + 2] [i_3] [i_4 - 1] [i_3] [i_2]);
                    var_15 += ((/* implicit */unsigned short) arr_11 [i_2] [(unsigned short)5] [i_2]);
                    var_16 = ((((/* implicit */_Bool) (signed char)-28)) ? (978018810) : (((/* implicit */int) (signed char)27)));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 2; i_7 < 23; i_7 += 4) 
                    {
                        arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) | (var_8)));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 978018810))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))));
                        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)25949))));
                        arr_25 [i_7 - 2] [i_7 - 2] [i_7] [i_7] [i_7 - 2] [i_7 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_6] [i_6 - 1] [i_6] [i_7] [i_7 + 1])) < (arr_17 [i_6 + 3] [i_6 + 2] [i_7 + 1] [i_6 + 2])));
                    }
                }
                for (short i_8 = 2; i_8 < 21; i_8 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned char) arr_29 [i_8 - 2] [i_4 - 1] [8U] [i_3]))), (max((((/* implicit */unsigned long long int) arr_23 [i_2] [i_3] [i_3] [i_8 + 1] [i_8 + 1])), ((~(var_7)))))));
                    arr_30 [i_4 - 1] [(unsigned short)23] [i_4 - 1] [i_8 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */int) min(((unsigned short)45741), (((/* implicit */unsigned short) (signed char)28))))) * (((/* implicit */int) (unsigned char)127)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_17 [i_3] [i_3] [i_3] [i_3])))))))));
                }
                arr_31 [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-10390)) ? (13U) : (((/* implicit */unsigned int) 978018810)))))) >= (((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) * ((-(((/* implicit */int) arr_11 [(_Bool)0] [i_3] [i_4]))))))));
            }
            /* vectorizable */
            for (unsigned char i_9 = 1; i_9 < 23; i_9 += 3) /* same iter space */
            {
                arr_34 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)14944)) ? (-1486529682) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))));
                var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_9 + 1] [i_9 + 1] [i_9 - 1]))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-10381)) ? (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) (unsigned short)22446))))) : (((/* implicit */int) (unsigned short)45741)))))));
                arr_35 [i_9] [i_9 + 1] [23] [i_9] = ((/* implicit */short) (~(33554424)));
            }
            /* LoopNest 2 */
            for (unsigned char i_10 = 4; i_10 < 23; i_10 += 3) 
            {
                for (unsigned char i_11 = 3; i_11 < 23; i_11 += 1) 
                {
                    {
                        arr_41 [i_2] [i_3] [i_10 - 2] [i_3] [i_10] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (signed char)-37)))) * (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) - (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (arr_17 [i_2] [i_3] [22U] [i_2])))));
                        arr_42 [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [18] [13] [i_11 - 3])) ? (((/* implicit */int) ((unsigned short) (unsigned short)65535))) : (((/* implicit */int) ((unsigned short) arr_40 [i_2] [i_3] [22])))))) ? (((/* implicit */int) max((arr_6 [i_11 - 2] [i_10 - 1]), (arr_11 [i_10 - 3] [i_10 + 1] [i_11 - 1])))) : (max((arr_28 [i_11] [i_11 - 2] [i_11 - 3] [i_11 - 3] [i_11] [i_11]), (arr_28 [i_11] [i_11 - 1] [(_Bool)0] [i_11 - 2] [i_11 - 2] [i_11 + 1]))));
                        arr_43 [i_10] [i_10 - 1] [i_3] [i_10] = ((/* implicit */unsigned short) min(((short)-7208), (((/* implicit */short) (signed char)2))));
                        arr_44 [i_2] [i_3] [i_3] [i_3] [i_10] = ((/* implicit */unsigned char) var_7);
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((signed char) (~((+(740334530U)))))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) min((-1104018738), (((/* implicit */int) (unsigned short)24053))));
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 22; i_12 += 2) 
            {
                for (short i_13 = 2; i_13 < 22; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 3; i_14 < 20; i_14 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) ((((-1231249036) + (2147483647))) >> (((1231249036) - (1231249011)))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167))) | (2477187321U))))));
                            arr_55 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = var_6;
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_4))) - (min((((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))), (((var_2) ? (((/* implicit */int) arr_36 [(short)16])) : (((/* implicit */int) var_6))))))));
        }
        for (short i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_16 = 3; i_16 < 22; i_16 += 1) 
            {
                var_26 = ((/* implicit */short) ((unsigned int) (unsigned short)1));
                var_27 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)31)) > (((/* implicit */int) (short)2306))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_53 [i_2] [i_2] [i_2] [(unsigned char)13] [i_2] [i_2] [i_2])))))))));
                /* LoopSeq 2 */
                for (unsigned short i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    arr_63 [i_2] [i_16] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (signed char)108)) >> (((((/* implicit */int) (unsigned char)141)) - (132)))))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)-4), (((/* implicit */signed char) (_Bool)0))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)39095)), (532676608)))) ? (((/* implicit */int) min(((unsigned char)141), (((/* implicit */unsigned char) var_2))))) : (((/* implicit */int) arr_48 [i_16] [i_16 + 1] [(_Bool)1] [(unsigned short)4])))) : (((/* implicit */int) arr_59 [i_16] [i_16]))));
                    var_29 = ((/* implicit */unsigned char) max((((/* implicit */int) var_3)), ((-(((/* implicit */int) (unsigned short)15041))))));
                }
                /* vectorizable */
                for (unsigned int i_18 = 0; i_18 < 24; i_18 += 4) 
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7))));
                    var_31 += ((/* implicit */unsigned int) arr_64 [i_16]);
                    var_32 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_7 [i_18])))))));
                    arr_66 [i_2] [i_16] [(unsigned char)11] [(unsigned char)9] [i_18] = ((/* implicit */_Bool) ((unsigned char) (unsigned short)26441));
                }
            }
            for (unsigned char i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                arr_70 [i_2] [i_2] [i_15] [i_19] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_19] [(unsigned char)17] [i_15] [i_15] [i_2])) + (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_29 [i_2] [i_19] [i_19] [i_15])) : (((/* implicit */int) ((short) (unsigned short)15041)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-25439))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_19] [i_19] [i_19] [i_15])))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8)))))));
                arr_71 [i_2] [i_19] = ((/* implicit */_Bool) arr_14 [i_15] [i_15] [i_15] [i_15] [i_15]);
                /* LoopNest 2 */
                for (unsigned char i_20 = 1; i_20 < 22; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) var_8))));
                            arr_79 [i_2] [i_21] [i_21] [i_20] [i_20] [i_2] [i_2] = ((/* implicit */_Bool) min(((-(((((/* implicit */int) arr_29 [i_15] [i_15] [i_15] [(unsigned char)1])) - (((/* implicit */int) arr_54 [i_21] [i_20 + 2] [i_19] [i_15])))))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-79)), ((unsigned char)167))))));
                            arr_80 [i_2] [(short)12] [i_19] [i_19] [(unsigned char)22] [i_21] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (unsigned char)160)))), (((((/* implicit */int) (signed char)81)) + (((/* implicit */int) (signed char)-77))))));
                            var_34 = ((/* implicit */signed char) var_3);
                            arr_81 [i_20 + 1] [i_20 + 2] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)252))))) ? (arr_17 [i_20 + 1] [i_20] [i_20 - 1] [i_20 + 2]) : (((/* implicit */int) ((((/* implicit */int) (signed char)-92)) <= (((/* implicit */int) var_0)))))))) ? (max((((unsigned int) var_8)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (arr_28 [i_21] [(signed char)12] [i_19] [i_15] [i_2] [i_2]) : (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-7)), ((unsigned char)202)))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_22 = 0; i_22 < 24; i_22 += 3) 
            {
                arr_84 [i_15] = ((/* implicit */signed char) ((((/* implicit */int) (short)-5520)) & (((/* implicit */int) (unsigned char)123))));
                /* LoopSeq 4 */
                for (int i_23 = 2; i_23 < 22; i_23 += 2) 
                {
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) arr_74 [i_22] [i_22] [i_23 - 2] [i_23 - 1] [i_23 - 2]))));
                    var_36 = ((unsigned char) (~(((/* implicit */int) (signed char)-77))));
                }
                for (short i_24 = 1; i_24 < 20; i_24 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */int) ((signed char) arr_82 [i_2] [i_22] [i_24]));
                    var_38 = ((/* implicit */unsigned char) ((((-532676604) + (2147483647))) >> (((1259118413) - (1259118413)))));
                    arr_92 [i_24] = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_9))) > (((((/* implicit */_Bool) arr_82 [i_2] [i_22] [(unsigned char)21])) ? (-1947803278) : (((/* implicit */int) var_5))))));
                    arr_93 [i_2] [i_24] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_49 [i_2] [i_2] [i_2] [i_2])) <= (((/* implicit */int) arr_22 [i_24] [i_15] [i_22] [i_24] [i_22])))));
                }
                for (short i_25 = 1; i_25 < 20; i_25 += 1) /* same iter space */
                {
                    var_39 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_77 [i_2] [i_15] [i_15] [i_25 + 2] [i_25 + 4] [i_15] [i_22]))));
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_25] [i_25 - 1] [i_25 + 2] [i_25 + 3] [i_25 + 1] [i_25 + 3])) ? (((/* implicit */int) arr_89 [i_15] [i_15])) : (((/* implicit */int) arr_32 [i_25 + 4] [i_25 + 3] [i_25]))));
                    var_41 = ((/* implicit */unsigned int) arr_45 [(unsigned short)13]);
                }
                for (short i_26 = 1; i_26 < 20; i_26 += 1) /* same iter space */
                {
                    arr_99 [i_2] [i_2] [i_26] [i_26 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)54855))));
                    var_42 = ((/* implicit */short) ((unsigned char) ((unsigned int) -398869501)));
                    var_43 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_26 - 1] [(short)23] [i_26 + 3])) - (((/* implicit */int) (unsigned char)155))));
                }
            }
            var_44 += ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_91 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) max((var_5), (var_9)))))));
        }
        arr_100 [(unsigned short)7] [i_2] = ((/* implicit */unsigned long long int) arr_97 [(short)9] [(short)9] [i_2] [21]);
    }
    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22769)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)202)) != (((/* implicit */int) (signed char)77))))) : (((/* implicit */int) ((unsigned short) (unsigned char)162)))))) ? (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned char) var_4))))) ? (((((/* implicit */int) (signed char)-77)) - (((/* implicit */int) var_9)))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_2))));
}
