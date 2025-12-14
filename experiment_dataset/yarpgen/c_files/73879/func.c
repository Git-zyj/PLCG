/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73879
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
    var_17 ^= ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_19 -= ((/* implicit */long long int) ((short) (~((~(1U))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_4 = 3; i_4 < 13; i_4 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) ((var_14) ? (((/* implicit */int) ((16920625631576732045ULL) > (((/* implicit */unsigned long long int) var_13))))) : (var_2)));
                            var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (short)-30666)))))));
                            var_22 = ((/* implicit */long long int) 2267679818818651061ULL);
                        }
                        for (signed char i_5 = 3; i_5 < 13; i_5 += 3) /* same iter space */
                        {
                            var_23 ^= min((min((((/* implicit */long long int) (_Bool)1)), (7571948061529980210LL))), (((/* implicit */long long int) ((signed char) (-(((/* implicit */int) var_1)))))));
                            var_24 = ((/* implicit */short) var_13);
                            arr_17 [i_5] [i_2] [i_2] [i_3] [i_2] = (short)30658;
                            arr_18 [i_5] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (short)31048);
                        }
                        /* vectorizable */
                        for (signed char i_6 = 3; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            arr_21 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) (~(arr_3 [i_2 + 1] [i_6 - 2] [i_6 - 1])));
                            var_25 *= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */int) var_1))))));
                            var_26 = ((/* implicit */unsigned long long int) var_0);
                        }
                        for (signed char i_7 = 3; i_7 < 13; i_7 += 3) /* same iter space */
                        {
                            arr_25 [i_2] [i_2] = ((/* implicit */long long int) arr_9 [i_2] [i_3] [i_2] [i_1] [i_0] [i_2]);
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_23 [i_0]), (arr_3 [i_0] [i_0] [i_2])))) ? (var_6) : (arr_0 [i_1] [i_1])));
                            arr_26 [i_0] [i_2] [i_2] [i_2] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 217905799)) ? (1526118442132819570ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5106)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))) : (6576801840055209833LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (var_10)))) ? (((/* implicit */long long int) ((unsigned int) var_9))) : ((+(var_5))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2])) ? (arr_0 [i_2 + 3] [i_7]) : (arr_0 [i_2 + 3] [i_2 + 3]))))));
                        }
                        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) : (var_4)));
                    }
                    for (unsigned short i_8 = 3; i_8 < 11; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */long long int) (-((((_Bool)1) ? (112332738404814035ULL) : (((/* implicit */unsigned long long int) 974969107U))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (arr_28 [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_32 [i_9] [i_8] [i_1] [i_1] [(signed char)8] [i_1] [i_0])) > (((/* implicit */int) arr_5 [i_2] [i_0 + 2] [i_2])))))) : (((((/* implicit */long long int) ((/* implicit */int) var_14))) + (var_5)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((217905806) | (((/* implicit */int) (_Bool)0))))) ? (((unsigned int) 1908671207)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_8] [i_9])) ? (var_2) : (var_2))))))) : (var_9)));
                            var_31 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) << (((var_5) + (2902134522536431072LL)))))) ? (max((var_10), (arr_22 [i_0] [i_1] [i_2] [i_8] [i_9]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_2] [i_8] [i_9])))))))), (((((((/* implicit */_Bool) (short)15921)) ? (((/* implicit */unsigned long long int) -8250343073545951242LL)) : (1526118442132819570ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 6576801840055209833LL))))))));
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) 1890377788U)) ? (4950139335539062181ULL) : (((/* implicit */unsigned long long int) var_13)))))))))));
                            var_33 ^= ((/* implicit */unsigned int) var_3);
                            arr_33 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) var_13)) & ((~(var_4))))) << (((max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (var_10) : (((/* implicit */long long int) var_6))))))) - (18446744072519858228ULL)))));
                        }
                        for (unsigned char i_10 = 2; i_10 < 13; i_10 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)30668))));
                            arr_38 [i_2] [i_2] = ((/* implicit */int) ((((unsigned int) var_0)) * (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-30668)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */int) (short)11029)))))))));
                            arr_39 [i_0] [i_1] [i_10 + 1] [i_8] [i_10] [i_2] = ((/* implicit */long long int) ((arr_16 [i_10] [i_2] [i_2] [i_1]) <= (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_2] [i_2])))));
                            var_35 = ((/* implicit */short) (~((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_1] [i_2] [i_8] [i_10]))) | (var_4)))))));
                        }
                        for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            var_36 = ((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2] [i_1]);
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-5610)) ? (((/* implicit */int) (short)30668)) : (((/* implicit */int) (short)15921))));
                            var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [(short)4] [i_0] [i_0] [i_0])) ? (((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [4] [i_1] [4]))))) | (((((/* implicit */_Bool) var_10)) ? (-2955756652330294342LL) : (((/* implicit */long long int) arr_23 [i_2])))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-22815)))));
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (-(18446744073709551615ULL)));
                            var_39 = ((/* implicit */short) (+(var_3)));
                        }
                        for (int i_12 = 4; i_12 < 14; i_12 += 1) 
                        {
                            var_40 = ((/* implicit */int) min((var_8), (((/* implicit */short) var_7))));
                            var_41 = ((/* implicit */unsigned long long int) var_13);
                            var_42 = ((/* implicit */unsigned long long int) min((((unsigned int) var_7)), ((-(arr_0 [i_8 + 2] [i_0])))));
                            arr_45 [i_0] [i_1] [i_2] [i_8 + 2] [i_12 - 1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((int) arr_2 [i_12] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30666)))))) ? ((~(18334411335304737581ULL))) : (((/* implicit */unsigned long long int) ((115539053U) * (1196695532U))))))));
                            var_43 = arr_6 [i_12] [i_8] [i_1] [i_0];
                        }
                        var_44 = ((/* implicit */int) (~(-4516194313524488183LL)));
                        var_45 -= ((/* implicit */unsigned int) arr_27 [i_0] [i_2] [i_8]);
                        arr_46 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_36 [i_0] [i_1] [i_2] [i_2] [i_2] [i_8 + 2]) : (((/* implicit */unsigned int) var_2))))) ? ((~(((/* implicit */int) (short)-19235)))) : ((~(((/* implicit */int) var_8))))))) ? (((int) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2] [i_8])) : (18446744073709551615ULL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3)))))));
                    }
                    for (int i_13 = 3; i_13 < 12; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_14 = 4; i_14 < 11; i_14 += 3) 
                        {
                            arr_52 [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2955756652330294350LL)) ? (3419383677U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24747)))));
                            arr_53 [i_0 + 3] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_44 [i_14] [i_13] [i_2] [i_1] [i_1] [i_0 + 2] [i_0])))) : (((((/* implicit */_Bool) 400169109U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30668)))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            arr_57 [i_2] = ((/* implicit */int) var_8);
                            arr_58 [i_0] [i_0] [i_2 + 2] [i_2] [i_15] [i_13] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_0] [2] [i_2] [i_2 - 1] [i_13 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (arr_55 [i_0] [i_0] [i_13] [i_15])));
                            var_46 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_55 [i_15] [i_13 - 3] [i_2] [i_1])) : (((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_1] [i_0] [i_13] [i_15])) ? (((/* implicit */unsigned long long int) var_2)) : (8554534275152988861ULL))));
                            arr_59 [i_0] [i_1] [i_1] [i_2] [i_13 + 2] [i_0] [i_15] = ((((/* implicit */_Bool) ((signed char) arr_8 [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((72057594037919744LL) * (((/* implicit */long long int) ((/* implicit */int) var_11))))));
                        }
                        var_47 += ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8143397646730904391ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1872119380U)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((short) var_5)))));
                        var_48 = ((/* implicit */_Bool) ((unsigned long long int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))))));
                        var_49 = (!(((/* implicit */_Bool) var_16)));
                        var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17047731528583773170ULL)) ? (7360992077190348738ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2934)))))) ? (max((arr_31 [i_2] [i_0] [i_1] [i_0] [i_2]), (arr_31 [i_2] [i_2 + 3] [i_2] [i_2 + 3] [i_2]))) : (((((/* implicit */long long int) var_4)) & (var_5)))));
                    }
                    var_51 ^= ((/* implicit */unsigned char) ((var_16) < (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)17778))) : (2LL)))));
                }
            } 
        } 
    } 
}
