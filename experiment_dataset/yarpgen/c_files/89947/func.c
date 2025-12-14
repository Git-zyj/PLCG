/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89947
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
    var_14 = ((/* implicit */short) var_13);
    var_15 += ((/* implicit */long long int) (unsigned short)4566);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0 + 2]))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = (+(var_7));
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 + 2])) + (((((/* implicit */int) var_4)) + (((/* implicit */int) var_0))))));
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (arr_6 [(short)7] [i_2 - 1] [(short)9] [i_0 - 1])));
                }
            } 
        } 
        arr_10 [i_0 + 3] = ((/* implicit */short) arr_3 [i_0] [i_0] [i_0]);
        arr_11 [i_0] = ((/* implicit */short) ((arr_6 [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2]) << (((arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 3]) - (952514788903021632LL)))));
    }
    for (int i_3 = 1; i_3 < 22; i_3 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */int) (+(min((((/* implicit */long long int) var_0)), (arr_5 [(short)8] [i_3 - 1] [(short)17])))));
        var_19 = ((((/* implicit */_Bool) 5378803800470396284LL)) ? (3043477830781475054LL) : (3043477830781475059LL));
        var_20 = var_8;
        arr_15 [i_3] = var_8;
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 + 3] [i_4]))) + (2806210720008034186LL))))))));
            var_22 = (-(min((((/* implicit */long long int) arr_14 [i_4] [i_3 + 2])), (-5186161310277995176LL))));
        }
        for (short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            arr_20 [i_3] = (~((~(-3043477830781475054LL))));
            /* LoopSeq 3 */
            for (long long int i_6 = 1; i_6 < 23; i_6 += 4) 
            {
                arr_23 [i_3] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_3 - 1] [i_3 - 1] [i_3 + 2])) || (((/* implicit */_Bool) var_8)))) ? (-8854861989510903138LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 2] [i_6 + 1])))))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    for (unsigned short i_8 = 1; i_8 < 23; i_8 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) max((min((var_3), (((/* implicit */int) (unsigned short)0)))), ((~(((/* implicit */int) (short)26906))))));
                            arr_30 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((min((arr_4 [i_6]), (((/* implicit */long long int) var_12)))) + (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3 + 1] [i_6 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16587))))))));
                            var_24 = ((((((arr_22 [i_3] [i_5] [i_7] [i_8 + 2]) ^ (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (9223372036854775807LL))) >> ((((~(arr_22 [i_3 + 2] [i_5] [i_7] [i_8 - 1]))) + (5006098311876830247LL))));
                        }
                    } 
                } 
            }
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_5))))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-(((-8259717972389422017LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-32756))))))))));
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 2] [i_3 + 2]))) : (arr_6 [i_3 - 1] [i_3 - 1] [(short)24] [i_3])))))))));
            }
            for (unsigned short i_10 = 3; i_10 < 22; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_11 = 1; i_11 < 22; i_11 += 3) 
                {
                    var_28 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_10 + 3])) && (((/* implicit */_Bool) (+(var_12))))))), ((-((-(arr_29 [i_10 + 1] [i_10] [i_10 + 1] [i_5] [i_3] [i_3])))))));
                    var_29 = ((/* implicit */long long int) arr_1 [(short)21] [i_5]);
                    /* LoopSeq 4 */
                    for (short i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        arr_40 [i_11] [i_11 - 1] [i_10 - 2] [i_5] [i_11] = ((/* implicit */int) (unsigned short)0);
                        arr_41 [i_3] [i_3] [i_3] [i_3] [i_3] [i_11] = ((/* implicit */unsigned short) arr_3 [i_3] [i_3 + 2] [i_3]);
                    }
                    for (unsigned short i_13 = 3; i_13 < 23; i_13 += 2) 
                    {
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) (short)32749)) ? (((/* implicit */int) ((min((((/* implicit */long long int) var_12)), (-5644472015816677539LL))) != (arr_29 [i_3 - 1] [i_5] [i_10 - 2] [i_11] [i_13] [i_13 - 3])))) : ((+((+(((/* implicit */int) var_4)))))))))));
                        var_31 ^= ((/* implicit */int) 2208748997097742750LL);
                        arr_44 [i_3] [i_3] [i_11] [i_3 + 1] [i_3] [(short)4] [i_3] = max((-1LL), (((var_9) / (arr_31 [i_11 + 3] [i_10 - 3] [i_3 - 1] [i_3]))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1)))))));
                    }
                    for (long long int i_14 = 2; i_14 < 24; i_14 += 1) 
                    {
                        arr_47 [i_11] [i_11] [i_10 + 1] [i_3] [i_11] = ((/* implicit */int) (((+(var_3))) < (((/* implicit */int) var_2))));
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (+(var_1))))));
                    }
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        arr_50 [i_11] [(short)20] [i_10] [i_11] [i_11] = ((/* implicit */unsigned short) ((min((min((((/* implicit */long long int) arr_43 [i_3 - 1] [i_3 + 1] [i_3] [i_3] [i_11])), (var_9))), (((((var_9) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)53897)) - (53897))))))) + (((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)20])))));
                        arr_51 [i_15] [i_11 + 3] [i_11] [i_5] [i_3] = ((/* implicit */short) (+(((arr_25 [0] [i_11 + 1] [i_10] [i_5] [i_3 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11 + 1] [i_11 + 1])))))));
                        var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                    }
                    var_35 ^= ((/* implicit */unsigned short) var_4);
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        arr_54 [i_3] [i_5] [i_11] [i_11] [i_16] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_21 [i_5] [i_10 + 1] [i_16])))))));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_11] [i_16])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    }
                }
                for (int i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    var_37 = ((/* implicit */int) arr_35 [i_3 - 1] [i_3 - 1]);
                    arr_57 [i_17] [(unsigned short)13] [i_5] [i_3] = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) (short)15206)) ? (15) : (((/* implicit */int) (unsigned short)23725))))))));
                    arr_58 [i_3] [i_3] [7LL] [i_3 + 3] = ((/* implicit */unsigned short) var_3);
                    var_38 = ((/* implicit */long long int) min((var_38), (min((((((/* implicit */_Bool) arr_25 [i_10 + 1] [i_10 + 3] [i_3 - 1] [i_3 + 3] [i_3 - 1])) ? (arr_25 [i_17] [i_10 + 3] [i_3 + 1] [(short)5] [i_3 - 1]) : (arr_25 [i_3 + 3] [i_10 - 2] [i_3 + 3] [i_3 + 1] [i_3 + 1]))), (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_5] [i_17]))) & (((((/* implicit */long long int) ((/* implicit */int) (short)15206))) ^ (var_9)))))))));
                }
                /* LoopSeq 3 */
                for (long long int i_18 = 1; i_18 < 24; i_18 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_19 = 0; i_19 < 25; i_19 += 3) 
                    {
                        var_39 = arr_8 [i_3] [i_5] [i_18];
                        var_40 += ((/* implicit */unsigned short) min((((/* implicit */long long int) var_3)), (var_11)));
                        var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_3] [4LL] [i_3] [i_3] [4LL]))));
                        arr_65 [i_19] [i_10] [i_10] [i_10] [i_5] [i_19] = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_10] [i_10 + 1] [i_10]))) / (((arr_26 [i_3] [i_3] [i_3] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-1236964815)))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) (short)3))))));
                    }
                    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_53 [(short)2] [i_10] [i_10] [(short)2] [(short)9] [i_3])) + (((/* implicit */int) (short)30453))))) ? (((((/* implicit */_Bool) var_13)) ? (7739514464226217778LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : ((+(arr_6 [i_3] [i_5] [i_10] [i_18])))))) || (((/* implicit */_Bool) (-(arr_31 [i_10 + 2] [i_5] [i_3 + 3] [i_18 + 1])))))))));
                    var_44 = ((/* implicit */short) min((-1LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_42 [i_18] [i_18] [i_5] [i_18 - 1] [i_18])) : (((/* implicit */int) arr_43 [i_3 + 3] [i_3] [i_3 - 1] [i_10 - 2] [i_5])))))));
                    arr_66 [i_18] [i_5] [i_5] &= ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned short)2146)))))) || (((/* implicit */_Bool) 5009684058964949809LL))));
                }
                for (long long int i_20 = 0; i_20 < 25; i_20 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        arr_71 [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)255)))))));
                        arr_72 [i_3] [i_5] [i_10] [i_20] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)65529))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_10 - 1]))) != (9223372036854775807LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_3] [i_5] [i_5] [i_20])))))));
                        var_45 = ((/* implicit */short) (~(var_3)));
                        arr_73 [i_3] [i_5] [i_10] [i_21] [i_21] [i_21] [i_20] = ((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10 + 3]))))), ((~(var_7)))));
                    }
                    var_46 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 524160)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned short)1024))))));
                }
                for (unsigned short i_22 = 3; i_22 < 23; i_22 += 4) 
                {
                    var_47 = ((/* implicit */long long int) max((var_47), (-583432479040071974LL)));
                    var_48 *= arr_16 [i_3] [i_3] [i_3];
                    var_49 -= ((/* implicit */long long int) ((((((/* implicit */int) arr_33 [i_10 + 2] [i_22 - 2] [i_10 + 2] [i_3 + 3])) >> (((((/* implicit */int) arr_14 [i_22] [i_22 - 1])) - (11591))))) == ((+(1317896639)))));
                }
                var_50 ^= arr_56 [i_10 - 3];
            }
            arr_76 [i_3] [0LL] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)-3355)), (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
            var_51 += ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_3 - 1] [i_3 - 1] [i_3 - 1]))))) % (((/* implicit */int) ((min((var_7), (((/* implicit */long long int) arr_42 [i_3] [i_3 - 1] [i_5] [i_3] [(short)6])))) < (arr_56 [i_3 - 1]))))));
        }
        /* vectorizable */
        for (short i_23 = 0; i_23 < 25; i_23 += 1) 
        {
            var_52 = (short)32767;
            var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) (-(((/* implicit */int) (short)-30453)))))));
            /* LoopSeq 2 */
            for (short i_24 = 2; i_24 < 23; i_24 += 2) 
            {
                arr_83 [i_3] [i_3] = (unsigned short)65527;
                var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) (short)32767))));
            }
            for (short i_25 = 1; i_25 < 24; i_25 += 1) 
            {
                /* LoopNest 2 */
                for (short i_26 = 0; i_26 < 25; i_26 += 3) 
                {
                    for (short i_27 = 2; i_27 < 24; i_27 += 4) 
                    {
                        {
                            var_55 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_6)))))));
                            arr_95 [i_3] [i_3] [i_3] [i_3] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_36 [i_3] [i_25] [(unsigned short)21] [(unsigned short)21])))))) % ((-(var_11)))));
                            arr_96 [i_25] [i_3] [i_25] [i_3] [i_25] = ((/* implicit */short) (+(var_5)));
                            var_56 = ((var_9) ^ (arr_32 [i_25] [i_25] [i_23]));
                        }
                    } 
                } 
                arr_97 [i_25] [i_25] = ((/* implicit */short) -1);
            }
        }
    }
    var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) var_0))));
    var_58 = var_9;
}
