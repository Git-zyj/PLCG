/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8110
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
    var_17 = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) var_0)))) ? (var_10) : (((/* implicit */int) var_15)))), ((+(((/* implicit */int) var_9))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((var_8), (((/* implicit */short) (_Bool)0))))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((-9223372036854775807LL), (((/* implicit */long long int) var_15))))))));
    var_19 = ((/* implicit */int) (+(max((var_13), (((/* implicit */unsigned long long int) var_15))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((~((~(var_11))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1 - 3] [i_0 - 1] [i_0 - 1])) | (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_2 - 1] [i_2] = ((/* implicit */short) var_16);
                    arr_8 [i_2] [i_1] = ((/* implicit */signed char) min((min(((+(arr_0 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20574))) + (var_7)))))), (((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) arr_6 [i_0]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        arr_11 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (var_7) : (arr_9 [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_2 - 1] [i_3 + 2])));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) >= (var_4))))));
                        arr_12 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (unsigned short)20574))))) && (((/* implicit */_Bool) arr_2 [i_0 + 1]))));
                        arr_13 [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (var_7)))));
                        arr_14 [i_3 + 2] [(unsigned short)9] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_0 + 2] [i_1 - 1] [i_1 - 2] [i_2 - 1] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_19 [i_0] [13ULL] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_2 - 1]))));
                        var_22 = ((/* implicit */unsigned int) ((arr_18 [i_1 - 3] [i_1 - 3] [i_2 - 1] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_24 [i_0 + 3] [(unsigned char)6] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)20586))));
                                arr_25 [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((7173451071015921394LL) - (7173451071015921378LL)))))), (min((min((var_13), (((/* implicit */unsigned long long int) (unsigned short)44944)))), (arr_0 [i_0 + 2])))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_1] [i_2] [(signed char)7] [i_2] [i_1 - 2] [i_1])) >= (((/* implicit */int) var_0)))))) < (((((/* implicit */_Bool) (short)-16019)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0 + 1] [i_0 + 1] [i_2] [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) var_0)), (arr_3 [i_0 + 3]))) % (min((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1]))))))));
                                arr_34 [i_0] [i_1 - 3] [i_2] [i_7] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) 17115371170413388580ULL);
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned char i_9 = 1; i_9 < 14; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            {
                                arr_43 [i_0 - 2] [(unsigned char)1] [i_0 - 2] [i_0 - 2] [i_11] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(max((arr_9 [i_11] [i_10 + 1] [i_1] [i_1] [9]), (var_1)))))), (((((var_16) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) * ((~(var_13)))))));
                                arr_44 [2U] [2U] [i_9 + 1] [i_9] [i_9 - 1] [(short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-19697)) - (((/* implicit */int) arr_15 [i_11] [i_10] [i_9] [i_0]))))) / (min((var_7), (((/* implicit */unsigned int) arr_31 [(unsigned char)9] [i_1] [(_Bool)1] [i_9 + 1] [i_10] [12]))))))) ? (((((((/* implicit */_Bool) arr_37 [i_11] [i_1 - 3])) ? (var_13) : (var_13))) + (((/* implicit */unsigned long long int) arr_2 [i_1 + 2])))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)10378)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7))), (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (2147483647U))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_12 = 4; i_12 < 20; i_12 += 2) 
    {
        for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 2; i_15 < 21; i_15 += 3) 
                    {
                        arr_55 [i_15 - 1] [i_13] [i_14] [i_14] [i_13] [13] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((((/* implicit */int) var_8)) < (((/* implicit */int) arr_52 [i_12] [16U] [i_14] [i_15 - 2])))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            arr_58 [i_12 - 2] [i_13] [i_13] [i_16] = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)217)) || (arr_57 [i_12] [i_12 - 2] [i_15 + 1] [i_16 + 1] [i_16 + 1]))))));
                        }
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_26 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)512))));
                            arr_62 [i_13] [i_13] [i_17] = ((/* implicit */unsigned int) var_3);
                        }
                        for (short i_18 = 1; i_18 < 20; i_18 += 2) 
                        {
                            var_27 = (((~(var_11))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            arr_65 [i_12] [i_13] [i_12] [i_12] [(short)20] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) ((unsigned char) var_10))))), (((/* implicit */int) max((((/* implicit */short) var_9)), (arr_53 [i_18 + 1] [i_13] [i_18 + 2] [i_15 - 1] [i_13] [i_14]))))));
                            arr_66 [i_13] [i_13] [i_13] [i_13] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((var_16) & (((/* implicit */unsigned long long int) arr_64 [i_12] [i_13] [i_12] [i_15])))))))));
                        }
                        for (long long int i_19 = 3; i_19 < 19; i_19 += 1) 
                        {
                            arr_70 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_13] [1LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13795189522688289790ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) : (10U)));
                            arr_71 [i_12] [i_13] [i_14] [(signed char)3] [i_15 + 1] [i_19 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-10378)) && (((/* implicit */_Bool) 6530446121491810951LL))));
                            var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_4)))))))));
                        }
                    }
                    arr_72 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) (~(min((max((((/* implicit */unsigned int) (short)-14484)), (var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1125899906842623ULL)) || (((/* implicit */_Bool) (short)1177)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        for (short i_21 = 3; i_21 < 19; i_21 += 1) 
                        {
                            {
                                arr_80 [i_12] [i_13] [i_21 - 2] [i_21] [i_13] = ((/* implicit */long long int) (((-((-(((/* implicit */int) var_15)))))) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_15)))))) <= (((((/* implicit */_Bool) var_7)) ? (arr_56 [i_12 - 4] [13LL] [i_12] [i_12] [i_13] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
                                var_29 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), ((-(((/* implicit */int) var_2)))))))));
                                arr_81 [i_12] [i_13] [(unsigned char)18] [13LL] [i_13] [(short)18] = ((/* implicit */short) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (var_7))))))));
                                arr_82 [i_12] [i_13] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_61 [(unsigned char)6] [i_14] [8LL] [i_21]))) - (var_11)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5062))) != (var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))), (((((((/* implicit */long long int) var_10)) < (var_11))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (var_13))) : (((/* implicit */unsigned long long int) arr_77 [i_12] [i_13] [i_21] [i_12 + 1] [i_21 + 1]))))));
                            }
                        } 
                    } 
                    arr_83 [i_13] [(short)20] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((18445618173802708989ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) - (((((/* implicit */_Bool) 8233702878782764674ULL)) ? (18445618173802709005ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)36209))) : (((((/* implicit */_Bool) 4082268126U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))));
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    arr_86 [i_12] [i_13] [i_12 + 1] [i_22] = ((/* implicit */short) max((min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_12] [i_13] [i_22] [i_12]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(255)))))))));
                    arr_87 [i_12] [(short)15] [i_13] = ((/* implicit */unsigned char) (~(min((1285434164656808948LL), (arr_84 [i_13])))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_23 = 0; i_23 < 22; i_23 += 2) 
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [9LL] [i_13] [i_12] [i_12 - 3] [19LL] [i_12 - 3])) ? (((/* implicit */int) (short)26712)) : (((/* implicit */int) (_Bool)1))));
                    arr_91 [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */int) arr_73 [i_12 + 1] [(_Bool)1] [(unsigned char)9] [i_12 - 3])) >= (((/* implicit */int) (_Bool)1))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_24 = 0; i_24 < 22; i_24 += 1) 
                {
                    arr_95 [18LL] [i_13] [i_13] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) ((((/* implicit */int) arr_63 [i_12] [i_13] [i_12 - 4])) >= (((/* implicit */int) arr_51 [i_24] [i_13] [i_12]))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 10U)))))))));
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)20334), (((/* implicit */short) arr_67 [i_12 - 3]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [6] [i_12] [i_12] [i_12]))))) + ((-(((/* implicit */int) (short)-26726)))))))));
                }
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) max(((((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) : (9003279822706916107ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2147483633)) / (-8475395530776082229LL)))))))));
            }
        } 
    } 
}
