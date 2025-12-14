/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64506
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
    var_13 |= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)224)) ? (var_12) : (var_9))) / (var_12))) << (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((((/* implicit */int) var_6)) & (((/* implicit */int) var_2))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_1 [i_0 + 1]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28688))) + (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)95);
        arr_3 [(_Bool)0] |= ((/* implicit */unsigned char) arr_0 [i_0 + 1] [i_0]);
    }
    for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 1; i_2 < 14; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    arr_16 [i_1 + 1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) arr_4 [i_3] [i_1 + 1]);
                    var_15 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)228)) / (arr_4 [(_Bool)1] [i_2])));
                }
                for (long long int i_5 = 4; i_5 < 14; i_5 += 1) 
                {
                    arr_21 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_2 + 1] [i_1])) ? (arr_19 [i_2 - 1] [i_2] [i_1]) : (((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1]))));
                    var_16 = arr_9 [i_5] [i_2] [i_1];
                }
                var_17 ^= ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_14 [i_1] [i_1] [i_3])) <= (((/* implicit */int) arr_5 [i_1] [i_1]))))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_13 [i_1] [i_2] [i_6] [i_6]))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_2] [i_1 + 1]))))) : (min((var_0), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */int) arr_23 [i_6])) : ((-(((/* implicit */int) arr_5 [i_2 + 1] [i_2]))))));
                arr_24 [i_1] [i_2] [i_1] = ((/* implicit */long long int) var_4);
                var_20 = (~((~(var_11))));
            }
            var_21 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_2 + 1] [i_2 + 1])), (var_4)))) ? (((((/* implicit */_Bool) var_11)) ? (arr_18 [i_2] [i_2 + 1] [i_1 - 1] [i_1]) : (arr_18 [i_1 - 1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [6ULL]))))));
            /* LoopSeq 1 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */long long int) arr_26 [(short)2] [i_2])), (var_11))) : (min((var_11), (((/* implicit */long long int) arr_25 [i_1] [i_1 - 1] [i_1]))))));
                            arr_34 [i_1 - 1] [i_2 - 1] [i_7] [i_7] [i_8] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_30 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 1])) * (((/* implicit */int) arr_30 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1]))))));
                            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 308438353518784255ULL)) ? (((/* implicit */int) (short)-24430)) : (((/* implicit */int) arr_7 [i_1] [i_7 - 1] [i_9]))))) ? (((arr_33 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1] [i_1] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_25 [i_1] [i_8] [i_1])) : (((/* implicit */int) arr_14 [i_1] [(signed char)3] [(signed char)3]))))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned char) arr_5 [i_1] [(unsigned short)11])), (((unsigned char) ((unsigned int) var_12))))))));
                arr_35 [(_Bool)1] [i_2] [i_7] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_2 + 1])) ? (((long long int) (short)-24452)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), (arr_14 [3U] [i_2 + 1] [6ULL])))) ? (((((/* implicit */_Bool) 4524452196948513608ULL)) ? (((/* implicit */int) arr_26 [i_1] [i_1])) : (((/* implicit */int) arr_25 [i_1] [(unsigned char)2] [(unsigned char)12])))) : (((/* implicit */int) (unsigned short)22508))))) : ((-(((((/* implicit */_Bool) arr_12 [i_1] [(signed char)14])) ? (var_4) : (((/* implicit */unsigned long long int) arr_4 [i_2 + 1] [i_7]))))))));
            }
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_25 |= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28673))))), ((-(((/* implicit */int) (unsigned char)220))))));
                arr_38 [i_1] [i_1] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_1] [i_1] [i_1] [i_1 - 1])) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_2 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)7)))) : (((/* implicit */int) arr_27 [i_1])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_11 = 1; i_11 < 13; i_11 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        arr_44 [i_1] [i_1] [i_1] [10] [i_1 - 1] [i_1] |= var_8;
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_15 [i_1] [i_1] [i_1] [i_1 - 1]))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_47 [2ULL] [i_2] [i_2] [(_Bool)1] [(_Bool)1] [i_2] [i_2 - 1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_11] [i_2 - 1] [i_1]))))))));
                        var_27 = ((/* implicit */unsigned long long int) var_1);
                    }
                    for (unsigned char i_14 = 2; i_14 < 14; i_14 += 1) 
                    {
                        arr_50 [(signed char)2] [i_2] [i_10] [i_11] [i_11] |= ((/* implicit */signed char) (-(-1209986901162614686LL)));
                        var_28 ^= ((/* implicit */unsigned char) ((arr_11 [14] [i_1] [i_1 - 1] [i_11 - 1]) ? (((/* implicit */int) arr_11 [(_Bool)1] [i_1 + 1] [i_1 - 1] [i_11 - 1])) : (((/* implicit */int) arr_11 [(unsigned char)10] [i_1 + 1] [i_1 - 1] [i_11 - 1]))));
                    }
                    var_29 = ((/* implicit */unsigned char) ((short) ((_Bool) var_12)));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_30 &= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_42 [i_1] [i_1 - 1] [(unsigned char)3] [i_15] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) == (var_12))))) : (max((arr_43 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [(unsigned char)5]), (((/* implicit */unsigned long long int) var_8)))))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_49 [i_2] [1LL] [i_2 + 1] [i_10] [i_15])) < (((/* implicit */int) arr_49 [i_1] [(unsigned char)14] [i_2 + 1] [i_2] [i_2]))))))))));
                    var_32 -= arr_36 [i_1 - 1] [i_2] [i_10] [(unsigned char)6];
                    arr_55 [i_1] [i_1] [i_2] [i_10] [i_1] [i_1] = ((/* implicit */_Bool) (-(max((arr_10 [i_1 - 1] [i_1 + 1] [i_2 + 1]), (arr_10 [i_1 - 1] [i_1 + 1] [i_2 + 1])))));
                    arr_56 [i_1] [i_2] [i_10] [i_15] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))), (arr_31 [i_1 - 1] [i_10] [i_10]))) & (((min((arr_42 [i_1] [i_2 + 1] [i_10] [i_15] [i_1]), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1] [i_15])))) / (max((arr_42 [i_1] [i_2] [i_10] [i_10] [i_15]), (((/* implicit */unsigned long long int) 524287))))))));
                }
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 15; i_16 += 1) 
                {
                    var_33 -= ((/* implicit */unsigned char) arr_6 [i_1]);
                    arr_59 [i_10] [i_10] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])) / (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 1; i_17 < 13; i_17 += 4) 
                    {
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (-((-(((/* implicit */int) var_6)))))))));
                        var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
                    }
                }
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) arr_36 [i_1] [i_1] [i_1] [i_1]))));
            }
            var_37 = ((/* implicit */int) var_2);
        }
        for (short i_18 = 1; i_18 < 14; i_18 += 1) /* same iter space */
        {
            var_38 ^= ((/* implicit */unsigned long long int) arr_20 [i_1 + 1]);
            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (-(var_0)))) ? (arr_29 [i_1] [i_18] [i_18]) : (((unsigned long long int) 9223372036854775802LL))))))));
        }
        for (short i_19 = 1; i_19 < 14; i_19 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */signed char) (short)-31761);
            arr_69 [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_1] [i_19]))) : (var_9))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_1] [i_19]))) : (var_11))))))));
        }
        var_41 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) ((_Bool) var_11))))));
        arr_70 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) 8552331314311965899ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_1] [8ULL])))))) ? (((int) arr_52 [i_1] [i_1 - 1] [i_1 - 1] [i_1])) : (((/* implicit */int) ((signed char) (unsigned short)28686)))));
    }
    /* vectorizable */
    for (long long int i_20 = 3; i_20 < 18; i_20 += 1) 
    {
        var_42 += ((/* implicit */int) ((arr_72 [i_20] [i_20]) ? (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_20 + 1] [i_20 - 3]))) : (arr_71 [i_20 - 3])));
        arr_74 [i_20] &= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_10)) ? (arr_71 [i_20]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
    }
}
