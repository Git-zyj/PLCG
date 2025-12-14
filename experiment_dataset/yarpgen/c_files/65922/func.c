/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65922
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (var_12) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (var_1) : (1006632960))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? (7665896483072368594LL) : (((/* implicit */long long int) -1006632935))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34189))) : (17U)));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1006632979)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [(signed char)0]))));
            arr_4 [6] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((unsigned long long int) arr_0 [i_0] [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1099944277374562705LL)) ? (var_7) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? ((-(1266500553))) : ((+(((/* implicit */int) arr_2 [i_1]))))));
            var_20 = ((/* implicit */long long int) ((16252928) != (((/* implicit */int) arr_2 [i_1]))));
        }
    }
    for (short i_2 = 3; i_2 < 10; i_2 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (short i_5 = 2; i_5 < 11; i_5 += 2) 
                {
                    {
                        arr_14 [6U] [i_3] [i_2] [i_5 + 1] = ((/* implicit */short) 16252928);
                        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20307)) ? (((/* implicit */int) arr_8 [i_2 - 1])) : (((/* implicit */int) arr_8 [i_3]))))) % (((var_10) ? (((/* implicit */long long int) arr_9 [i_2 - 3] [i_4] [(unsigned short)11])) : (65535LL)))));
                    }
                } 
            } 
            var_22 = 1006632961;
            /* LoopNest 3 */
            for (short i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                for (signed char i_7 = 4; i_7 < 9; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) -1006632980)))));
                            arr_22 [2ULL] [(short)4] [i_6 - 1] [i_2] [(short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_8]))) ? (((var_3) + (((/* implicit */unsigned long long int) 3U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [(unsigned short)5] [i_6 + 1] [i_8] [i_8] [(short)4])))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */signed char) ((arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 + 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [8] [9ULL] [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 3])))));
        }
        for (unsigned long long int i_9 = 3; i_9 < 10; i_9 += 2) 
        {
            arr_26 [i_2] [i_9 - 2] = ((/* implicit */signed char) ((((arr_13 [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))) ^ (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) -16252934)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [9LL]))) : (-65536LL)))))));
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((max((arr_16 [i_9 - 2] [i_9 - 3] [i_9 - 2]), (arr_16 [i_9 - 3] [i_9 + 1] [i_9 - 1]))), (((arr_17 [i_9 - 2] [i_9 + 2] [i_9 - 3] [i_9 - 3]) ^ (arr_17 [i_9 - 3] [(signed char)10] [i_9 - 1] [i_9 - 1]))))))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((arr_20 [i_2 - 1] [(unsigned short)5] [i_9 + 1] [i_2 - 1] [0ULL] [i_9 - 2]) ? (((((/* implicit */_Bool) arr_5 [i_11] [(unsigned short)10])) ? (arr_17 [(unsigned short)11] [(unsigned short)7] [(_Bool)0] [6ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [2LL] [i_9 + 1] [i_9 - 3] [(short)0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))))), (((/* implicit */unsigned long long int) ((short) -444323060))))))));
                        arr_33 [1LL] [i_2] [6] [(signed char)8] = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 16252938)))))))), (((arr_5 [(signed char)1] [i_9 - 1]) - (((/* implicit */long long int) ((/* implicit */int) ((4375222718162013167ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17667)))))))))));
                    }
                } 
            } 
        }
        var_27 = (i_2 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10973926383140411072ULL)) ? (var_13) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) (unsigned short)34836)) << (((((/* implicit */int) arr_32 [(short)10] [i_2 - 1] [(unsigned short)11] [i_2])) - (27126))))) : (var_7)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10973926383140411072ULL)) ? (var_13) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) (unsigned short)34836)) << (((((((/* implicit */int) arr_32 [(short)10] [i_2 - 1] [(unsigned short)11] [i_2])) - (27126))) + (23422))))) : (var_7))));
    }
    var_28 = max((var_6), (((/* implicit */long long int) var_5)));
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) 17718040952494546664ULL)) ? (((/* implicit */int) (_Bool)1)) : (16252940)));
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_13 = 3; i_13 < 13; i_13 += 2) 
        {
            for (long long int i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                for (unsigned short i_15 = 1; i_15 < 13; i_15 += 2) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) 16252938)) + (21U)))) ? (((var_2) + (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [(signed char)6])) && (((/* implicit */_Bool) arr_39 [2LL] [(short)12])))))))), (((/* implicit */long long int) (~(arr_42 [i_13 - 3] [i_13 - 1]))))));
                        var_31 = max((min((arr_44 [i_15 + 1] [i_12] [i_12] [13ULL]), (arr_44 [i_15 + 1] [i_12] [i_12] [i_12]))), (arr_44 [i_13 + 1] [i_15 + 1] [i_12] [i_15 - 1]));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 14; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    {
                        arr_54 [i_12] [i_17] [i_12] [i_16] = ((/* implicit */int) var_3);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_19 = 0; i_19 < 14; i_19 += 4) /* same iter space */
                        {
                            arr_59 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) ((arr_52 [10U] [i_16] [1] [i_18] [(signed char)11] [i_19]) < (arr_52 [i_12] [i_16] [12] [i_17] [2ULL] [i_19])));
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (~(arr_51 [2LL] [i_19] [12ULL]))))));
                            var_33 *= ((/* implicit */unsigned long long int) (signed char)50);
                            var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-1))))) > (arr_52 [i_12] [i_16] [(unsigned char)13] [(signed char)4] [i_18] [i_19])));
                        }
                        for (unsigned char i_20 = 0; i_20 < 14; i_20 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */long long int) ((signed char) var_10));
                            arr_63 [i_12] [13LL] [i_12] [i_12] [i_20] = ((/* implicit */long long int) arr_42 [i_20] [i_18]);
                            arr_64 [i_12] [i_16] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_61 [i_12] [i_12] [(unsigned char)1] [(unsigned short)3] [(signed char)3])) ? (arr_44 [i_12] [12ULL] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [(short)9] [i_20]))))) % (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_0)) ? (arr_34 [i_12]) : (((/* implicit */long long int) 1006632980))))))));
                        }
                        var_36 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_12] [(short)12] [(short)13] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6279))) : (var_3)))) ? ((-(((/* implicit */int) (signed char)60)))) : (((/* implicit */int) arr_38 [i_12] [i_16])))));
                    }
                } 
            } 
        } 
        arr_65 [i_12] = ((min((max((((/* implicit */int) arr_37 [i_12] [(signed char)13])), (-16252941))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_5)))))) & (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_41 [i_12] [i_12])), (arr_49 [i_12] [(signed char)2])))) || (((/* implicit */_Bool) (unsigned char)0))))));
        /* LoopSeq 1 */
        for (unsigned int i_21 = 3; i_21 < 12; i_21 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_22 = 0; i_22 < 14; i_22 += 1) 
            {
                for (unsigned char i_23 = 1; i_23 < 13; i_23 += 3) 
                {
                    for (unsigned char i_24 = 0; i_24 < 14; i_24 += 4) 
                    {
                        {
                            arr_75 [i_12] [i_23 - 1] [(signed char)1] [i_22] [i_22] [(signed char)13] [i_12] = ((/* implicit */unsigned char) (short)-8978);
                            var_37 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) 15LL)) ? (((/* implicit */unsigned long long int) min((arr_48 [i_12] [7ULL]), (((/* implicit */long long int) arr_38 [i_12] [i_21 - 1]))))) : (16824818706470772700ULL)))));
                            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) max((-1006632986), (((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) == ((-(17839329637634792752ULL))))))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (2160367149120891958ULL))))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_25 = 0; i_25 < 14; i_25 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_26 = 4; i_26 < 13; i_26 += 3) 
                {
                    arr_81 [i_12] [(signed char)6] [i_25] [i_26 - 3] [i_26 - 1] = ((/* implicit */unsigned long long int) 16252936);
                    /* LoopSeq 1 */
                    for (signed char i_27 = 0; i_27 < 14; i_27 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned short) 16252936);
                        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_34 [i_21 - 2])) : (arr_36 [i_21 + 1])));
                    }
                }
                for (unsigned char i_28 = 0; i_28 < 14; i_28 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned int) arr_57 [(unsigned short)13] [i_25] [i_25] [11] [i_21 - 3]);
                    /* LoopSeq 1 */
                    for (int i_29 = 2; i_29 < 11; i_29 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1573186328)) ? (((/* implicit */int) (unsigned short)65532)) : (16252940)))));
                        var_43 = ((/* implicit */long long int) (!((_Bool)1)));
                        arr_92 [i_29 - 1] [i_29 - 2] [i_29 + 1] [i_29 + 1] [i_29 - 2] [i_12] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_55 [(signed char)6] [i_12] [i_25])) ? (arr_85 [(_Bool)1] [i_25] [(_Bool)1] [(_Bool)1] [i_12] [i_12]) : (((/* implicit */unsigned long long int) -65535LL)))) - (((/* implicit */unsigned long long int) arr_52 [10LL] [i_12] [i_29 + 2] [i_29 + 2] [i_29 - 2] [6LL]))));
                    }
                }
                for (unsigned char i_30 = 0; i_30 < 14; i_30 += 4) /* same iter space */
                {
                    var_44 = ((/* implicit */unsigned char) ((short) arr_69 [(_Bool)1] [(_Bool)1] [i_12] [i_12]));
                    var_45 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16252948)) ? (arr_44 [(short)0] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_87 [i_12] [i_30] [i_25] [i_12] [i_25])))))) & ((+(arr_91 [12] [9LL] [i_25] [i_25] [i_25] [i_25]))));
                }
                /* LoopNest 2 */
                for (signed char i_31 = 0; i_31 < 14; i_31 += 4) 
                {
                    for (short i_32 = 0; i_32 < 14; i_32 += 3) 
                    {
                        {
                            arr_99 [i_12] [i_32] = ((arr_45 [i_12] [i_21 + 2] [i_21 - 3] [i_21 + 2]) - (arr_45 [i_12] [i_21 - 3] [i_21 + 1] [i_21 + 1]));
                            var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) var_11))));
                            var_47 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_52 [(unsigned short)7] [(unsigned short)11] [1LL] [i_31] [i_32] [1])) < (((/* implicit */unsigned long long int) (~(-16252957))))));
                            var_48 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) : (arr_90 [i_31])))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */long long int) (+(((/* implicit */int) (!(arr_89 [i_12] [4ULL] [i_25] [i_21 + 2] [(signed char)12] [(short)7]))))));
                /* LoopNest 2 */
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    for (unsigned char i_34 = 0; i_34 < 14; i_34 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)30))));
                            arr_104 [i_34] |= 5LL;
                            var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) ((_Bool) var_0)))));
                            var_52 = ((/* implicit */_Bool) 4723784547426348976ULL);
                        }
                    } 
                } 
            }
        }
    }
}
