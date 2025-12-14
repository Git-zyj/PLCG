/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86654
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((max(((+(15802153909827026567ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) 2791584590026078747ULL)) ? (max((((/* implicit */unsigned long long int) (unsigned char)255)), (15781892928138390631ULL))) : (min((2791584590026078747ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))));
        var_21 = ((/* implicit */short) (((+(((/* implicit */int) arr_2 [i_0])))) + (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned char)31))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_14 [i_1] [i_2] [i_1] [i_2] [(_Bool)1] |= ((((/* implicit */_Bool) 17521560114161038590ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) : (0ULL));
                    var_23 ^= ((/* implicit */_Bool) arr_8 [(short)8] [(_Bool)1] [i_4]);
                    arr_15 [i_1] [i_2] = ((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                }
                for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 1) 
                {
                    var_24 ^= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) 15655159483683472869ULL))))), (min((((/* implicit */short) (_Bool)0)), ((short)1))))))));
                    var_25 |= ((/* implicit */_Bool) ((min((arr_17 [i_5 - 2] [i_3] [i_3] [i_2] [i_2] [i_1]), (min(((_Bool)1), ((_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))) : (((unsigned long long int) arr_7 [(short)12]))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        arr_21 [i_6] [i_6] [(unsigned char)2] [i_6] [i_1] |= ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) arr_20 [(short)13] [i_2] [13ULL])));
                        arr_22 [i_6] [i_2] [i_2] [i_2] [(short)2] = ((/* implicit */_Bool) max((((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-26491)))) >> (((((/* implicit */int) max((((/* implicit */short) (unsigned char)142)), ((short)28823)))) - (28778))))), ((((+(8318093538219496336ULL))) ^ (17521560114161038590ULL)))));
                    }
                    var_26 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((short) arr_12 [i_1]))), (((arr_0 [i_5]) ? (13648018890047523811ULL) : (((/* implicit */unsigned long long int) 1528335398)))))), (max((((((/* implicit */_Bool) (short)8636)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))) : (5423745929529781827ULL))), (((/* implicit */unsigned long long int) min((arr_5 [i_5]), (arr_10 [i_1]))))))));
                }
                arr_23 [i_2] [(unsigned char)1] [13ULL] [i_2] = ((/* implicit */_Bool) (short)-23829);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 1) 
                {
                    arr_27 [i_2] [i_7 + 1] [5ULL] [i_1] [i_1] [i_2] = ((/* implicit */int) ((short) arr_16 [i_7] [i_7] [2] [i_7 - 1]));
                    var_27 = ((/* implicit */unsigned long long int) (((((_Bool)0) ? (((/* implicit */int) arr_20 [0ULL] [i_2] [i_2])) : (((/* implicit */int) (short)23828)))) >> (((((((/* implicit */_Bool) arr_16 [i_7] [(_Bool)1] [i_2] [i_1])) ? (arr_19 [i_1] [(short)3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1]))))) - (1272911948254846077ULL)))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_9 = 4; i_9 < 13; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)21689)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23828))) : (arr_30 [i_2] [(short)0] [i_9 - 3]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                        arr_32 [i_1] [(_Bool)1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) min(((short)-16325), ((short)28823)))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_10 = 1; i_10 < 13; i_10 += 4) 
                    {
                        var_29 = ((max((arr_7 [i_2]), (arr_7 [i_2]))) ? (((arr_7 [i_2]) ? (1013969817907506313ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_2]), (arr_7 [i_2]))))));
                        var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_5 [i_3])), (arr_16 [i_2] [i_8 + 2] [i_3] [i_2])))), (min((arr_35 [i_1 - 1] [i_2] [i_3] [i_8] [(_Bool)1]), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((((/* implicit */_Bool) arr_34 [i_1 - 1] [i_8 + 2] [i_10 - 1] [i_10 + 1] [2ULL])) ? (((/* implicit */unsigned long long int) -440138056)) : (min((13022998144179769788ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((((/* implicit */_Bool) (short)-28823)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))) : (arr_30 [i_1] [2ULL] [i_10 + 1])))));
                    }
                    arr_36 [i_1] [i_2] [i_2] [i_2] [i_8] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) (_Bool)1))) : ((-(((/* implicit */int) arr_26 [i_1] [i_2] [i_1 - 1]))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_26 [(short)13] [i_2] [i_2])), (18446744073709551615ULL)))) ? (((arr_19 [i_1] [i_1] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_2] [i_2] [(_Bool)1] [i_3] [i_8]))))) : ((((_Bool)1) ? (17991907617982112063ULL) : (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1 - 1])))))));
                    /* LoopSeq 3 */
                    for (short i_11 = 2; i_11 < 13; i_11 += 4) 
                    {
                        arr_39 [i_2] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_34 [i_1] [6ULL] [i_3] [6ULL] [i_2])) ? (((/* implicit */int) arr_26 [i_1] [11ULL] [i_1 - 1])) : (((/* implicit */int) arr_33 [i_2] [i_8] [i_3] [i_2] [i_2])))), (((((/* implicit */_Bool) (short)3968)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_8]))))))) ? (3009886197914905560ULL) : (((unsigned long long int) min((((/* implicit */short) (unsigned char)0)), ((short)-10340)))));
                        var_31 = ((/* implicit */signed char) arr_37 [i_1] [i_8] [i_2] [i_1]);
                        arr_40 [i_2] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_25 [i_1 - 1] [2] [i_2] [(signed char)10] [i_11 - 1] [i_1 - 1]))) / (min((((/* implicit */int) (short)-10340)), (arr_28 [i_2])))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        var_32 *= ((/* implicit */short) (+(((/* implicit */int) arr_42 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 2]))));
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_2] [i_2] [(short)1] [i_8 - 2] [i_12] [9ULL] [i_1 - 1])) ? (1ULL) : (arr_38 [i_2] [i_2] [i_1 - 1] [i_8 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                        arr_43 [i_2] = ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_11 [i_1] [i_1] [5] [i_12]))))) : (arr_25 [i_8 + 2] [i_3] [i_2] [i_2] [i_1 - 1] [i_1 - 1]));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) ((min((12642304731000924552ULL), (((/* implicit */unsigned long long int) arr_45 [i_2] [i_2] [(short)5] [(_Bool)1] [i_1 - 1] [i_13 - 1] [i_13])))) / (((/* implicit */unsigned long long int) ((arr_0 [i_8 + 2]) ? (((/* implicit */int) arr_0 [i_8 + 2])) : (((/* implicit */int) arr_0 [i_8 + 2])))))));
                        arr_46 [i_1 - 1] [i_2] = ((((/* implicit */_Bool) ((arr_33 [i_2] [9ULL] [i_2] [i_2] [i_2]) ? (((/* implicit */int) arr_11 [3ULL] [i_8 - 1] [i_13 - 1] [3ULL])) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)155))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)124), (((/* implicit */signed char) (_Bool)1)))))) + (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_24 [i_1] [i_2] [i_3] [i_8 - 1] [i_2]))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_31 [i_1] [(_Bool)1] [i_2] [i_3] [i_8] [i_13 - 1] [i_13 - 1])) * (((/* implicit */int) (unsigned char)197))))))));
                        arr_47 [(unsigned char)10] [i_3] [(_Bool)1] [i_3] [(_Bool)1] [(unsigned char)2] [(unsigned char)0] |= max((((/* implicit */int) min((((short) 5948780835703603490ULL)), (((/* implicit */short) max((arr_12 [i_13]), (arr_5 [i_13]))))))), (((((((/* implicit */int) arr_26 [i_13 - 1] [i_3] [i_1])) * (((/* implicit */int) arr_20 [i_1] [i_2] [i_13])))) / (((((/* implicit */_Bool) 5880076954189077792ULL)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_8 [(_Bool)0] [i_2] [(short)4])))))));
                    }
                }
            }
            var_35 = ((/* implicit */_Bool) ((short) max((min((arr_30 [(unsigned char)0] [i_2] [(unsigned char)6]), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((int) arr_44 [i_2] [i_1] [i_1 - 1] [i_2] [i_2]))))));
        }
        var_36 |= ((/* implicit */short) ((((((/* implicit */_Bool) (short)30310)) || (((/* implicit */_Bool) 10778083122587753878ULL)))) ? (((unsigned long long int) max((-48747905), (((/* implicit */int) (short)31))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21)))));
        arr_48 [i_1] |= ((/* implicit */short) ((_Bool) arr_28 [(_Bool)1]));
        arr_49 [(short)12] &= ((/* implicit */_Bool) ((min((arr_33 [6ULL] [i_1] [i_1 - 1] [i_1] [6ULL]), (arr_33 [(_Bool)1] [i_1] [i_1 - 1] [(_Bool)1] [(_Bool)1]))) ? (((/* implicit */int) ((short) arr_33 [(short)0] [i_1] [i_1 - 1] [0ULL] [(short)0]))) : (((arr_33 [(_Bool)1] [i_1] [i_1 - 1] [i_1 - 1] [(_Bool)1]) ? (((/* implicit */int) arr_33 [(_Bool)1] [(_Bool)1] [i_1 - 1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_33 [(short)10] [(short)12] [i_1 - 1] [(short)12] [(short)10]))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 11; i_14 += 2) 
    {
        arr_53 [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_14] [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) (short)30310)) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_14]))) : (10778083122587753878ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_14] [4ULL] [4ULL] [4ULL]))));
        /* LoopSeq 1 */
        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            arr_57 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_15] [i_15] [i_15])) ? (6122319693710335165ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_15] [i_15] [12ULL] [i_15] [i_14] [12ULL] [i_14])))));
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_15] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_3 [i_15])) : (((/* implicit */int) (short)-18202))));
            var_38 = ((/* implicit */unsigned long long int) arr_45 [i_15] [i_15] [i_15] [i_15] [i_14] [i_15] [9ULL]);
            var_39 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_14]))));
        }
        var_40 = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_58 [i_14] = -1418492804;
    }
}
