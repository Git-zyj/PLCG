/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90192
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
    var_14 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_11))))))) : (((((3912129606280469367ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28825))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) > (2027418133U)))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */int) (short)-2352)) & (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3])) ? (((((/* implicit */_Bool) 7410108363578878040ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_3] [8U] [i_0])))) : (((((/* implicit */int) arr_2 [i_0] [(unsigned short)2] [i_0])) >> (((var_0) - (2541753362U)))))))));
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0]))))) < (((/* implicit */int) (unsigned char)195)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [(signed char)8] [(signed char)8]))) : (((arr_7 [i_0] [i_2] [i_2] [i_3] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) > (var_6)))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (arr_8 [i_1] [i_4])));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_15 [i_5] [i_5] [i_4] [(_Bool)0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */long long int) 2288713005U)) == (6180140619217492836LL)))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((_Bool) ((-419443134959084647LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_19 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) (short)-28272)) : (((/* implicit */int) (unsigned char)179)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) ((((_Bool) var_13)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_0))) : (((unsigned int) (_Bool)0))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned int) ((unsigned short) (unsigned short)1464))))));
                            var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3950044071U))))) : (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) var_3))))))));
                            var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || ((_Bool)1)));
                        }
                        var_24 = ((/* implicit */unsigned int) var_5);
                        arr_21 [i_0] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */short) (_Bool)1);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [(short)9] [(short)9]);
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((unsigned int) (unsigned char)217))));
                        arr_25 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-5527)) ? (((/* implicit */long long int) 67108860)) : (((long long int) var_13))));
                        var_26 = ((/* implicit */int) 7410108363578878040ULL);
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            {
                                arr_32 [i_0] [i_10] [i_0] [i_9] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_10])))))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) var_10))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (var_1))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (10104028471686116088ULL)))) ? (344923224U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_10))));
                                arr_33 [i_10] [i_0] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)225))))) ? ((-(((/* implicit */int) (unsigned char)56)))) : (((((/* implicit */_Bool) 16316057603637787200ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)131)))))), (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)193)) < (((/* implicit */int) (signed char)9))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) 2288713018U))))))));
        var_29 &= (((!(((/* implicit */_Bool) ((unsigned int) var_4))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (min((((/* implicit */unsigned int) var_5)), (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)117))));
    }
    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        var_30 ^= ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((long long int) arr_36 [(short)0])))) | (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_34 [(signed char)8])) : (((/* implicit */int) var_9)))))))));
        var_31 -= ((9745878202699235976ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39837))));
        var_32 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) max((6523983130130193435ULL), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) arr_34 [i_11])) : (((((/* implicit */int) arr_36 [i_11])) + (((/* implicit */int) var_13)))))));
    }
    for (short i_12 = 0; i_12 < 16; i_12 += 4) 
    {
        var_33 = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((var_2) + (4776210986014999361LL)))))) <= (var_1))));
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            for (short i_14 = 2; i_14 < 13; i_14 += 2) 
            {
                {
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7410108363578878018ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29568))) : (var_2)))) ? (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((arr_39 [i_12] [i_12]) - (3618006928U))))))))) ? (((unsigned long long int) ((((/* implicit */int) (unsigned char)140)) + (((/* implicit */int) (short)32766))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned char)62)), (2006254296U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7))))))))));
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_38 [i_12]))) ? (((/* implicit */int) ((arr_38 [i_12]) == (((/* implicit */unsigned long long int) 2423387893U))))) : (((((((/* implicit */int) arr_42 [i_12] [i_13] [i_14] [6U])) + (2147483647))) >> (((((/* implicit */int) arr_42 [i_14] [i_12] [i_12] [i_12])) + (19284)))))));
                    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((unsigned char) (~(((/* implicit */int) ((signed char) 108086391056891904LL)))))))));
                    arr_44 [(unsigned char)11] [1U] [i_14 + 3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) (unsigned char)14)))))) * (((/* implicit */int) ((short) arr_41 [i_14 - 2])))));
                    arr_45 [(short)5] [i_13] [i_12] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_11) : (((/* implicit */int) (unsigned short)14906))))) ? (((/* implicit */unsigned long long int) 589969215385702370LL)) : (((((/* implicit */_Bool) (short)-687)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_14]))) : (11036635710130673593ULL))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_15])) ? (var_6) : (var_0)));
        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) arr_47 [i_15])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))));
        var_39 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_8))))));
        arr_48 [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_47 [i_15]) < (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) <= (arr_47 [i_15])));
        arr_49 [4LL] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_12)))) ? (993327692U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_16 = 1; i_16 < 11; i_16 += 2) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            {
                var_40 -= ((/* implicit */short) var_9);
                arr_54 [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((2027418133U), (((/* implicit */unsigned int) (unsigned short)56002)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_17])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) : ((-(8700865871010315640ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_47 [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (2288713005U))) : (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                var_41 -= ((/* implicit */unsigned long long int) var_9);
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 2; i_19 < 12; i_19 += 4) 
                    {
                        {
                            var_42 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_52 [i_16] [i_16])) : (((/* implicit */int) (unsigned char)127))))) || (((/* implicit */_Bool) min((arr_46 [i_18]), (((/* implicit */long long int) var_11))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_34 [i_19])) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4400))) : (((((/* implicit */_Bool) var_5)) ? (3460831473U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (((unsigned long long int) var_6))));
                            arr_61 [i_17] = ((/* implicit */short) ((unsigned long long int) min((min((((/* implicit */unsigned int) arr_58 [i_18] [i_18] [i_17])), (var_0))), (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned char) 13071773089391286371ULL);
}
