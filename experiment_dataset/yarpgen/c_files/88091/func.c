/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88091
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [1U] [i_0] [8U] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)10031))));
                    var_17 = var_13;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_0] [(unsigned short)1]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10031)))))) ? (((((/* implicit */_Bool) (short)2627)) ? (((/* implicit */long long int) var_15)) : (var_11))) : (((/* implicit */long long int) arr_4 [i_1 - 1] [(unsigned short)7]))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 3] [i_2 + 2]))) : (arr_5 [i_0] [i_0] [i_1])));
                        var_19 |= ((/* implicit */unsigned short) ((arr_9 [i_1 + 1] [i_0]) / (arr_9 [i_1 - 3] [i_0])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_16 [i_4] [i_1] |= ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned short)65535)), (arr_12 [i_0] [i_1 + 2] [i_0] [i_5])));
                            arr_17 [7LL] [i_4] [i_2] [i_1 + 2] [i_4] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1 - 2] [i_2 + 2])) % (((((/* implicit */_Bool) (short)-2627)) ? (((/* implicit */int) (unsigned short)16320)) : (((/* implicit */int) (unsigned short)15))))))) : (((((long long int) (short)-12271)) % (((/* implicit */long long int) ((1194591764) >> (((((/* implicit */int) (unsigned short)65520)) - (65507))))))))));
                            var_20 ^= ((/* implicit */short) (unsigned short)49215);
                            var_21 |= ((/* implicit */short) arr_3 [(unsigned short)10] [i_4]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)248))))), (max((((/* implicit */unsigned int) (short)12270)), (var_3)))))) ? (((((/* implicit */_Bool) 25U)) ? (arr_5 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) min(((+(517738576U))), (arr_9 [i_2 + 3] [i_1]))))));
                            var_23 = (short)-25;
                            arr_20 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2 + 2] [4U] [(short)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_12 [i_0] [i_2 - 1] [i_1] [11LL])))) + (arr_15 [i_0] [i_1] [i_2] [i_6])))));
                            var_24 = ((/* implicit */short) (((((!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))) || (((/* implicit */_Bool) (+(4210110744U)))))) ? (((/* implicit */long long int) ((unsigned int) (short)2627))) : (min((arr_3 [i_0] [i_1]), (arr_3 [i_1] [i_1])))));
                            arr_21 [(short)8] [i_1] = ((/* implicit */short) (unsigned short)10031);
                        }
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_25 &= ((/* implicit */short) max((min((((((/* implicit */_Bool) -1194591764)) ? (((/* implicit */long long int) 1460597711U)) : (arr_3 [0LL] [i_4]))), (((/* implicit */long long int) ((((/* implicit */int) (short)21563)) / (993637126)))))), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) 3113953925558806457LL)))), ((!(((/* implicit */_Bool) (unsigned short)23518)))))))));
                            var_26 -= ((/* implicit */short) arr_24 [i_7]);
                        }
                        var_27 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                    }
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((arr_22 [9U] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_2] [i_2 + 1] [i_0] [i_1] [2LL])) != (((/* implicit */int) arr_23 [(short)10] [i_2 + 2] [i_0] [i_2] [i_2])))))))))));
                }
            } 
        } 
        var_29 *= (-(arr_9 [i_0] [i_0]));
        var_30 = ((/* implicit */unsigned int) min((-3113953925558806474LL), (((/* implicit */long long int) 84856552U))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            arr_31 [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_25 [i_8])) && (((/* implicit */_Bool) arr_25 [i_9])))) ? (min((min((arr_27 [i_9] [(short)2]), (((/* implicit */unsigned long long int) 4889856737135526133LL)))), (((/* implicit */unsigned long long int) (short)24)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_29 [i_8] [5LL])), (var_9)))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_30 [9U])), (-91240065))))))))));
            var_31 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_8] [i_9])) && (((/* implicit */_Bool) arr_25 [i_9]))))), (min((arr_27 [i_9] [i_8]), (((/* implicit */unsigned long long int) 91240057)))))), (((/* implicit */unsigned long long int) (~(min((var_8), (2505234886U))))))));
        }
        for (short i_10 = 1; i_10 < 18; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (short i_11 = 2; i_11 < 18; i_11 += 3) 
            {
                for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    {
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (short)15247)) : (((/* implicit */int) (unsigned short)10))))) + (((arr_35 [i_12] [i_12] [i_12] [i_8]) + (((/* implicit */unsigned long long int) arr_36 [i_12] [i_10] [i_11] [(unsigned short)14])))))) + (((/* implicit */unsigned long long int) (-(1557407144)))))))));
                        arr_41 [i_10] [i_12] = ((/* implicit */unsigned short) (+(arr_37 [i_10])));
                        arr_42 [i_8] [i_10] [i_11] [19LL] = ((/* implicit */unsigned short) arr_39 [i_8] [i_10] [i_11] [i_12]);
                    }
                } 
            } 
            arr_43 [i_10] [(unsigned short)4] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)65525)) ? (arr_28 [i_8] [i_10]) : (1676446216U)))))) ? (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) arr_38 [i_8] [(unsigned short)13] [(short)18] [i_10]))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29973))) : (arr_37 [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) (short)-21800))))) : (max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_37 [i_10])))))));
        }
        var_33 = ((/* implicit */unsigned int) ((short) max((((/* implicit */signed char) ((arr_27 [i_8] [i_8]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_8] [i_8] [17U] [i_8])))))), (min(((signed char)8), (arr_26 [(short)19] [(unsigned short)4]))))));
    }
    for (long long int i_13 = 1; i_13 < 18; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            for (short i_15 = 0; i_15 < 19; i_15 += 3) 
            {
                {
                    var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) -8051119300385920144LL))) && ((((!(((/* implicit */_Bool) 0U)))) || (((/* implicit */_Bool) arr_39 [i_13 + 1] [8U] [8U] [i_13]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        var_35 = ((/* implicit */int) min((((/* implicit */long long int) max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_13] [i_15]))) : (var_10))), (((/* implicit */unsigned int) arr_34 [i_13] [i_13]))))), ((-(((((/* implicit */_Bool) 0U)) ? (5267613917884015996LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))));
                        arr_56 [i_13] = ((/* implicit */signed char) ((max((arr_36 [i_13] [i_13 + 1] [i_13 + 1] [11ULL]), (arr_53 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_15] [i_15] [i_16]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((arr_53 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_16] [i_13 + 1] [18U]) < (arr_53 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13] [i_14])))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) /* same iter space */
                        {
                            arr_60 [i_17] [i_13] [i_16] [i_13 - 1] [i_13] [i_13 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3174290726U)) ? (((/* implicit */unsigned long long int) -990180890)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_13] [i_14]))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_27 [(short)12] [(unsigned short)6])))))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_17] [i_15] [11LL] [(unsigned short)11])) || (((/* implicit */_Bool) max((arr_59 [i_13]), (3736668936U))))));
                            var_37 = ((/* implicit */int) (-((~(max((8051119300385920152LL), (((/* implicit */long long int) (short)7))))))));
                            arr_61 [i_16] [i_15] [i_15] [(signed char)9] [i_13] [6U] [9] = arr_38 [i_13] [i_14] [i_15] [i_16];
                        }
                        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 1) /* same iter space */
                        {
                            arr_65 [i_18] [i_16] [i_13] &= ((/* implicit */long long int) var_2);
                            var_38 = ((/* implicit */int) min((((/* implicit */long long int) (~(((/* implicit */int) max((arr_30 [(short)10]), (((/* implicit */unsigned short) (short)32767)))))))), (((((/* implicit */long long int) (~(arr_25 [i_13])))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52103))) : (var_9)))))));
                            arr_66 [i_13] = -3113953925558806495LL;
                        }
                        for (unsigned short i_19 = 4; i_19 < 17; i_19 += 1) 
                        {
                            arr_69 [i_13] [(short)13] [(short)13] [i_13] [i_19] = ((/* implicit */short) var_5);
                            var_39 = ((min((((/* implicit */long long int) (signed char)-118)), (-3113953925558806476LL))) / (-8703413812859996238LL));
                        }
                        for (long long int i_20 = 0; i_20 < 19; i_20 += 4) 
                        {
                            var_40 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_47 [i_13 - 1] [i_13])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 6084688452897307463LL)) == (11195946376098851593ULL)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)31192)) : (((/* implicit */int) (short)32767)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_67 [i_13] [i_14] [i_13])) : (((/* implicit */int) ((((/* implicit */_Bool) -6084688452897307464LL)) || (((/* implicit */_Bool) var_9)))))))));
                            arr_72 [i_16] |= ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_70 [i_13] [(signed char)16] [i_15] [i_16] [i_16] [i_20])) - (((/* implicit */int) var_12))))), (arr_35 [i_13 - 1] [i_13] [i_20] [i_13])))));
                            arr_73 [i_13] [i_13] = ((/* implicit */unsigned int) -990180895);
                        }
                        var_41 ^= ((/* implicit */unsigned int) max(((~((+(var_5))))), (((/* implicit */long long int) arr_71 [i_16] [i_16]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_21 = 1; i_21 < 18; i_21 += 1) 
                        {
                            arr_77 [i_13] [i_14] [i_15] [i_15] [(short)16] [i_13] [i_15] = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) arr_55 [i_13] [i_14] [i_15] [i_16] [8LL]))))))));
                            var_42 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) arr_52 [i_16]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_21] [i_21 - 1]))) : (((long long int) arr_51 [i_16])))))));
                            var_43 = ((/* implicit */short) ((((/* implicit */long long int) min((var_15), (((/* implicit */unsigned int) max((arr_40 [i_13 - 1] [i_13 - 1] [i_16] [i_13] [i_21 + 1]), (((/* implicit */int) arr_30 [i_16])))))))) ^ ((~(var_11)))));
                        }
                        for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 1) 
                        {
                            arr_81 [i_13] [(short)16] [16ULL] [i_15] [10ULL] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(4294967274U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)18321)))))))) || (((/* implicit */_Bool) ((arr_68 [i_13]) & (max((((/* implicit */unsigned long long int) arr_67 [i_13] [i_15] [i_22])), (arr_68 [i_13]))))))));
                            arr_82 [i_13] [i_13] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_25 [i_13 + 1])) ? (arr_25 [i_13 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_13 + 1] [i_16])))))));
                            var_44 -= ((/* implicit */unsigned int) (short)-32747);
                            arr_83 [i_13] [15LL] [i_13] [i_13] [6LL] = ((/* implicit */short) var_1);
                        }
                        for (int i_23 = 0; i_23 < 19; i_23 += 4) 
                        {
                            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_13 - 1] [i_14] [i_15] [i_15] [i_23] [i_14])) ? (((/* implicit */int) arr_70 [12LL] [i_16] [i_15] [i_14] [i_16] [i_13])) : (((/* implicit */int) arr_70 [i_13 - 1] [i_14] [i_15] [i_15] [i_16] [i_23]))))) ? (max((((/* implicit */unsigned int) (short)-3)), ((~(arr_47 [i_14] [i_16]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(4198654813U))) > (((/* implicit */unsigned int) min((arr_62 [i_23]), (((/* implicit */int) (short)-3)))))))))));
                            var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-11631))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_4)), ((-(((/* implicit */int) (short)1792))))))) : (var_11)));
                            var_47 += ((/* implicit */short) ((((/* implicit */_Bool) 4198654813U)) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) 6084688452897307464LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))))) : (-990180895)));
                            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) arr_86 [i_13] [i_14])) ? (arr_33 [i_13] [i_13]) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967288U))))), (((((/* implicit */_Bool) arr_37 [i_13])) ? (2483091792U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))))));
                            var_49 = ((/* implicit */long long int) min((max(((short)-14186), (((/* implicit */short) arr_48 [i_13 - 1] [i_13 + 1])))), (((/* implicit */short) ((((/* implicit */int) arr_52 [i_13])) == (((/* implicit */int) arr_55 [i_13 - 1] [2LL] [i_13 - 1] [i_13 + 1] [i_13 - 1])))))));
                        }
                    }
                }
            } 
        } 
        arr_87 [(short)16] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_49 [i_13 - 1] [(short)3] [i_13 - 1])))));
    }
    var_50 ^= ((/* implicit */long long int) (-(var_10)));
}
