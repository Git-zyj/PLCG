/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7088
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
    var_11 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1])))))));
            var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-6455)) : (((/* implicit */int) (short)6456))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_11 [i_1] [i_1] = ((/* implicit */long long int) (_Bool)1);
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            arr_16 [i_1] [i_0] [i_0] [i_3] [2] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_3]);
                            var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)6455)) && (((/* implicit */_Bool) 2017612633061982208LL))));
                            var_14 = ((((/* implicit */_Bool) arr_15 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 3] [i_3])) ? (((/* implicit */unsigned long long int) ((arr_9 [i_3] [2ULL] [i_3] [i_3 + 2]) ? (((/* implicit */int) (short)6443)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_0]))) : (arr_12 [i_0]))));
                        }
                        for (int i_5 = 3; i_5 < 18; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((int) arr_18 [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_5 - 1] [i_3] [i_5])))));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_5 + 1] [i_3] [(_Bool)0] [i_3] [i_3 + 1])))))));
                            arr_19 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) & (((/* implicit */int) arr_4 [i_0] [i_2] [i_1]))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)255))) ? (var_4) : (((unsigned int) (unsigned char)96))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3 + 2])) ? (arr_1 [i_3]) : (arr_1 [i_3 + 3])));
                        }
                        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            arr_22 [11LL] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */_Bool) (~(arr_7 [i_0] [i_3 + 3] [i_3] [i_3])));
                            var_19 = ((/* implicit */_Bool) ((short) arr_9 [i_0] [i_6] [i_2] [i_1]));
                        }
                    }
                } 
            } 
        }
        arr_23 [i_0] [i_0] = ((/* implicit */short) ((long long int) arr_1 [i_0]));
    }
    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        var_20 = ((/* implicit */_Bool) max((min((((long long int) (short)-6443)), (((/* implicit */long long int) arr_25 [(_Bool)1] [i_7])))), (((/* implicit */long long int) arr_24 [11U]))));
        arr_27 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) (unsigned char)103);
        var_21 = ((/* implicit */short) arr_24 [i_7]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        arr_30 [i_8] |= ((/* implicit */long long int) arr_29 [i_8]);
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (short)-6454)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_8]))) : (var_0)))))));
    }
    for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (short i_11 = 1; i_11 < 23; i_11 += 4) 
            {
                {
                    arr_39 [i_9 - 1] [i_10] [i_11] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_29 [i_9]), (((unsigned short) arr_31 [i_11])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 3; i_12 < 21; i_12 += 2) 
                    {
                        for (short i_13 = 2; i_13 < 20; i_13 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) arr_28 [i_12 + 3]);
                                arr_45 [i_12] [i_10] [i_13] [i_10] [i_12] = ((((arr_28 [i_9 + 1]) ? (((/* implicit */int) (short)6454)) : ((-(((/* implicit */int) (_Bool)1)))))) * ((+(((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_24 = ((/* implicit */short) (signed char)-102);
                        arr_48 [i_10] [i_10] [(_Bool)1] [i_14] = (~(min((((/* implicit */unsigned int) (signed char)-32)), (((((/* implicit */_Bool) var_5)) ? (arr_42 [i_9] [(unsigned short)13] [i_11 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6458))))))));
                        arr_49 [(unsigned short)1] [i_10] [i_14] [i_14] [i_10] [i_14] = ((/* implicit */unsigned short) ((long long int) ((arr_46 [i_11 + 1] [i_11 + 1] [i_10] [i_10] [i_9 + 1] [i_9 - 2]) ? (((/* implicit */int) arr_46 [i_11 + 1] [i_11 - 1] [i_10] [i_10] [i_9 + 1] [i_9])) : (((/* implicit */int) (_Bool)1)))));
                        var_25 = ((/* implicit */int) (_Bool)1);
                    }
                }
            } 
        } 
        arr_50 [i_9] = ((/* implicit */_Bool) ((short) (+(((((/* implicit */_Bool) arr_43 [i_9 - 1] [i_9] [i_9] [i_9 + 1] [i_9])) ? (arr_43 [i_9 + 1] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_9] [i_9] [i_9] [i_9 + 1]))))))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_9 - 2])) ? (((((/* implicit */int) arr_36 [(_Bool)1])) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((arr_36 [i_9 - 2]), (arr_36 [i_9 + 1])))))))));
        arr_51 [(short)0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)5)))), (((((/* implicit */_Bool) arr_32 [i_9])) ? (arr_37 [i_9]) : (var_0)))))), (((15555423892768348820ULL) - (((/* implicit */unsigned long long int) -1))))));
        arr_52 [i_9 - 2] = ((/* implicit */_Bool) (~(((arr_33 [i_9] [i_9 - 1]) / (arr_43 [(unsigned char)17] [i_9 - 1] [i_9] [i_9 - 2] [i_9])))));
    }
    var_27 &= ((((min((15555423892768348804ULL), (((/* implicit */unsigned long long int) var_3)))) != (((/* implicit */unsigned long long int) var_0)))) ? (var_0) : (min((((/* implicit */long long int) min((859143628), (86405744)))), ((~(var_0))))));
    /* LoopSeq 3 */
    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_16 = 3; i_16 < 11; i_16 += 4) 
        {
            var_28 = ((/* implicit */_Bool) max((min((arr_5 [i_16 + 3]), (arr_5 [i_16 - 1]))), (((arr_5 [i_16 + 2]) >> (((/* implicit */int) (_Bool)1))))));
            arr_59 [i_15] [(_Bool)1] [(_Bool)1] = ((((unsigned long long int) arr_38 [10LL])) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -8428146041469959161LL)) - (arr_53 [i_15])))) ? (arr_31 [i_16 + 3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_15])) ? (12) : (((/* implicit */int) (_Bool)1)))))))));
            arr_60 [i_15] [i_16 - 1] [i_16 - 1] = max((((/* implicit */long long int) max(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1))))), (max((9007199254740990LL), (((/* implicit */long long int) ((arr_9 [i_16] [(unsigned short)9] [i_15] [i_15]) ? (((/* implicit */int) arr_14 [i_15] [0LL] [0LL] [i_16 + 2] [0LL])) : (((/* implicit */int) arr_54 [i_15]))))))));
            arr_61 [i_15] [i_15] = ((/* implicit */_Bool) min((min((arr_35 [i_15] [i_16 - 1]), (((/* implicit */int) arr_28 [(signed char)17])))), (((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) arr_56 [i_15]))), (arr_20 [i_15] [i_15] [i_15] [i_15] [i_15] [(_Bool)1]))))));
        }
        var_29 = ((/* implicit */int) (-(min((arr_31 [i_15]), (arr_43 [i_15] [i_15] [i_15] [i_15] [i_15])))));
        arr_62 [i_15] [i_15] = max((((/* implicit */unsigned long long int) 1520850224)), (min((arr_12 [i_15]), (((/* implicit */unsigned long long int) 12)))));
    }
    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 1) 
    {
        var_30 = ((/* implicit */_Bool) arr_63 [i_17]);
        arr_67 [i_17] [i_17] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) arr_40 [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_40 [i_17] [i_17] [i_17] [i_17])))), (((/* implicit */int) max((arr_40 [i_17] [i_17] [i_17] [i_17]), (arr_40 [i_17] [i_17] [i_17] [i_17]))))));
    }
    for (unsigned short i_18 = 1; i_18 < 15; i_18 += 1) 
    {
        var_31 -= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_20 [(_Bool)0] [(unsigned short)6] [i_18 - 1] [i_18] [i_18] [(_Bool)0])), (((long long int) arr_36 [i_18 + 4]))));
        /* LoopNest 3 */
        for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 3) 
        {
            for (int i_20 = 0; i_20 < 19; i_20 += 2) 
            {
                for (int i_21 = 0; i_21 < 19; i_21 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) arr_71 [i_18] [i_21]);
                            arr_80 [i_21] [i_21] [i_18] [i_18 + 1] [i_18] [i_18 + 1] [i_18 + 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_18 + 1] [i_19] [i_18])) - (((/* implicit */int) arr_40 [i_18 - 1] [i_18] [i_18] [i_18 + 4]))));
                            var_33 *= ((/* implicit */_Bool) ((unsigned long long int) arr_43 [i_18] [i_18] [i_18 + 1] [(signed char)9] [i_19]));
                        }
                        arr_81 [(short)12] [i_18] [i_18] [i_19] [i_18] = ((((((((/* implicit */_Bool) arr_44 [(_Bool)1] [i_19] [i_18 + 1] [i_21] [i_19] [i_21])) ? (arr_1 [i_18 + 1]) : (arr_44 [i_18] [i_18] [i_18 + 4] [i_18 + 4] [(_Bool)1] [i_19]))) + (2147483647))) >> (((((((arr_1 [i_18 + 2]) + (2147483647))) << (((((arr_1 [i_18 + 1]) + (306996072))) - (16))))) - (1840487574))));
                    }
                } 
            } 
        } 
        arr_82 [i_18] [i_18] = ((/* implicit */short) ((unsigned char) var_10));
        arr_83 [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_35 [i_18 + 1] [i_18 + 4]) + (2147483647))) << (((((unsigned int) arr_25 [i_18] [(short)8])) - (4294935638U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1)) && (((/* implicit */_Bool) arr_43 [i_18 - 1] [i_18] [i_18] [i_18] [(_Bool)1]))))) : ((~(((/* implicit */int) arr_10 [i_18 + 4] [i_18] [i_18] [i_18] [i_18 + 1]))))));
    }
}
