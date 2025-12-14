/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63011
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
    for (int i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((unsigned char) var_4)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_6 [i_4] [i_3 - 3] [i_4 + 2] [i_3 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) (+(-3647719135748359973LL)))) + (5008179456222462534ULL))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0])) << (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)73))))))))));
                }
            } 
        } 
        arr_15 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0]))));
        var_13 = ((/* implicit */signed char) ((-3647719135748359973LL) == (9223372036854775807LL)));
        var_14 ^= ((/* implicit */long long int) ((unsigned short) (((~(var_5))) & (((/* implicit */int) var_0)))));
    }
    for (int i_5 = 2; i_5 < 21; i_5 += 2) /* same iter space */
    {
        var_15 ^= ((/* implicit */short) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_0))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5] [i_5 + 1] [3ULL] [i_5 + 2] [i_5 - 1])) ? (arr_13 [i_5] [i_5 - 2] [i_5 - 2] [i_5 + 2] [i_5 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-38)) == (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (signed char i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            for (long long int i_7 = 2; i_7 < 20; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((int) var_7)) >> (((((/* implicit */int) var_0)) - (51730))))) <= (((((/* implicit */int) arr_4 [i_5] [i_6 - 1] [i_7] [i_8])) / (((/* implicit */int) var_6)))))))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((2147483647) | (((/* implicit */int) (!((_Bool)1)))))))));
                        var_19 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_5 - 2] [(signed char)8] [(short)10] [i_8])) ? (((/* implicit */int) arr_4 [i_8] [i_7 + 1] [12] [(unsigned short)13])) : (((/* implicit */int) var_2)))));
                        var_20 -= ((/* implicit */unsigned char) (_Bool)1);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) (~((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (short)8988)))))))));
        arr_25 [(_Bool)1] = ((/* implicit */long long int) arr_17 [i_5]);
    }
    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_4 [i_9] [i_9] [i_9] [i_9]))));
        var_23 = ((/* implicit */short) arr_13 [i_9] [(unsigned short)16] [(unsigned short)16] [i_9] [i_9]);
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_9] [i_9])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_4), (var_0))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_4)))) : ((+((-(((/* implicit */int) var_6))))))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            arr_37 [i_10] [8U] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_10] [i_11])) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_9 [i_10]))))));
            arr_38 [i_10] [i_10] &= ((/* implicit */unsigned long long int) (+(arr_16 [i_10])));
            var_25 = ((/* implicit */unsigned char) (+(13438564617487089081ULL)));
            var_26 -= ((/* implicit */unsigned long long int) (+(var_5)));
        }
        arr_39 [i_10] [(signed char)0] = ((/* implicit */long long int) ((_Bool) arr_33 [i_10] [i_10]));
        var_27 = ((/* implicit */short) var_3);
        var_28 = ((/* implicit */unsigned short) ((unsigned int) ((_Bool) var_2)));
        /* LoopSeq 3 */
        for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            var_29 = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_10] [i_12]))));
            /* LoopSeq 1 */
            for (unsigned char i_13 = 3; i_13 < 18; i_13 += 2) 
            {
                var_30 = ((/* implicit */unsigned char) ((unsigned long long int) arr_4 [i_13 - 1] [i_13 - 2] [4U] [i_13 + 1]));
                /* LoopSeq 2 */
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) arr_41 [i_14] [i_14]))) : ((~(((/* implicit */int) arr_35 [i_10] [4ULL])))))))));
                    arr_48 [i_13] [i_13] = ((/* implicit */unsigned char) 1048575U);
                    var_32 = ((/* implicit */unsigned int) ((var_2) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_8 [i_10] [i_12] [i_13] [i_13 - 2] [i_12] [i_14])) - (36942)))))) : (((((/* implicit */_Bool) arr_11 [i_10] [i_12] [2U] [(signed char)22])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (9303075292654156910ULL)))));
                    arr_49 [i_13] = ((/* implicit */long long int) ((signed char) arr_9 [i_10]));
                }
                for (unsigned short i_15 = 0; i_15 < 19; i_15 += 2) 
                {
                    var_33 = ((/* implicit */unsigned short) var_7);
                    var_34 -= ((/* implicit */signed char) arr_8 [i_15] [i_13 - 3] [i_13 - 3] [19LL] [19LL] [i_10]);
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_42 [i_12] [i_13 - 3] [i_13 - 1] [i_12]))));
                }
            }
        }
        for (unsigned char i_16 = 0; i_16 < 19; i_16 += 4) 
        {
            var_36 = ((/* implicit */signed char) ((int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_1)) - (111))))));
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) 
            {
                for (short i_18 = 0; i_18 < 19; i_18 += 2) 
                {
                    for (signed char i_19 = 3; i_19 < 18; i_19 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */signed char) var_0);
                            var_38 &= ((((/* implicit */_Bool) arr_5 [i_19] [i_18] [i_10] [i_10])) ? (3647719135748359972LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_10] [i_10])) ? (2483738396U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                            var_39 -= ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_64 [i_19] [i_19 + 1] [i_19 + 1] [i_19] [i_19 - 1] [i_19 - 2])) : (((/* implicit */int) arr_40 [i_17] [(signed char)0] [i_10]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_20 = 3; i_20 < 18; i_20 += 2) 
            {
                for (unsigned char i_21 = 4; i_21 < 18; i_21 += 4) 
                {
                    {
                        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) var_0))));
                        var_41 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_10] [i_16] [i_16] [i_20 - 2] [i_20 + 1] [i_21 + 1])) ? (arr_10 [i_10] [i_10] [i_20 - 1] [i_20] [i_21 - 3] [(short)1]) : (arr_10 [i_10] [(unsigned char)19] [i_20 - 1] [1U] [i_21 - 2] [i_21])));
                    }
                } 
            } 
        }
        for (signed char i_22 = 0; i_22 < 19; i_22 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 19; i_23 += 1) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 19; i_24 += 1) 
                {
                    {
                        arr_80 [i_10] [i_23] [i_10] [i_24] = ((/* implicit */unsigned int) (-(2147483647)));
                        var_42 &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                        /* LoopSeq 2 */
                        for (int i_25 = 0; i_25 < 19; i_25 += 4) 
                        {
                            var_43 = arr_67 [i_23] [7] [12] [i_23];
                            var_44 ^= ((/* implicit */_Bool) -694384855);
                            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_33 [i_10] [i_10]))))) > (((unsigned long long int) var_9)))))));
                            var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_23] [i_22] [(_Bool)1] [i_24]))) : (9223372036854775785LL)));
                            var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) ((arr_43 [i_10] [i_22] [i_10] [i_25]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        }
                        for (int i_26 = 1; i_26 < 16; i_26 += 2) 
                        {
                            arr_88 [i_23] [i_24] = ((((/* implicit */int) ((((/* implicit */int) var_9)) <= (arr_46 [i_10] [i_23] [i_26 + 3])))) % ((+(((/* implicit */int) var_1)))));
                            arr_89 [i_23] [4] [i_23] = ((/* implicit */_Bool) -3647719135748360000LL);
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_28 = 0; i_28 < 19; i_28 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_29 = 1; i_29 < 15; i_29 += 4) 
                    {
                        arr_98 [i_10] [i_22] [i_22] [i_28] [i_28] [i_22] [i_29] = var_2;
                        var_48 -= ((/* implicit */int) ((unsigned char) arr_70 [i_22] [i_22]));
                        var_49 = ((/* implicit */short) ((((/* implicit */int) arr_79 [i_22] [i_27 - 1] [i_27 - 1] [i_29 + 3])) & (((/* implicit */int) arr_79 [i_27] [i_27 - 1] [i_27 - 1] [i_29 - 1]))));
                    }
                    for (unsigned int i_30 = 2; i_30 < 16; i_30 += 2) 
                    {
                        arr_101 [i_30 + 1] [(_Bool)0] [i_28] [i_28] [i_10] [i_10] = ((/* implicit */short) ((int) arr_45 [i_28]));
                        var_50 = ((/* implicit */int) max((var_50), (((int) var_1))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_31 = 1; i_31 < 17; i_31 += 4) 
                    {
                        var_51 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_27 - 1] [i_31 + 2] [(signed char)18] [(signed char)18] [(signed char)18] [(signed char)18]))));
                        var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((((/* implicit */int) arr_100 [i_10] [i_22] [i_28] [i_22] [i_31 + 2] [i_31 + 2])) % (((/* implicit */int) arr_100 [i_31] [(unsigned short)18] [i_31] [i_10] [i_31 + 2] [i_31 + 2])))))));
                        var_53 = ((/* implicit */unsigned short) ((arr_10 [i_10] [i_22] [i_27 - 1] [i_10] [i_28] [i_31 + 2]) <= (arr_10 [i_10] [i_27] [i_27] [i_28] [(short)7] [i_27])));
                    }
                    for (short i_32 = 3; i_32 < 18; i_32 += 2) 
                    {
                        var_54 += ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_34 [i_27] [i_27] [i_27]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2560923574U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                        arr_108 [i_10] [i_28] [i_10] [i_28] [i_32] = ((((/* implicit */_Bool) arr_79 [i_27 - 1] [i_28] [i_28] [i_28])) && (((/* implicit */_Bool) arr_79 [i_27 - 1] [i_27 - 1] [(unsigned char)7] [i_32])));
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_33 = 0; i_33 < 19; i_33 += 4) 
                {
                    arr_111 [3] [(unsigned char)10] [(unsigned short)4] [18ULL] = ((/* implicit */signed char) ((arr_77 [i_10] [i_22] [i_27 - 1] [(unsigned short)16]) ? (((/* implicit */int) arr_77 [i_33] [i_22] [i_33] [i_33])) : (((/* implicit */int) arr_61 [i_10] [i_10] [i_22] [i_22] [i_22]))));
                    var_55 = ((/* implicit */unsigned int) max((var_55), (((arr_6 [i_27 - 1] [i_27] [i_27 - 1] [i_27 - 1]) & (arr_6 [i_27 - 1] [i_27] [i_27] [i_27 - 1])))));
                    arr_112 [i_33] [17U] [0] [i_27 - 1] [i_22] [i_10] = ((/* implicit */unsigned long long int) ((unsigned short) 13438564617487089081ULL));
                    var_56 = ((/* implicit */unsigned long long int) 5215132541076998139LL);
                    arr_113 [i_10] [i_10] [i_27 - 1] = ((/* implicit */unsigned int) arr_90 [i_27] [18] [i_27 - 1]);
                }
                for (int i_34 = 0; i_34 < 19; i_34 += 1) 
                {
                    arr_117 [i_10] [i_22] [i_27] [i_34] = ((/* implicit */signed char) ((unsigned long long int) arr_82 [i_27 - 1] [i_27 - 1]));
                    arr_118 [11U] [11U] [11U] [i_22] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_5)))));
                    var_57 &= ((/* implicit */_Bool) ((2046U) << (((/* implicit */int) (_Bool)1))));
                }
                var_58 ^= var_4;
                var_59 = ((/* implicit */int) arr_76 [i_27] [i_22] [i_10]);
                /* LoopNest 2 */
                for (unsigned char i_35 = 0; i_35 < 19; i_35 += 2) 
                {
                    for (unsigned short i_36 = 0; i_36 < 19; i_36 += 2) 
                    {
                        {
                            var_60 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (3647719135748359960LL) : (-3647719135748359973LL)));
                            var_61 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_103 [i_10] [i_22])) ? (((/* implicit */int) arr_103 [i_10] [i_36])) : (var_5)));
                        }
                    } 
                } 
            }
            var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_119 [i_22] [i_22] [i_22] [i_22] [11] [i_22]) ? (((/* implicit */unsigned long long int) -1263048329)) : (arr_70 [i_10] [3U])))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_8))))));
        }
    }
    var_63 ^= ((/* implicit */unsigned short) var_1);
    var_64 = ((/* implicit */short) var_6);
}
