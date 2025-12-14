/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55777
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (+((+((-(((/* implicit */int) (_Bool)0))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_7)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 10; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 - 3])) || (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2]))));
                    arr_11 [i_2] = ((/* implicit */unsigned char) arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (int i_5 = 4; i_5 < 9; i_5 += 3) 
                        {
                            {
                                var_11 *= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [(signed char)2])) < (((/* implicit */int) arr_12 [(unsigned short)0] [(unsigned short)0] [i_5 + 1] [i_5] [i_5]))));
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2 + 2] [i_3] [i_2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned int i_7 = 3; i_7 < 11; i_7 += 3) 
            {
                {
                    arr_24 [i_7] [i_7] [i_1] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)102)) + (((/* implicit */int) var_2))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_27 [i_1] [i_6] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */_Bool) ((unsigned int) arr_23 [i_7 - 3] [i_7] [i_7 - 3] [i_6]));
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_4))));
                        arr_28 [i_1] [i_7] [i_6] [(signed char)2] [(unsigned short)1] = ((/* implicit */unsigned char) (!(arr_4 [i_1] [i_6])));
                        var_14 -= ((/* implicit */unsigned short) (~(arr_21 [(signed char)0] [i_7 - 3] [i_7 - 3] [(signed char)0])));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 24; i_9 += 3) 
    {
        var_15 = ((/* implicit */short) (!(arr_30 [i_9 + 1])));
        arr_31 [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_9]))))) - (((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            for (short i_12 = 1; i_12 < 15; i_12 += 3) 
            {
                {
                    arr_39 [i_10] [i_10] [i_11] [i_12] = ((/* implicit */long long int) ((int) arr_38 [i_10]));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        for (long long int i_14 = 2; i_14 < 16; i_14 += 3) 
                        {
                            {
                                arr_45 [i_10] [i_13] [i_10] = ((/* implicit */int) ((((/* implicit */int) arr_41 [i_10] [i_11] [i_10] [i_13] [i_14 - 2])) == (((/* implicit */int) arr_41 [i_10] [i_11] [i_10] [i_13] [i_14 - 1]))));
                                arr_46 [i_10] [i_10] [i_10] [i_10] [i_14] = ((/* implicit */unsigned short) arr_41 [i_11] [i_12 + 2] [i_10] [3LL] [i_12]);
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_37 [i_10] [i_11] [i_12 + 2]))));
                                arr_47 [(short)0] [(short)8] [i_13] [4] [(short)8] [i_10] |= ((/* implicit */short) ((unsigned char) (+(var_4))));
                                var_17 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_35 [i_12 + 1])) ? (((/* implicit */int) arr_42 [i_10] [i_10] [i_12] [i_12 + 1] [i_13] [3U])) : (var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (short i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    for (unsigned char i_18 = 0; i_18 < 17; i_18 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)5279)) && (((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) (~(arr_40 [i_10] [i_18]))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) < (((((/* implicit */int) (short)25526)) / (((/* implicit */int) arr_42 [i_10] [i_10] [(unsigned short)13] [(unsigned short)13] [i_17] [i_18]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned short i_20 = 0; i_20 < 17; i_20 += 3) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) && (arr_53 [(short)10] [i_15] [(unsigned short)0] [i_20] [i_15]))))));
                            arr_67 [i_10] [i_20] [i_19] [(unsigned short)14] [i_10] = ((/* implicit */unsigned int) ((unsigned long long int) arr_55 [i_10] [i_10]));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_22 = 0; i_22 < 17; i_22 += 3) 
            {
                for (short i_23 = 0; i_23 < 17; i_23 += 3) 
                {
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_76 [i_10] [i_10] [i_10] [i_22] [i_10] [i_24] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(arr_49 [i_15] [(_Bool)1])))) % (((arr_30 [i_22]) ? (var_8) : (((/* implicit */unsigned long long int) arr_37 [i_15] [i_23] [i_24]))))));
                            arr_77 [i_10] [i_23] [15] [i_15] [i_10] = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) (short)30236)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_25 = 0; i_25 < 17; i_25 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_26 = 0; i_26 < 17; i_26 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) arr_29 [i_10]);
                /* LoopNest 2 */
                for (unsigned char i_27 = 1; i_27 < 16; i_27 += 3) 
                {
                    for (long long int i_28 = 0; i_28 < 17; i_28 += 3) 
                    {
                        {
                            var_22 -= ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) + (9223372036854775807LL))) < (((((arr_49 [i_10] [i_10]) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-100)) + (151))) - (51)))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) < (var_0)))))))));
                            arr_88 [i_10] = ((/* implicit */short) ((int) arr_59 [i_10] [i_27]));
                            arr_89 [i_10] [i_10] = arr_41 [i_27] [i_27] [i_10] [i_27] [6U];
                        }
                    } 
                } 
            }
            for (unsigned short i_29 = 0; i_29 < 17; i_29 += 3) 
            {
                var_24 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (685494864U))));
                var_25 *= ((/* implicit */short) ((arr_68 [(unsigned char)2] [(unsigned char)2]) - (arr_68 [(unsigned char)14] [i_29])));
                /* LoopSeq 3 */
                for (int i_30 = 0; i_30 < 17; i_30 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                    var_27 = ((/* implicit */int) var_7);
                    var_28 &= ((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)-100))))));
                }
                for (int i_31 = 0; i_31 < 17; i_31 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */int) arr_56 [i_10] [(unsigned char)12] [i_25] [i_10] [i_31]);
                    /* LoopSeq 2 */
                    for (short i_32 = 0; i_32 < 17; i_32 += 3) /* same iter space */
                    {
                        arr_102 [i_10] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_54 [i_10] [i_10] [12LL] [(unsigned short)13] [i_10] [i_10])) : (((/* implicit */int) var_2))));
                        var_30 = ((/* implicit */signed char) ((((((/* implicit */long long int) arr_60 [i_25] [i_29] [i_32])) / (arr_49 [i_29] [i_31]))) * (((/* implicit */long long int) ((/* implicit */int) ((short) var_4))))));
                        var_31 = ((/* implicit */unsigned long long int) ((short) arr_93 [i_10] [i_25]));
                    }
                    for (short i_33 = 0; i_33 < 17; i_33 += 3) /* same iter space */
                    {
                        arr_105 [i_10] [i_10] [(unsigned short)12] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_97 [i_10] [i_25] [i_29] [i_31]))));
                        var_32 = ((/* implicit */unsigned int) ((unsigned char) var_4));
                        arr_106 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) var_9);
                        var_33 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_62 [i_10] [i_10] [i_10]))))));
                        var_34 |= ((/* implicit */unsigned int) ((arr_82 [(short)14]) ? (((/* implicit */int) arr_82 [8LL])) : (((/* implicit */int) var_1))));
                    }
                    arr_107 [i_25] [14] [14] &= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_75 [i_10] [(unsigned char)16] [i_25] [(unsigned char)16] [i_29] [i_31] [i_10])) << (((((/* implicit */int) var_2)) + (23081))))));
                    arr_108 [i_10] [i_10] [i_25] [i_29] [i_29] [i_31] = ((/* implicit */unsigned int) ((signed char) arr_55 [i_10] [i_25]));
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((unsigned int) arr_65 [i_25] [i_29])))));
                }
                for (int i_34 = 0; i_34 < 17; i_34 += 3) /* same iter space */
                {
                    arr_112 [i_10] [4LL] [i_29] [i_10] = ((/* implicit */signed char) (_Bool)1);
                    var_36 = ((/* implicit */unsigned short) (signed char)102);
                    arr_113 [(short)10] [i_25] [i_29] [i_10] = ((/* implicit */signed char) (unsigned char)244);
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) arr_52 [6U] [i_25] [i_10] [2] [i_10])) || (((/* implicit */_Bool) arr_93 [(signed char)10] [(signed char)10])))))));
                }
                var_38 *= ((/* implicit */unsigned short) (unsigned char)64);
                /* LoopNest 2 */
                for (short i_35 = 0; i_35 < 17; i_35 += 3) 
                {
                    for (unsigned short i_36 = 0; i_36 < 17; i_36 += 3) 
                    {
                        {
                            arr_119 [i_10] [i_25] [(unsigned char)6] [i_10] [i_10] [i_10] [(_Bool)1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_104 [i_36]));
                            var_39 = ((/* implicit */unsigned int) arr_40 [i_10] [i_10]);
                            var_40 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_66 [i_10] [8LL]))));
                        }
                    } 
                } 
            }
            var_41 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_96 [(signed char)10] [8U] [(unsigned char)16] [i_25]))));
        }
        arr_120 [i_10] [6ULL] = ((/* implicit */long long int) ((unsigned short) ((short) arr_61 [i_10] [i_10])));
    }
    var_42 = ((/* implicit */unsigned short) var_6);
    var_43 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4)))))) ? (42755287) : ((~((-(((/* implicit */int) var_7))))))));
}
