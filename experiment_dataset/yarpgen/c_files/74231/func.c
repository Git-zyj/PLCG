/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74231
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (16343061299879082276ULL)))) ? (var_3) : (arr_1 [i_0])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                var_13 = ((/* implicit */long long int) ((arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 3]) | (-1514879925)));
                arr_6 [i_0] [i_1] [i_2] [2LL] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1514879935)) % ((-(arr_3 [(_Bool)1] [i_1])))));
            }
            for (unsigned short i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) -1688585193))) ? (((((/* implicit */int) var_8)) / (-842161446))) : (arr_4 [i_0] [i_0])));
                /* LoopSeq 3 */
                for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    var_15 -= (+(((/* implicit */int) arr_10 [i_0])));
                    arr_11 [i_0] [i_0] [i_0] [i_1] [i_3 - 3] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))));
                    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17581))) : (34762489U)));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_15 [(signed char)8] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 2105300824)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                    var_17 *= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_3] [i_5] [i_5]);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 2; i_7 < 10; i_7 += 2) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (+((((_Bool)1) ? (((/* implicit */unsigned int) -1568643571)) : (34762506U)))));
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (-(arr_20 [i_1] [i_3 - 3] [i_7] [4ULL] [i_3] [i_7 - 2]))))));
                        arr_23 [i_0] [i_1] [(unsigned char)5] [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 15253377341630492542ULL))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_3] [3] [i_6] [i_6] [i_7]))))))))));
                        var_20 ^= ((/* implicit */unsigned int) (signed char)-22);
                    }
                    var_21 = (-(var_2));
                    var_22 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0])))))));
                }
            }
            for (short i_8 = 4; i_8 < 11; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)-23)))))));
                            arr_31 [4ULL] [i_0] = (((-(842161451))) * (((/* implicit */int) (!(((/* implicit */_Bool) -1514879936))))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (((+(var_5))) - (arr_28 [i_8 + 1] [i_1]))))));
                            var_25 &= ((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_0] [i_8 - 2] [i_8]) ^ (((/* implicit */int) arr_16 [i_8] [i_0] [i_8 - 1] [i_0] [i_1]))));
                var_27 = ((/* implicit */_Bool) arr_1 [i_0]);
                var_28 = ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
            }
            arr_32 [i_1] [i_0] [i_0] = (+(((/* implicit */int) (_Bool)0)));
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [(short)0] [i_11])) ^ (var_3))) % ((-(var_0))))))));
                arr_35 [i_0] [i_11] [i_0] = ((((/* implicit */unsigned long long int) arr_26 [i_0] [i_1])) / (var_5));
                arr_36 [i_0] [0ULL] [i_11] [i_0] = ((/* implicit */int) var_4);
            }
        }
        for (signed char i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                        {
                            var_30 = ((/* implicit */int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)4))))), (max((5U), (((/* implicit */unsigned int) (_Bool)1))))));
                            var_31 -= ((/* implicit */_Bool) var_11);
                            var_32 &= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((~(arr_38 [i_12] [i_14] [i_15]))) : (((/* implicit */int) (!(arr_39 [i_0]))))));
                            var_33 &= ((/* implicit */int) arr_10 [i_13]);
                        }
                        /* LoopSeq 1 */
                        for (int i_16 = 0; i_16 < 12; i_16 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), (9223372036854775801LL)));
                            var_35 = ((/* implicit */_Bool) arr_49 [i_0] [i_12] [i_13] [i_13]);
                            var_36 = ((/* implicit */int) ((arr_0 [i_0]) && (((((/* implicit */_Bool) (signed char)23)) && ((_Bool)1)))));
                            arr_51 [i_0] [i_12] [i_13] [(short)8] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (_Bool)1)), (10455627281467999254ULL)));
                            arr_52 [i_0] [i_12] [i_12] [i_12] = min((((/* implicit */long long int) arr_2 [i_16] [i_13] [i_12])), (((((/* implicit */_Bool) arr_13 [i_0] [i_12] [i_0] [(short)5] [i_14] [i_16])) ? (arr_25 [i_13] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_12] [i_0] [i_14] [i_16] [i_0]))))));
                        }
                    }
                } 
            } 
            var_37 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_28 [i_0] [i_12])) && (((/* implicit */_Bool) ((int) 3161896463U))))) ? (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1)))) : ((~(1759161053)))));
            /* LoopSeq 1 */
            for (long long int i_17 = 3; i_17 < 10; i_17 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_18 = 2; i_18 < 8; i_18 += 2) 
                {
                    arr_58 [i_0] [i_12] = max((max((16793237216028832263ULL), (((/* implicit */unsigned long long int) (short)-9083)))), ((+(((var_1) ? (16611984704995043287ULL) : (((/* implicit */unsigned long long int) arr_2 [i_18] [i_17] [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 1; i_19 < 9; i_19 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned short) max(((~(max((var_3), (((/* implicit */unsigned long long int) (unsigned short)33203)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_0] [i_18] [i_19])))))));
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551611ULL)) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_56 [2ULL] [i_12] [i_19 - 1] [i_18] [i_19] [i_17])))))));
                    }
                }
                /* vectorizable */
                for (short i_20 = 1; i_20 < 11; i_20 += 1) 
                {
                    arr_66 [i_0] [3ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)222)) ? ((~(-7029723608281443270LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_17] [i_17 - 3] [i_17 + 1] [i_17])))));
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_27 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_20] [i_17] [i_12] [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_20] [i_17] [i_0] [i_0] [i_12] [i_0])))))));
                }
                var_41 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 2701700212U))))) % (((((/* implicit */int) (unsigned char)18)) ^ (((/* implicit */int) (signed char)39))))));
                var_42 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_50 [i_0] [i_0] [i_17] [9LL] [i_17 - 1]), (arr_38 [i_0] [i_12] [3LL]))))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_2)))) < (min((68719468544ULL), (((/* implicit */unsigned long long int) arr_48 [i_0])))))))));
                var_43 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25015)) ? (6694848396331927733ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71))))))));
            }
            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_25 [i_0] [i_0] [(signed char)8])))) ? (((arr_25 [i_0] [i_0] [i_0]) % (arr_25 [i_12] [i_0] [10LL]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0] [i_12] [i_0]))) < (428778143U))))) + (((((/* implicit */unsigned int) var_2)) * (arr_37 [i_0]))))))));
            var_45 ^= ((/* implicit */unsigned char) (~(7835686067600418819ULL)));
        }
        for (signed char i_21 = 0; i_21 < 12; i_21 += 1) /* same iter space */
        {
            arr_69 [(unsigned char)10] &= max((arr_4 [i_0] [(signed char)10]), ((+(arr_38 [(unsigned char)9] [(unsigned char)9] [i_21]))));
            var_46 = ((/* implicit */unsigned long long int) min(((+(arr_47 [i_0] [i_0] [5] [5] [i_21] [5]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) var_11)))))) | (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
            arr_70 [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_59 [i_0] [11ULL] [i_21] [11ULL] [i_0])))) / (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_21] [i_21] [i_21])))))));
        }
        for (signed char i_22 = 0; i_22 < 12; i_22 += 1) /* same iter space */
        {
            var_47 = ((/* implicit */unsigned short) arr_14 [i_0] [i_0] [i_22]);
            var_48 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((7835686067600418819ULL), (((/* implicit */unsigned long long int) (signed char)-23))))) ? (((/* implicit */unsigned long long int) min((arr_21 [i_22] [i_0] [i_0] [i_0] [i_0]), (arr_21 [i_0] [i_0] [i_22] [4U] [i_22])))) : ((-(arr_63 [i_0] [i_22] [i_0] [i_0] [i_0] [i_0])))));
            var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (signed char)-82)))))))));
            var_50 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_26 [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))))));
        }
    }
    for (signed char i_23 = 0; i_23 < 24; i_23 += 2) 
    {
        var_51 -= ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_73 [i_23])) : (((/* implicit */int) arr_73 [10LL])))) < (((/* implicit */int) arr_73 [i_23])))))));
        var_52 &= arr_73 [10ULL];
    }
    for (unsigned long long int i_24 = 1; i_24 < 21; i_24 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_25 = 0; i_25 < 23; i_25 += 1) 
        {
            for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_27 = 2; i_27 < 22; i_27 += 1) 
                    {
                        for (short i_28 = 0; i_28 < 23; i_28 += 1) 
                        {
                            {
                                arr_90 [i_24] [i_25] [i_26] [17U] [i_28] = ((/* implicit */unsigned int) (!((((!(((/* implicit */_Bool) arr_82 [i_24] [i_24] [i_24] [i_24])))) && (((/* implicit */_Bool) arr_87 [i_24] [i_25] [i_24] [i_24 - 1] [i_24] [i_24 - 1]))))));
                                var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_83 [5] [18LL] [0ULL] [5]))))))))))));
                                var_54 = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_78 [i_25] [i_25] [i_26 - 1])) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)7755)))) : (((-984286206) & (1336609198)))));
                }
            } 
        } 
        arr_91 [i_24] [14U] = ((/* implicit */signed char) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_24]))) * (var_5))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4382388487964718006ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_75 [i_24])))) : ((+(arr_80 [i_24]))))))));
        var_56 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) arr_75 [i_24 + 1])), ((-(7608532711965669128ULL))))), (((/* implicit */unsigned long long int) arr_77 [i_24] [i_24]))));
    }
    for (unsigned long long int i_29 = 1; i_29 < 21; i_29 += 3) /* same iter space */
    {
        arr_96 [i_29] [i_29] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-103))));
        var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) var_8))));
    }
    var_58 = ((/* implicit */signed char) (unsigned short)56643);
    /* LoopNest 2 */
    for (unsigned long long int i_30 = 0; i_30 < 12; i_30 += 3) 
    {
        for (unsigned char i_31 = 0; i_31 < 12; i_31 += 1) 
        {
            {
                var_59 = ((/* implicit */int) min((var_59), (((/* implicit */int) arr_13 [i_30] [i_30] [4U] [4U] [i_30] [i_30]))));
                arr_101 [i_31] = var_11;
            }
        } 
    } 
    var_60 = ((/* implicit */long long int) 10838211361743882487ULL);
}
