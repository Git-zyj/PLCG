/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73820
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_3)) % (((/* implicit */int) var_3)))) << (((arr_0 [i_0]) - (1346955743U))))) % (((/* implicit */int) (signed char)6))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (unsigned short)59225);
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50755))))) ? (max((arr_0 [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) ((((arr_5 [i_1]) == (((/* implicit */long long int) arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) ((var_0) / (arr_4 [i_1])))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (17968553968414334028ULL) : (((/* implicit */unsigned long long int) arr_5 [i_1]))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 1; i_2 < 8; i_2 += 3) 
        {
            var_12 += min((max((min((var_9), (13872749370012916354ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)4] [(unsigned short)4]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_2] [i_2])) || (((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2] [i_2 + 3]))))));
            var_13 = ((/* implicit */long long int) ((((unsigned long long int) arr_7 [i_2] [i_2] [i_2 + 2])) >> (((/* implicit */int) (!(((/* implicit */_Bool) 478190105295217587ULL)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 2) 
            {
                for (short i_4 = 3; i_4 < 9; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) max((((((((/* implicit */int) (unsigned char)193)) >> (((arr_5 [i_1]) - (6999150448883165710LL))))) - (((/* implicit */int) arr_13 [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            arr_17 [i_3] [i_2] [i_2] [i_2 - 1] [i_2] = ((((/* implicit */_Bool) ((arr_4 [i_3 + 3]) & (((/* implicit */int) ((unsigned char) var_4)))))) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)80)) && (((/* implicit */_Bool) 4573994703696635273ULL)))), (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_2))))))));
                            arr_18 [i_1] [i_3] [i_1] [i_4] [i_5] = ((/* implicit */unsigned short) (~(((var_8) + (var_5)))));
                            var_15 ^= ((/* implicit */short) ((unsigned short) ((unsigned char) arr_0 [i_3 - 2])));
                        }
                    } 
                } 
            } 
            arr_19 [i_2] [i_2] [i_1] = ((/* implicit */int) max((arr_1 [(short)8] [(short)8]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_22 [i_1] [i_6] [i_6] = (i_6 % 2 == zero) ? (((/* implicit */unsigned char) max((((((arr_6 [i_1] [i_1] [i_1]) - (arr_15 [i_1] [i_6] [i_1] [i_6] [i_1] [i_6]))) << (((((long long int) arr_10 [i_6 - 1] [i_6] [i_6] [i_1])) - (186LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32767)) ? (var_9) : (((/* implicit */unsigned long long int) -6635535644657441046LL))))) ? (((var_7) / (((/* implicit */long long int) ((/* implicit */int) (short)-22617))))) : (((/* implicit */long long int) -1467520556))))))) : (((/* implicit */unsigned char) max((((((arr_6 [i_1] [i_1] [i_1]) - (arr_15 [i_1] [i_6] [i_1] [i_6] [i_1] [i_6]))) << (((((((((long long int) arr_10 [i_6 - 1] [i_6] [i_6] [i_1])) - (186LL))) + (82LL))) - (25LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32767)) ? (var_9) : (((/* implicit */unsigned long long int) -6635535644657441046LL))))) ? (((var_7) / (((/* implicit */long long int) ((/* implicit */int) (short)-22617))))) : (((/* implicit */long long int) -1467520556)))))));
            var_16 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_16 [i_6 - 1] [i_1] [i_1] [i_6] [i_6 - 1])), (max((var_9), (((/* implicit */unsigned long long int) (_Bool)1)))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1633955309U))))))))));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            arr_25 [i_7] [i_1] = ((/* implicit */long long int) (-(var_2)));
            var_17 = max((((((/* implicit */int) arr_24 [i_7] [i_1])) >> (((811484728U) - (811484714U))))), (((/* implicit */int) arr_14 [i_7] [i_7] [i_1] [i_1] [i_1])));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) arr_13 [i_7]))))))))));
            var_19 = ((/* implicit */unsigned short) (((-(arr_11 [i_1] [i_7]))) / (((/* implicit */int) arr_14 [i_7] [i_7] [i_1] [i_1] [i_1]))));
        }
    }
    for (unsigned short i_8 = 3; i_8 < 18; i_8 += 4) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_26 [i_8 + 2]) | (arr_27 [i_8 + 2])))))))));
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_21 = ((/* implicit */int) max((var_21), ((~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8])) ? (3735732790U) : (((/* implicit */unsigned int) 384277648))))) ? (((/* implicit */int) ((arr_31 [i_8] [i_9]) || (((/* implicit */_Bool) 4202962587810706998LL))))) : (((/* implicit */int) min(((unsigned short)14782), (((/* implicit */unsigned short) (signed char)-127)))))))))));
            arr_32 [i_9] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (signed char)117))))) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) ((879582291U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_8])))))))))));
        }
        for (short i_10 = 1; i_10 < 19; i_10 += 2) /* same iter space */
        {
            arr_37 [i_8] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (1567635466U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10]))))))))), (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_34 [i_8] [i_10 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8])))))) : (((((/* implicit */_Bool) var_8)) ? (arr_29 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8 + 2])))))))));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (min((((/* implicit */long long int) (_Bool)1)), (var_7)))))))))));
        }
        for (short i_11 = 1; i_11 < 19; i_11 += 2) /* same iter space */
        {
            arr_40 [i_11] [(unsigned short)2] [i_8] |= ((/* implicit */short) (~(((/* implicit */int) (short)-21541))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_38 [i_8 + 2]))) ? (-7216241859119852590LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_8 - 2] [i_8] [i_11 + 1])) ? ((-(((/* implicit */int) arr_31 [i_8] [i_11])))) : (((/* implicit */int) min(((signed char)121), (arr_38 [i_8])))))))));
            /* LoopSeq 4 */
            for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 2) 
            {
                var_24 = ((/* implicit */signed char) ((unsigned int) -7552752628743353495LL));
                arr_43 [i_8] [i_11 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -3867649848900276009LL)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_8] [i_11] [i_12 + 3]))) / (arr_35 [i_8] [i_11] [i_12 + 1]))))))));
            }
            /* vectorizable */
            for (int i_13 = 2; i_13 < 17; i_13 += 3) 
            {
                arr_47 [i_8 + 1] [i_11 - 1] [14LL] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) ? (arr_27 [i_8]) : (var_7)))) ? (((/* implicit */int) ((_Bool) arr_35 [(signed char)6] [i_11 - 1] [(signed char)6]))) : (((/* implicit */int) arr_30 [(signed char)18]))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_8 - 3])) ? (arr_26 [i_8 - 3]) : (((/* implicit */long long int) arr_39 [i_13] [i_11] [i_8 + 1]))));
                arr_48 [i_8] [i_13] [i_11] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_38 [i_11 - 1]))));
            }
            for (long long int i_14 = 1; i_14 < 17; i_14 += 3) 
            {
                var_27 = (i_8 % 2 == zero) ? (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(-1034756889)))) ? (((/* implicit */unsigned long long int) ((((-1320409484) + (2147483647))) >> (((((/* implicit */int) arr_49 [i_8] [i_11] [i_8])) - (96)))))) : (8041475130224839082ULL))), (arr_35 [i_8] [i_11] [i_14])))) : (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(-1034756889)))) ? (((/* implicit */unsigned long long int) ((((-1320409484) + (2147483647))) >> (((((((/* implicit */int) arr_49 [i_8] [i_11] [i_8])) - (96))) - (106)))))) : (8041475130224839082ULL))), (arr_35 [i_8] [i_11] [i_14]))));
                arr_51 [i_14] [i_8] [i_14 + 1] [i_14] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 15601983939009013075ULL)) ? ((~(-1569611158))) : (((((/* implicit */_Bool) -6931369573720903926LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)2990))))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_8]))))) ? (arr_27 [i_11 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_8])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_4)))))))));
            }
            for (long long int i_15 = 1; i_15 < 19; i_15 += 4) 
            {
                var_28 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_38 [i_11])), (((((unsigned int) var_3)) - (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_8 - 1] [i_8])))))));
                var_29 ^= ((/* implicit */long long int) var_1);
                arr_54 [i_8] [i_8] [i_11 + 1] [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_44 [i_15 + 1] [i_15 + 1]), (((/* implicit */long long int) arr_38 [i_8 + 2])))))));
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 20; i_16 += 4) 
        {
            for (signed char i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                {
                    var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (1064060202892245426ULL)));
                    arr_61 [i_17] [i_8] [i_8 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_8] [i_8] [i_8])) ? (max((var_9), (((/* implicit */unsigned long long int) var_2)))) : (var_9))))));
                    var_31 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_46 [i_8] [i_8 - 3]))) ? ((-(((/* implicit */int) arr_46 [i_8] [i_8 + 1])))) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) -2326784500366050967LL))))) : (((/* implicit */int) (_Bool)1))))));
    var_33 = ((/* implicit */signed char) var_2);
}
