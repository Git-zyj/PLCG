/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58061
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
    var_14 = ((/* implicit */unsigned long long int) var_4);
    var_15 = var_10;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)62)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) == (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned long long int) (((((_Bool)1) || (((/* implicit */_Bool) var_7)))) ? (((long long int) arr_1 [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) && (((/* implicit */_Bool) arr_1 [i_0] [15LL]))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) + (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))) : (arr_0 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((4611686018427385856ULL) == (((/* implicit */unsigned long long int) ((int) var_4)))))), (max((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */short) var_10))))), (arr_0 [i_1] [17LL])))));
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)125)) && (((/* implicit */_Bool) (unsigned char)131)))))) <= (((((/* implicit */unsigned long long int) var_13)) / (var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1])))))) : (max((((unsigned int) var_0)), (((/* implicit */unsigned int) ((short) var_9)))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_17 *= min((((/* implicit */unsigned long long int) var_9)), (min((arr_0 [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned long long int) var_11)))));
            arr_11 [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1])))), (((/* implicit */int) ((_Bool) arr_6 [i_2 - 1] [i_2 - 1])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((760899216265660056ULL) == (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_2] [i_3]))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)2])) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((long long int) 9996023935902172446ULL))))));
                var_18 = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_0 [i_2] [i_0]))));
            }
        }
        arr_15 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) arr_9 [i_4] [i_4]);
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_21 = ((/* implicit */_Bool) var_13);
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)120)) && (((/* implicit */_Bool) max((((long long int) var_1)), (((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4] [(unsigned char)13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [11] [11] [11]))) : (arr_13 [i_4] [i_5]))))))));
        }
        for (short i_6 = 4; i_6 < 18; i_6 += 4) 
        {
            var_23 = arr_19 [i_4] [i_4] [i_4];
            arr_24 [i_4] [i_6] |= ((/* implicit */unsigned char) arr_18 [i_6] [i_6] [i_4]);
        }
        for (signed char i_7 = 4; i_7 < 19; i_7 += 1) 
        {
            var_24 -= ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4]))))) - (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) var_4)))))))));
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (int i_10 = 3; i_10 < 17; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((arr_33 [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))))));
                            arr_37 [1] = ((/* implicit */short) ((max((min((((/* implicit */unsigned long long int) arr_18 [i_4] [i_4] [i_4])), (760899216265660056ULL))), (((/* implicit */unsigned long long int) arr_6 [i_7] [i_7])))) / (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_5)), (arr_17 [3LL]))), (((/* implicit */long long int) max((((/* implicit */short) (unsigned char)62)), (var_4)))))))));
                            var_26 = ((/* implicit */int) max((var_26), (((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7 + 1] [i_8] [i_10 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518))) : (arr_0 [(unsigned short)18] [i_7 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (13835058055282165784ULL))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_7] [i_7])) + (((/* implicit */int) arr_30 [i_7 + 1] [i_7] [i_7] [i_7]))));
                    arr_41 [i_4] [i_7 - 3] [11ULL] [(signed char)2] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_28 [(unsigned short)4] [i_8] [(unsigned char)10])) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_4] [16U] [i_11])) < (((/* implicit */int) arr_34 [i_7 + 1]))))))));
                }
                for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) max(((-(max((var_8), (((/* implicit */unsigned long long int) var_9)))))), ((+(((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_32 [i_12] [i_8] [i_7] [i_4]))))))));
                    var_29 = ((/* implicit */short) (-(((/* implicit */int) arr_35 [i_4] [i_4] [i_7] [i_7] [i_8] [i_12] [i_12]))));
                    var_30 = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_4] [i_4] [i_4] [i_4] [i_12]))) | (9996023935902172446ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [(unsigned char)7] [i_8]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_4 [i_12]), (var_3)))) ? ((-(((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4] [i_8])) && (((/* implicit */_Bool) arr_10 [i_8]))))))))));
                }
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        {
                            arr_50 [i_4] [i_14] [i_13] [i_8] [i_7] [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) arr_45 [i_7 - 1] [i_7 - 1] [i_7 - 1])));
                            arr_51 [8LL] [i_13] [i_8] [(unsigned short)4] [8LL] [i_4] [i_4] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_5 [i_4] [9LL])))) && (arr_42 [i_14] [i_7] [i_8] [i_13])));
                        }
                    } 
                } 
                arr_52 [13U] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_4] [i_4] [i_4] [i_4]))) : (arr_12 [i_4] [i_4] [i_4] [i_8]))))))) : (((((/* implicit */_Bool) arr_21 [i_7 - 4])) ? (((/* implicit */int) arr_21 [i_7 + 1])) : (((/* implicit */int) arr_21 [i_7 - 1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_15 = 2; i_15 < 18; i_15 += 3) 
                {
                    arr_57 [i_4] [i_4] [i_8] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (max((min((((/* implicit */unsigned long long int) arr_29 [i_4] [i_4] [i_4])), (arr_0 [i_7] [i_7]))), (((((/* implicit */_Bool) arr_25 [i_7 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_53 [i_15 + 2] [(unsigned short)10] [(unsigned char)3] [i_8] [i_4] [i_4]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_25 [i_7])), (var_6))))) : (min((arr_33 [i_4] [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_42 [i_15] [i_8] [i_7] [8]))))))));
                    var_31 -= ((unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_22 [13] [13] [13])), (var_8))))));
                }
            }
            for (signed char i_16 = 0; i_16 < 20; i_16 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((var_7), (var_10))))));
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 1) 
                {
                    for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        {
                            arr_65 [i_18] [i_17] [i_16] [i_7] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_40 [i_4] [i_7] [(signed char)9] [7LL] [i_18]), (((/* implicit */short) (signed char)71))))) ^ (((/* implicit */int) arr_30 [i_4] [i_16] [(unsigned short)6] [17LL]))))) + (((((/* implicit */unsigned long long int) arr_31 [i_17 + 1] [(unsigned char)11] [i_7 - 2] [(_Bool)1] [i_7 - 1])) | (13843097356274953906ULL)))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) arr_16 [i_7]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [(unsigned char)7] [i_7] [i_16] [i_17] [i_18] [i_4])))))) : (arr_53 [i_17 - 1] [(signed char)18] [i_17 - 1] [i_16] [i_7] [1LL]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))))));
                            var_34 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_4] [i_17 + 1]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7 + 1] [i_4]))) ^ (((unsigned long long int) arr_56 [i_18] [i_7] [i_7] [i_4]))))));
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) arr_23 [i_17]))));
                        }
                    } 
                } 
            }
            arr_66 [i_4] [13LL] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_12))))), ((+(((/* implicit */int) arr_39 [18ULL] [i_7] [i_4] [10LL]))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_59 [i_4] [i_4] [i_7])) >= (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) arr_29 [i_7 - 3] [i_4] [i_4])) ? (arr_31 [i_7] [i_7] [i_7] [i_7] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [2] [i_7 + 1]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_21 [i_4]))))))))));
            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_64 [i_7 - 4] [i_7 - 4] [i_7] [i_7] [i_7]), (arr_64 [i_7 + 1] [i_7 - 3] [i_7] [i_7] [(_Bool)1])))) ? (((/* implicit */int) arr_64 [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 3])) : (((((/* implicit */int) arr_64 [i_7 - 4] [i_7 - 1] [i_7 - 2] [i_7] [i_7])) & (((/* implicit */int) arr_64 [i_7 - 1] [i_7 - 1] [i_7 - 4] [i_7] [i_7])))))))));
        }
        /* vectorizable */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_20 = 1; i_20 < 17; i_20 += 1) 
            {
                for (long long int i_21 = 1; i_21 < 16; i_21 += 2) 
                {
                    for (int i_22 = 1; i_22 < 18; i_22 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned long long int) arr_39 [i_4] [i_4] [(signed char)19] [i_4]);
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((short) arr_63 [i_22] [i_22 - 1] [i_22 + 2] [i_21 + 2] [i_21 + 2] [i_20 - 1])))));
                        }
                    } 
                } 
            } 
            arr_79 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 9223090561878065152LL)) && (((/* implicit */_Bool) var_13)))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_12))));
            arr_80 [i_4] [(unsigned char)18] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_62 [i_4] [i_4]))))));
        }
        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_59 [12LL] [i_4] [i_4])) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_39 [i_4] [16LL] [i_4] [i_4])), (arr_67 [1U] [4LL] [4LL]))))))) : (((/* implicit */int) max((arr_58 [i_4] [i_4] [i_4]), (arr_58 [i_4] [i_4] [i_4]))))));
    }
}
