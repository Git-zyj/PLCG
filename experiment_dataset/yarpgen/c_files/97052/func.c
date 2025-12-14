/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97052
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
    var_16 = var_3;
    var_17 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_18 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) -709147941)), (((min((((/* implicit */unsigned long long int) var_3)), (arr_1 [i_0] [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            arr_5 [(_Bool)1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_12) ? (var_14) : (((/* implicit */long long int) 709147941))))) * (min((((/* implicit */unsigned long long int) arr_2 [i_1 + 1])), (arr_1 [i_1 - 1] [i_1 - 2])))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (arr_4 [i_0] [i_0] [i_0]))))) : ((~(arr_1 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((-2072058236) > (((/* implicit */int) var_9))))))))));
            var_20 = (_Bool)1;
        }
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned char i_5 = 3; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (+(max((min((var_4), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (-(1960073703U))))))));
                            var_22 *= ((/* implicit */short) (-(((/* implicit */int) var_9))));
                            var_23 = ((/* implicit */short) var_15);
                        }
                    } 
                } 
                var_24 &= ((/* implicit */short) (-(min((arr_13 [i_3] [i_2] [i_0] [i_0]), (((/* implicit */unsigned int) var_3))))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 2; i_6 < 13; i_6 += 3) 
                {
                    var_25 &= ((/* implicit */unsigned char) (~(min((((/* implicit */int) arr_3 [i_6] [11ULL])), (-709147954)))));
                    arr_19 [i_0] [i_2] [i_3] [i_3] [i_6 + 2] = ((/* implicit */signed char) min((min((709147925), (((((/* implicit */int) arr_18 [i_0] [11LL] [2U] [i_6] [i_0])) << (((/* implicit */int) var_3)))))), (((/* implicit */int) min(((unsigned char)15), (((unsigned char) (unsigned char)255)))))));
                }
            }
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                var_26 = ((/* implicit */short) (~(((unsigned int) (unsigned char)92))));
                var_27 ^= ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (arr_16 [i_0] [i_0] [i_0] [i_0]))))));
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_21 [i_0] [i_0] [i_7])), (arr_14 [6U] [i_0] [i_2] [i_7] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) & (9213996030469967512ULL))))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [(unsigned char)7] [i_0] [i_0])) - ((~(((/* implicit */int) arr_22 [i_0] [i_2] [i_7] [i_7]))))))) ? (((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))) : (var_5)))) : (((unsigned long long int) var_4))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                var_30 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_2] [i_2] [i_8]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (min((var_6), (((/* implicit */unsigned int) (short)6))))))));
                arr_27 [i_2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_8] [i_2])) << (((((/* implicit */int) var_1)) - (197)))))) ? (((/* implicit */int) ((var_3) && (((/* implicit */_Bool) (unsigned char)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
            }
            for (unsigned short i_9 = 3; i_9 < 14; i_9 += 2) 
            {
                var_31 ^= ((/* implicit */unsigned int) ((_Bool) ((arr_8 [i_0] [5] [i_9 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))));
                arr_31 [i_9] [i_9] [i_9] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((-709147941), (((/* implicit */int) var_11)))) >> (((/* implicit */int) (unsigned char)15))))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) arr_7 [i_9 - 3] [i_9 - 1] [i_9 - 3])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [i_9] [i_9 - 2])))))));
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    var_32 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) max((33538048U), (((/* implicit */unsigned int) var_2))))) ? (((-8037877308645988178LL) + (((/* implicit */long long int) ((/* implicit */int) arr_22 [2ULL] [i_2] [i_9] [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2])))))));
                    arr_36 [i_9] [i_9] [i_9] [i_9] [i_9] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((arr_8 [i_9 - 3] [i_9] [i_9]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_13)))))))));
                }
            }
        }
        var_33 = ((/* implicit */int) ((short) (~(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (unsigned int i_11 = 2; i_11 < 12; i_11 += 2) 
    {
        var_34 ^= ((/* implicit */short) (+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_12))))))));
        /* LoopNest 2 */
        for (unsigned char i_12 = 2; i_12 < 13; i_12 += 2) 
        {
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned long long int) min((((arr_44 [i_11 - 2]) + (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) min((arr_14 [i_11 - 2] [i_11 - 1] [i_12 + 1] [i_12 - 2] [(_Bool)1]), (((/* implicit */unsigned short) var_1)))))));
                    /* LoopSeq 4 */
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        var_36 &= ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) (!(var_3))))) + (((((/* implicit */_Bool) arr_45 [i_13] [i_13] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4))))), (((var_14) >> (((((/* implicit */int) arr_38 [i_11 + 2])) + (102)))))));
                        arr_49 [i_11] [i_11] [i_14] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) (~(arr_17 [i_11] [i_11] [i_11] [i_11])))), (arr_37 [12U])))));
                        var_37 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_15))) ^ (((/* implicit */unsigned long long int) min((arr_47 [i_11] [i_11] [i_14] [i_11]), (((/* implicit */long long int) arr_24 [i_14]))))))) < (var_15)));
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_13] [i_14] [i_12] [i_14])) != ((~(((/* implicit */int) arr_34 [i_12] [i_12 - 1] [i_12 - 1] [i_12]))))));
                    }
                    for (unsigned char i_15 = 3; i_15 < 13; i_15 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (!(var_10))))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) 2945095108567456649LL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                        arr_53 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_38 [i_11]))))))) ? ((-(var_13))) : (((((((/* implicit */_Bool) (short)17248)) || ((_Bool)1))) ? ((+(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)36039)))))))));
                        arr_54 [i_11 - 1] [i_12 - 2] [i_11 - 1] [i_15] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_43 [i_15 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [5U])) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (16914957667782528729ULL)))))) : (((/* implicit */int) (_Bool)1))));
                        var_40 ^= ((/* implicit */short) arr_32 [i_15 - 3] [i_12 - 2] [5ULL] [i_12 - 2] [i_11 + 2] [i_12 - 1]);
                        var_41 = min((((/* implicit */unsigned int) arr_28 [i_12 - 2])), (var_5));
                    }
                    for (unsigned int i_16 = 3; i_16 < 11; i_16 += 4) 
                    {
                        var_42 ^= ((/* implicit */short) ((((/* implicit */int) ((arr_20 [i_16 - 2] [i_12 - 1] [i_11 + 1] [i_11]) > (arr_20 [i_16 - 1] [i_12 + 1] [i_11 + 1] [i_11 - 1])))) & (((/* implicit */int) var_11))));
                        var_43 ^= ((/* implicit */unsigned int) (short)-17245);
                    }
                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 12; i_17 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned int) (-(var_4)));
                        arr_59 [i_12] [i_12] = ((/* implicit */short) var_6);
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 0; i_18 < 14; i_18 += 1) 
                        {
                            var_45 = ((/* implicit */int) arr_30 [i_11 + 2]);
                            arr_62 [i_18] [(unsigned char)12] [i_12] [i_12] [i_17] [i_17] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_26 [i_11] [(unsigned char)6] [(unsigned char)6]))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_12 + 1] [i_12])))));
                            arr_63 [i_18] [i_17] = ((/* implicit */int) (+(((unsigned int) var_0))));
                            arr_64 [i_18] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)79))));
                        }
                        for (int i_19 = 0; i_19 < 14; i_19 += 3) 
                        {
                            arr_68 [i_12] [(_Bool)1] [i_12] [i_12] [i_12] = ((((/* implicit */_Bool) arr_48 [i_13] [i_12] [i_11] [i_12 + 1] [i_12] [i_11])) ? (arr_48 [i_19] [i_19] [i_19] [i_12 + 1] [i_12] [i_11]) : (((/* implicit */unsigned int) var_7)));
                            var_46 ^= ((/* implicit */long long int) (!(((arr_43 [i_13]) == (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        }
                    }
                }
            } 
        } 
    }
    for (unsigned short i_20 = 2; i_20 < 23; i_20 += 2) 
    {
        var_47 ^= ((/* implicit */unsigned int) (((~(((/* implicit */int) var_9)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_20 + 1])))))));
        /* LoopSeq 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_48 = (+(min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32744)))), ((+(((/* implicit */int) (unsigned short)16297)))))));
            var_49 ^= ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */int) arr_69 [14U])) << (((((/* implicit */int) var_1)) - (212))))) + ((~(((/* implicit */int) var_1)))))));
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            arr_77 [i_22] [i_20] [i_20] = ((/* implicit */signed char) min(((~(4261429240U))), (((/* implicit */unsigned int) min((((/* implicit */short) var_8)), (arr_74 [i_22]))))));
            arr_78 [i_22] [i_20] [i_20] = ((/* implicit */short) ((min((arr_70 [(short)10] [i_20 + 2]), (((/* implicit */unsigned long long int) arr_72 [i_20])))) < (((/* implicit */unsigned long long int) var_14))));
        }
    }
}
