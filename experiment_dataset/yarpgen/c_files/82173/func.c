/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82173
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
                arr_5 [i_1] &= ((/* implicit */short) ((arr_1 [i_1]) | (((((/* implicit */int) var_8)) & ((~(((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) 416746730U);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (var_9))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_8)))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_15 = ((/* implicit */int) arr_14 [i_3] [i_3] [i_3]);
                        arr_17 [i_3] [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_4] [i_3])) ? (((/* implicit */int) ((unsigned short) var_12))) : (-1754285135))))));
                        var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_11 [i_2] [i_3 + 1] [i_4])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)-17))))) ? (((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) arr_8 [i_2])) : (arr_10 [i_3] [i_3] [i_3]))) : (arr_10 [i_3] [i_3 + 3] [i_3]))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_10))) ? (((unsigned int) arr_10 [i_3] [i_2] [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_5])))));
                        arr_18 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) var_11);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) min((var_18), (var_2)));
        var_19 *= ((signed char) (((!(((/* implicit */_Bool) (unsigned short)63260)))) && (((/* implicit */_Bool) (signed char)-17))));
    }
    /* LoopSeq 2 */
    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        arr_22 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_6]))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 3878220585U)) || (((/* implicit */_Bool) 416746710U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)2)), (arr_12 [i_6] [(signed char)8] [(signed char)8])))) && (((/* implicit */_Bool) ((unsigned int) arr_21 [i_6] [i_6])))))) : (((/* implicit */int) var_5)))))));
        var_21 = ((/* implicit */int) var_8);
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_3 [i_7 + 1]))));
        /* LoopSeq 3 */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            /* LoopNest 3 */
            for (short i_9 = 1; i_9 < 12; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) var_11);
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_7])) && ((!(((/* implicit */_Bool) 5638454514419516067ULL))))));
                            arr_34 [i_7] [i_8] [i_9 + 1] [i_10] [i_11] [10U] [i_10] &= ((/* implicit */unsigned short) arr_9 [i_7]);
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4347)) / (((/* implicit */int) (short)4095)))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_3 [i_7 + 1])) + (120))))))));
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_7] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_11))))));
            var_28 = ((/* implicit */unsigned short) arr_29 [(short)6] [(short)6] [11U] [i_7] [i_7] [(short)6]);
        }
        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_13 = 3; i_13 < 13; i_13 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned char) arr_9 [i_12]);
                arr_39 [i_13] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_7] [i_12] [i_12]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_7] [i_7] [(short)11] [i_13] [(short)0] [(signed char)12])))))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 1; i_14 < 12; i_14 += 4) 
                {
                    for (unsigned char i_15 = 1; i_15 < 13; i_15 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) 0ULL))));
                            arr_44 [i_7] [i_14] [(unsigned short)8] [i_7] [4ULL] [7U] [i_7 + 1] = ((/* implicit */unsigned char) arr_13 [(unsigned short)1] [i_12] [i_12] [i_12]);
                            var_31 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_35 [i_13] [i_13] [i_13 - 3]) : (arr_35 [i_13] [i_13] [i_13 - 2])));
                        }
                    } 
                } 
                arr_45 [i_7] = ((/* implicit */signed char) (~((-(arr_15 [10ULL] [10ULL] [i_7] [(short)2])))));
            }
            for (signed char i_16 = 3; i_16 < 13; i_16 += 1) /* same iter space */
            {
                arr_50 [i_7] [i_7] [i_7] [i_12] = (-((-(((/* implicit */int) arr_37 [i_7])))));
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)38542))));
                    var_33 = ((/* implicit */int) var_6);
                }
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_7 - 1])) ? (389048528380437466ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51326))))))));
            }
            for (unsigned short i_18 = 0; i_18 < 15; i_18 += 3) 
            {
                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_7] [i_7] [i_18])) ? (var_4) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_7)))))));
                var_36 = ((/* implicit */signed char) ((unsigned char) arr_3 [i_7 - 1]));
            }
            var_37 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20555)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_24 [i_7] [i_7]))))) ? (((/* implicit */int) (unsigned short)44981)) : (((int) var_1))));
        }
        for (unsigned short i_19 = 0; i_19 < 15; i_19 += 2) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (+(3162954830U))))));
            /* LoopSeq 1 */
            for (signed char i_20 = 0; i_20 < 15; i_20 += 4) 
            {
                arr_64 [i_20] [i_19] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_62 [(unsigned short)7] [i_7 - 1])) ? (((/* implicit */int) arr_48 [i_7 + 1] [i_19] [i_20])) : (arr_31 [i_19] [(short)14] [i_20] [i_20])));
                var_39 += ((/* implicit */unsigned long long int) arr_63 [(short)10] [i_7 - 2] [i_7 - 2] [i_7 - 2]);
                var_40 &= ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)18682)))) ? (((((/* implicit */int) arr_48 [i_7] [i_7] [i_20])) + (((/* implicit */int) arr_43 [i_7 - 2] [i_19] [(_Bool)1] [i_20] [(_Bool)1])))) : ((-(((/* implicit */int) var_5))))));
            }
            /* LoopSeq 2 */
            for (int i_21 = 0; i_21 < 15; i_21 += 1) 
            {
                arr_68 [(short)3] [i_7] [i_19] [i_21] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)46868)) <= (((/* implicit */int) arr_40 [i_7] [i_19] [i_21] [i_7])))) ? (((/* implicit */int) arr_41 [i_21] [i_19] [i_19] [i_19] [i_7 + 1] [i_7 - 1])) : (((/* implicit */int) arr_57 [(unsigned char)1]))));
                arr_69 [i_7] [i_7] [i_7] [(signed char)3] &= ((/* implicit */short) arr_66 [i_7 + 1]);
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_72 [i_7] [i_22] [i_19] [i_7] = ((/* implicit */unsigned long long int) arr_48 [i_7] [i_19] [i_22]);
                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_70 [(unsigned short)2] [(signed char)11])) ? (arr_70 [i_7] [i_7]) : (arr_70 [i_7] [i_7])));
            }
            arr_73 [i_7] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)14210)) || (((/* implicit */_Bool) (unsigned short)44998))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_23 = 0; i_23 < 15; i_23 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                for (short i_25 = 2; i_25 < 14; i_25 += 1) 
                {
                    for (unsigned char i_26 = 0; i_26 < 15; i_26 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (arr_46 [i_7] [i_7] [i_24])))) ? (arr_30 [i_24] [6U]) : (((/* implicit */unsigned int) arr_27 [i_7 - 2] [i_23] [i_23] [i_24]))));
                            var_43 = ((/* implicit */unsigned int) ((unsigned short) arr_21 [i_24] [(unsigned short)13]));
                            var_44 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (((arr_47 [i_7] [i_23] [i_24] [i_26]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
            } 
            arr_84 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_7 - 2])) ? (((unsigned int) (short)27300)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_71 [8] [i_7 + 1] [i_7 - 2] [i_7]))))))));
        }
    }
}
