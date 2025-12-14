/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7941
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
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            arr_16 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_4 - 1] [i_3 - 1] [i_4])) ? (arr_15 [i_0] [i_1] [i_4 + 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_12 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_3 - 1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
                            var_13 = ((((/* implicit */int) arr_3 [i_3 + 1] [i_3 - 1])) < (((/* implicit */int) (!((_Bool)1)))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((signed char) 13220197921128466682ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_4) | (arr_14 [i_0] [i_1] [i_2] [i_3 - 1] [i_1] [i_6] [i_1])))))) : (((unsigned long long int) arr_11 [i_0] [i_0] [i_3]))));
                            arr_23 [i_0] [i_2] [i_6] = ((/* implicit */unsigned int) (~(885852115)));
                        }
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))))) + (min((arr_15 [i_0] [i_1] [i_3 + 2] [i_3] [i_0]), (arr_15 [i_0] [i_2] [i_3 + 1] [i_0] [i_2])))));
                        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3 + 1])) % (((/* implicit */int) arr_7 [i_3 + 2]))))) ? (((((arr_3 [i_3] [i_0]) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))))) * (((/* implicit */long long int) ((((/* implicit */int) (signed char)49)) & (((/* implicit */int) arr_3 [i_3 + 2] [i_1]))))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)64)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2]))))));
                    }
                } 
            } 
        } 
        arr_24 [i_0] = ((/* implicit */unsigned int) ((int) ((unsigned int) ((5226546152581084960ULL) / (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_26 [i_7]))) && (((/* implicit */_Bool) arr_26 [i_7]))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min(((~(((unsigned long long int) arr_30 [i_7] [i_7] [i_7])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 13220197921128466682ULL))) && (var_0)))))))));
                    arr_32 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_29 [i_9 - 1])))) ^ ((~(((/* implicit */int) arr_29 [i_9 - 1]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_19 -= ((/* implicit */_Bool) ((int) (_Bool)1));
                        arr_35 [i_7] [i_7] [i_7] |= (+((+(((/* implicit */int) arr_30 [i_7] [i_8] [i_10 - 1])))));
                        var_20 &= ((/* implicit */int) ((((/* implicit */int) arr_28 [i_9 - 1] [i_10 - 1] [i_10 - 1])) < (((/* implicit */int) (!(((/* implicit */_Bool) 2152265973U)))))));
                        var_21 = ((/* implicit */signed char) ((((int) arr_25 [i_9 - 1])) == (((/* implicit */int) arr_34 [i_7] [i_8] [i_9 - 1] [i_10 - 1]))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 24; i_11 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) arr_27 [i_7]);
                        var_23 = ((/* implicit */unsigned char) ((((_Bool) ((arr_27 [i_7]) ? (arr_25 [i_9]) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) arr_34 [i_9 - 1] [i_8] [i_9 - 1] [i_11 - 2])) : (((/* implicit */int) arr_29 [i_11 - 2]))));
                        arr_38 [i_7] [i_11 - 2] [i_9 - 1] [i_11] [i_7] = arr_28 [i_7] [i_7] [i_7];
                    }
                }
            } 
        } 
        arr_39 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_7] [i_7] [i_7] [i_7])) << (((((/* implicit */int) arr_26 [i_7])) - (55)))))), (((unsigned int) arr_37 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_7] [i_7] [i_7] [i_7])))));
    }
    /* LoopNest 2 */
    for (signed char i_12 = 4; i_12 < 10; i_12 += 2) 
    {
        for (unsigned long long int i_13 = 3; i_13 < 12; i_13 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned long long int) (unsigned char)100);
                var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(5226546152581084934ULL)))))) ? (((((unsigned int) var_11)) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_13]))))))) : (((/* implicit */unsigned int) var_10))));
                /* LoopSeq 2 */
                for (signed char i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_44 [i_12 + 3] [i_13] [i_13]), (((/* implicit */int) (short)14583)))))));
                        var_27 *= arr_49 [i_12] [i_14] [i_13] [i_14];
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            arr_52 [i_12 - 1] [i_13] [i_16] [i_14] [i_15] [i_16] = ((/* implicit */_Bool) 13220197921128466682ULL);
                            arr_53 [i_16] [i_15] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_13])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_12 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_12 + 3]))) : (arr_40 [i_12])))) : (arr_25 [i_15])));
                            arr_54 [i_12] [i_12] [i_13] [i_14] [i_16] [i_15] [i_16] = ((_Bool) arr_42 [i_13 - 2] [i_12 - 2] [i_12 - 1]);
                        }
                        for (signed char i_17 = 0; i_17 < 13; i_17 += 1) 
                        {
                            var_28 = ((/* implicit */short) ((_Bool) arr_34 [i_12] [i_12 + 3] [i_12 + 3] [i_12]));
                            var_29 = (~(((((/* implicit */_Bool) ((unsigned int) arr_51 [i_12 - 1] [i_13 + 1] [i_14] [i_15] [i_17] [i_14]))) ? (((/* implicit */int) arr_29 [i_12])) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_28 [i_12 + 2] [i_13] [i_14])), (var_2)))))));
                        }
                        /* vectorizable */
                        for (int i_18 = 2; i_18 < 11; i_18 += 2) 
                        {
                            arr_61 [i_12] [i_13] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_12 - 3] [i_12] [i_12] [i_12] [i_12 + 2] [i_12]))) + (1437472708880269526LL))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (1215318828U)))))));
                            arr_62 [i_12 + 1] [i_13 - 3] [i_18] = ((/* implicit */_Bool) 13220197921128466656ULL);
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
                    {
                        arr_66 [i_12] [i_12] [i_12 - 3] [i_12 + 1] = ((/* implicit */unsigned int) ((((_Bool) 5226546152581084973ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_12])) ? (((/* implicit */int) arr_50 [i_12 - 4] [i_13] [i_19])) : (((/* implicit */int) arr_28 [i_13] [i_14] [i_19]))))) ? (((long long int) 1U)) : (((/* implicit */long long int) ((int) var_1))))) : (((/* implicit */long long int) (~(var_9))))));
                        var_30 = ((/* implicit */_Bool) (signed char)11);
                        arr_67 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_30 [i_19] [i_13] [i_14])), ((+(((/* implicit */int) (signed char)64))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) arr_64 [i_12 + 2] [i_13] [i_14] [i_19])))))) : (((/* implicit */int) var_2))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 13; i_20 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */short) arr_59 [i_13] [i_13] [i_13] [i_13 - 1]);
                        var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_63 [i_12] [i_12] [i_12] [i_12 - 2])) : (((/* implicit */int) arr_29 [i_12])))) + (((/* implicit */int) ((signed char) ((long long int) (unsigned char)148))))));
                        arr_70 [i_12 + 3] [i_13 + 1] [i_14] [i_20] = ((/* implicit */unsigned int) arr_34 [i_12 - 2] [i_13] [i_14] [i_20]);
                        var_33 = ((((/* implicit */_Bool) ((arr_40 [i_13 - 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_13 - 2] [i_20])))))) ? (min((-5805662762764662560LL), (((/* implicit */long long int) arr_31 [i_13 + 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_12 + 2] [i_13 - 3] [i_14] [i_20])) ? (arr_40 [i_13 - 1]) : (((/* implicit */unsigned int) var_10))))));
                        arr_71 [i_12 - 3] = ((/* implicit */_Bool) ((unsigned int) ((arr_51 [i_12 + 3] [i_14] [i_14] [i_12 - 4] [i_13 - 1] [i_20]) & (arr_51 [i_14] [i_13 - 3] [i_13 + 1] [i_12 - 2] [i_13 - 1] [i_14]))));
                    }
                    arr_72 [i_13] [i_13 - 2] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) arr_69 [i_12] [i_12] [i_12 - 3] [i_12 - 3] [i_12] [i_12])) / (((/* implicit */int) arr_69 [i_12 + 3] [i_12] [i_12 + 2] [i_13 - 3] [i_13] [i_14]))));
                    var_34 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((4294967276U), (arr_60 [i_13 - 1] [i_13 - 3])))), (((((/* implicit */_Bool) arr_33 [i_12 + 2] [i_13] [i_14] [i_14])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5805662762764662575LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_56 [i_12 - 4] [i_13 + 1] [i_12] [i_13 + 1] [i_14] [i_14] [i_12 + 3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_28 [i_12] [i_13] [i_14])))))))));
                }
                for (int i_21 = 4; i_21 < 12; i_21 += 2) 
                {
                    var_35 = ((/* implicit */unsigned int) (+((~(max((((/* implicit */int) var_5)), (-651345230)))))));
                    arr_76 [i_12 + 1] [i_13] [i_21] [i_21] = ((/* implicit */signed char) var_2);
                }
            }
        } 
    } 
}
