/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79963
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)47)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (3644092937955074337LL) : (3644092937955074367LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_12)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65516))) : (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_9))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
        {
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
            arr_10 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((arr_2 [i_1 - 1]) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 4]))));
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_2 + 2] [i_2 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))));
            var_16 = ((/* implicit */unsigned int) arr_2 [i_1 + 3]);
        }
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
        {
            arr_14 [i_3] [i_3] = arr_3 [i_3 + 3] [i_3 + 2];
            /* LoopSeq 4 */
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                arr_19 [i_3] [i_3] [i_4] = ((/* implicit */long long int) (~(arr_8 [i_3 + 3] [i_1 - 3] [i_1 - 4])));
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    for (long long int i_6 = 2; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((unsigned char) arr_5 [i_1] [i_3] [i_4]));
                            arr_27 [i_3] = ((/* implicit */int) arr_3 [i_4] [i_5]);
                            var_18 = ((/* implicit */int) 17662159266426375836ULL);
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) ((signed char) (unsigned short)5055));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    arr_34 [i_3] [i_7] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (784584807283175800ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1]))))));
                    var_20 -= ((/* implicit */short) -1LL);
                }
                for (long long int i_9 = 1; i_9 < 23; i_9 += 3) 
                {
                    var_21 = ((unsigned short) (unsigned char)63);
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_7 - 1] [i_9 - 1])) ? ((+(3644092937955074378LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    arr_38 [18] [i_3] [i_7] [i_3] = ((((/* implicit */_Bool) (short)-25802)) ? (((/* implicit */int) (signed char)-105)) : (635187253));
                }
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    arr_43 [i_3] [i_3] [i_1 - 3] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_7 - 1])) * (((/* implicit */int) arr_2 [i_7 - 1]))));
                    arr_44 [i_3] [i_10] [i_7] [i_3 + 3] [i_3] = ((/* implicit */long long int) ((int) arr_33 [i_3] [i_10] [i_3 + 1] [i_1 - 2] [0ULL] [3U]));
                    arr_45 [i_1] [i_3 + 2] [i_7] [i_3] = ((/* implicit */unsigned char) ((long long int) arr_16 [i_3] [i_3 + 2]));
                    arr_46 [i_1] [(signed char)10] [i_7] [i_7] [i_7] [18] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [11U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_1] [i_1 - 1]))));
                }
                var_23 = ((/* implicit */_Bool) ((unsigned int) (signed char)105));
                /* LoopSeq 2 */
                for (unsigned short i_11 = 3; i_11 < 23; i_11 += 1) 
                {
                    arr_50 [14U] [i_3] [14U] [i_11] = ((/* implicit */int) var_5);
                    arr_51 [i_1] |= var_3;
                    arr_52 [i_1] [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_22 [i_3] [i_7] [(signed char)3] [i_3])))));
                }
                for (signed char i_12 = 2; i_12 < 21; i_12 += 3) 
                {
                    arr_55 [i_3] [i_3] [i_7] [i_7] [i_12] = ((/* implicit */long long int) ((unsigned short) arr_8 [i_12] [i_12 + 2] [i_3 + 2]));
                    var_24 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65516)) - (((/* implicit */int) (signed char)9))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3 - 1] [i_12 + 1] [i_1 + 3])))));
                    arr_56 [i_7] [i_7] [i_7] [i_3] = ((/* implicit */int) arr_22 [i_3] [i_3 + 3] [i_7] [8U]);
                }
            }
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */signed char) var_0);
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-256)))))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        {
                            arr_64 [i_1 + 1] [i_1] [i_3] [i_1 + 1] [i_1] = ((/* implicit */signed char) var_11);
                            arr_65 [i_1] [i_3 + 2] [i_13] [i_14] [(short)14] [i_3] [(unsigned char)0] = (~(arr_40 [i_1] [i_1 + 1] [i_1 + 2] [i_15] [i_15]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    for (unsigned int i_17 = 1; i_17 < 22; i_17 += 4) 
                    {
                        {
                            var_27 = (signed char)-107;
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-((+(((/* implicit */int) (signed char)-125)))))))));
                            arr_70 [i_1 - 3] [i_3] [i_13] [i_1 - 3] [(short)14] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_17 + 2] [i_3 + 2] [i_13])) <= (((/* implicit */int) arr_7 [i_17 + 2] [i_3 + 2] [i_3 + 2]))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_28 [i_1 + 2])) + (arr_5 [i_1 - 2] [i_3 + 1] [i_3 + 1])));
            }
            for (unsigned char i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    arr_75 [i_1] [i_3] [i_18] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_58 [i_3] [i_3 + 1] [(short)8] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_1] [i_1 + 3] [i_1 + 1] [i_1 - 3] [(unsigned short)16] [i_3]))) : (5987511291958798946LL)));
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 2; i_20 < 21; i_20 += 3) 
                    {
                        arr_80 [i_1 - 4] [i_3] [i_18] [i_19] [i_20] [i_19] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_3 [i_1] [i_1])) - (18287)))));
                        arr_81 [i_1] [i_3] [(signed char)13] [i_18] [i_19] [i_20] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_41 [i_1] [i_3] [i_19])) : (var_12))) : (((/* implicit */long long int) arr_8 [i_19] [i_20] [i_20 - 2]))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) var_7);
                        var_31 += ((/* implicit */signed char) 2147483647);
                        arr_85 [i_3] [(signed char)18] [i_18] [(signed char)18] [i_18] = ((/* implicit */unsigned short) arr_24 [i_1 - 1] [i_3] [i_18] [i_3 - 1] [i_1 - 4] [(_Bool)1]);
                    }
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((unsigned char) -583309160)))));
                }
                arr_86 [i_1] [i_3] [i_3] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) arr_12 [i_3 - 1])) : (((/* implicit */int) var_1))));
            }
        }
        for (unsigned long long int i_22 = 1; i_22 < 21; i_22 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_23 = 2; i_23 < 23; i_23 += 1) /* same iter space */
            {
                arr_91 [i_22] [i_22] [i_23] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_22 - 1] [i_23 + 1] [i_23] [i_23])))));
                arr_92 [i_23] [i_23] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) & (var_12)))) ? (var_11) : (((/* implicit */long long int) (-(((/* implicit */int) (short)7027))))));
                arr_93 [i_1] [(short)2] [i_23] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)135)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)35)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (((unsigned int) arr_7 [i_1] [i_22] [(signed char)2]))));
                var_33 *= ((/* implicit */_Bool) arr_72 [i_1 - 2] [i_1]);
            }
            for (short i_24 = 2; i_24 < 23; i_24 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (short)15))) != (((/* implicit */int) arr_31 [i_24]))));
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 1) 
                {
                    for (unsigned char i_26 = 0; i_26 < 24; i_26 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_24] [i_1 - 3] [i_1 + 2] [i_24])) ? (arr_22 [i_24] [i_1 + 3] [i_1] [i_24]) : (arr_22 [i_24] [i_1 + 3] [i_1] [i_24])));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_58 [i_22 - 1] [i_22] [i_22] [i_22])) & (arr_63 [i_26] [i_24 - 2] [i_22 + 3] [i_22] [i_22] [i_22])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_27 = 0; i_27 < 24; i_27 += 4) 
                {
                    for (unsigned int i_28 = 0; i_28 < 24; i_28 += 1) 
                    {
                        {
                            arr_107 [i_24] [i_22] [i_24] [i_22] [4] [4] [i_24] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) - (var_11))) & (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            arr_108 [(signed char)5] [(signed char)5] [i_24] [i_24] [i_24] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_11))));
                        }
                    } 
                } 
                arr_109 [i_1] [i_1] [i_1 - 2] [i_24] = ((/* implicit */int) var_6);
                arr_110 [i_24] [i_24] [i_24] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))) % (((((/* implicit */long long int) ((/* implicit */int) var_10))) & (var_12)))));
            }
            /* LoopSeq 1 */
            for (short i_29 = 0; i_29 < 24; i_29 += 2) 
            {
                arr_113 [i_1] [i_22] [i_22] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) >= (arr_79 [i_1] [i_22 + 3] [i_1])));
                arr_114 [(short)19] [i_1] [(unsigned char)8] [i_1] = (!(((var_11) == (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (1292417150) : (((/* implicit */int) (_Bool)1))));
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1 - 4] [i_22])) && (((/* implicit */_Bool) arr_26 [i_29])))))));
            }
            arr_115 [i_1 - 3] [i_22] [22LL] = ((unsigned int) ((var_2) ? (((/* implicit */int) arr_54 [i_1 - 1] [i_22])) : (((/* implicit */int) (short)12))));
        }
        for (unsigned int i_30 = 0; i_30 < 24; i_30 += 3) 
        {
            var_39 = ((/* implicit */signed char) arr_24 [i_1 + 1] [i_1 - 2] [i_1 + 1] [(_Bool)1] [i_1] [(_Bool)1]);
            arr_120 [i_30] [i_30] = ((/* implicit */short) ((signed char) arr_17 [i_1] [i_1 + 3]));
            arr_121 [i_30] [i_30] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2])) > (((/* implicit */int) var_4))));
            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 3])) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_15 [i_1 + 2] [21LL] [(short)10])))))));
        }
        var_41 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_105 [i_1] [i_1 + 1] [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_1] [i_1] [i_1] [i_1 - 4] [(unsigned short)12]))) : (((((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_68 [i_1] [(short)10] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) 997701876))))));
        arr_122 [i_1] = ((/* implicit */_Bool) var_1);
    }
}
