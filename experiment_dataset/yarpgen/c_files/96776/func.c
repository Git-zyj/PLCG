/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96776
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_19 *= ((/* implicit */unsigned short) arr_0 [i_0]);
        var_20 = ((/* implicit */_Bool) (unsigned char)115);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)141)), ((short)-32749)));
                        arr_16 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) arr_2 [i_4]);
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_1] [i_1])), (((((/* implicit */_Bool) (unsigned short)26295)) ? (949859515) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1]))))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) 18415323770132196521ULL)))), ((!(((/* implicit */_Bool) (unsigned short)33006))))))) : (var_7));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(var_14))))));
        arr_18 [i_1] = ((/* implicit */unsigned char) var_4);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)115))))))), ((!(((/* implicit */_Bool) ((arr_20 [i_5] [(unsigned short)5]) ? (var_5) : (((/* implicit */unsigned long long int) -1626711468)))))))));
        arr_22 [i_5] = ((/* implicit */_Bool) arr_0 [i_5]);
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 557764785)) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_10))))))) ? ((+(var_13))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-64)), (-1626711468))))));
        var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((arr_2 [i_5]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_5])))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (_Bool)1))));
        var_26 = (short)32765;
        /* LoopSeq 1 */
        for (signed char i_7 = 1; i_7 < 8; i_7 += 4) 
        {
            arr_27 [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)126))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 3; i_9 < 8; i_9 += 3) 
                {
                    {
                        var_27 = ((/* implicit */signed char) max(((unsigned short)23050), (((/* implicit */unsigned short) (_Bool)0))));
                        var_28 = ((/* implicit */unsigned long long int) -640072596);
                        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)-39)) : (min((((/* implicit */int) var_18)), (-949859516))))))));
                    }
                } 
            } 
            arr_33 [i_6] [i_7] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_6] [(signed char)6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)143))))) : (((/* implicit */int) min((arr_19 [i_7]), (((/* implicit */short) var_9))))))), (((/* implicit */int) arr_2 [i_6]))));
            /* LoopNest 2 */
            for (signed char i_10 = 2; i_10 < 9; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_19 [i_10])), (var_17)))))) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) var_6))));
                        arr_39 [i_6] [i_7 - 1] [i_10] [i_10 - 1] [i_6] = ((((/* implicit */_Bool) arr_1 [i_7] [11ULL])) ? (((/* implicit */unsigned long long int) -307170371)) : (((((/* implicit */_Bool) (unsigned char)147)) ? (14299446845730471266ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4096))))));
                    }
                } 
            } 
            var_31 += ((/* implicit */_Bool) (~(arr_14 [i_6] [i_6] [(signed char)12] [i_7] [i_7] [i_7])));
        }
        arr_40 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */int) (unsigned short)23045)), (949859539))) : (((/* implicit */int) var_16))))));
    }
    /* LoopSeq 2 */
    for (short i_12 = 0; i_12 < 11; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_13 = 1; i_13 < 10; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        var_32 = var_11;
                        /* LoopSeq 1 */
                        for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            arr_54 [i_12] [i_12] [i_13] [i_13] [i_12] [(short)3] [i_16] = ((var_9) ? ((~(((((/* implicit */_Bool) 1626711462)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_14 [i_12] [i_13] [i_12] [i_12] [i_15] [i_16]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                            var_33 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 67108832)) ? (((((/* implicit */_Bool) 13274523649073262397ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22143))) : (((((/* implicit */_Bool) -1974372368)) ? (((/* implicit */unsigned long long int) -1974372368)) : (arr_41 [i_15]))))) : (((/* implicit */unsigned long long int) -1626711468))));
                            var_34 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_3)));
                        }
                    }
                    arr_55 [i_12] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1974372361))));
                    var_35 *= ((/* implicit */_Bool) ((arr_52 [i_13] [i_13]) ? (min(((-(((/* implicit */int) arr_11 [(short)14])))), (2096516143))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4071))))));
                }
            } 
        } 
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_12])) ? (((/* implicit */int) var_18)) : ((~(((/* implicit */int) (unsigned short)16352))))))) ? (arr_14 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) (+(6319686048971713429LL))))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 18; i_17 += 3) 
    {
        arr_59 [(unsigned short)9] = ((/* implicit */long long int) var_7);
        arr_60 [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)4086)) ? (45726467598111727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_17])))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_18 = 0; i_18 < 15; i_18 += 3) /* same iter space */
    {
        arr_63 [i_18] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 949859531)) ? (((((/* implicit */_Bool) arr_13 [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */int) arr_8 [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_1 [(unsigned short)14] [(unsigned short)14])))) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : ((~((~(((/* implicit */int) arr_6 [i_18] [i_18])))))));
        arr_64 [i_18] [i_18] = ((/* implicit */int) (!(var_12)));
        arr_65 [(_Bool)1] [i_18] = ((/* implicit */unsigned short) arr_10 [i_18] [i_18] [i_18] [i_18]);
        var_37 = ((/* implicit */unsigned short) arr_1 [i_18] [i_18]);
    }
    for (unsigned int i_19 = 0; i_19 < 15; i_19 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_20 = 0; i_20 < 15; i_20 += 3) 
        {
            for (int i_21 = 0; i_21 < 15; i_21 += 2) 
            {
                {
                    var_38 = ((/* implicit */int) max((var_38), ((+(((/* implicit */int) (unsigned char)56))))));
                    var_39 = ((/* implicit */short) min((((/* implicit */unsigned long long int) -2087742406)), (min(((~(arr_70 [i_19]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32755)))))))));
                    var_40 = ((/* implicit */long long int) var_18);
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 0; i_22 < 15; i_22 += 2) 
                    {
                        for (short i_23 = 4; i_23 < 14; i_23 += 2) 
                        {
                            {
                                var_41 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_66 [i_19] [i_23])) : (((((/* implicit */_Bool) var_16)) ? (1038684032) : (((/* implicit */int) arr_56 [i_22] [i_23 + 1])))))), (max((((((/* implicit */_Bool) arr_8 [i_19] [i_21] [i_23])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) arr_72 [i_23 - 4] [i_22] [i_20])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                                var_42 &= ((/* implicit */signed char) (unsigned char)241);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_24 = 2; i_24 < 14; i_24 += 1) 
        {
            arr_80 [(short)10] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_79 [i_19] [i_19] [i_24 + 1])))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_19])), (12130385663849774808ULL)))) ? (23) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_3 [(unsigned short)2] [i_24])) : (((/* implicit */int) (short)-3833)))))) : (((/* implicit */int) arr_1 [14] [23]))));
            arr_81 [(_Bool)0] [(unsigned short)10] [i_24] &= ((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [(short)0] [(short)0])) ? (((/* implicit */int) (short)-15236)) : (((/* implicit */int) (unsigned short)2044))))) ? (((((/* implicit */_Bool) (short)-8192)) ? (8781668978656011993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16352)))))));
        }
        for (int i_25 = 0; i_25 < 15; i_25 += 2) 
        {
            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) var_12))));
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 15; i_26 += 1) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    {
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2088235806)))) ? (((/* implicit */int) arr_8 [i_19] [i_25] [i_19])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_71 [i_19] [i_19]))));
                        var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                    }
                } 
            } 
        }
    }
}
