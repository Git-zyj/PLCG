/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6441
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) ? (arr_2 [(short)7] [(short)7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((unsigned short) var_3))) : ((~(((/* implicit */int) var_0))))))))));
        var_12 = ((/* implicit */unsigned long long int) ((_Bool) ((int) var_8)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) (+(arr_1 [(unsigned char)3]))))), (var_5)));
                    arr_9 [i_0] [i_1] [i_2] = arr_2 [i_1 - 2] [(unsigned short)11];
                    arr_10 [6] [(unsigned short)2] [8ULL] [i_1] = ((/* implicit */_Bool) ((((min((((/* implicit */long long int) var_5)), (var_3))) / (((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_2))))))) & (min((((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_1 [i_0])))))))));
                }
            } 
        } 
        var_14 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
        arr_11 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((signed char) arr_7 [i_0] [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_15 += ((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_4])) && (((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_3])));
            var_16 = ((/* implicit */short) ((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 4; i_7 < 19; i_7 += 1) 
                    {
                        {
                            arr_25 [i_7 + 4] [4ULL] [i_7] [i_7 + 1] [i_7 + 2] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_7 - 3] [i_7 + 2]))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((-5449396488801205608LL) <= (((/* implicit */long long int) 6U)))))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_3])) ? (((/* implicit */int) arr_24 [(unsigned short)22] [i_4] [i_4] [i_4] [i_4] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
        }
        for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) arr_24 [i_3] [10ULL] [i_8] [i_8] [i_3] [i_8]);
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned char) var_6)))));
        }
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 19; i_11 += 3) 
                {
                    for (unsigned int i_12 = 4; i_12 < 22; i_12 += 1) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned short) (~(var_5)));
                            var_22 += ((/* implicit */short) arr_29 [i_12 + 1] [i_11 + 4] [i_10 - 1]);
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((unsigned char) var_4)))));
                            var_24 = ((((/* implicit */_Bool) arr_20 [i_11 + 4])) ? (((/* implicit */int) arr_20 [i_11 + 2])) : (((/* implicit */int) arr_20 [i_11 + 3])));
                        }
                    } 
                } 
                var_25 += (((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)255)));
                var_26 = ((/* implicit */short) ((int) var_1));
                arr_38 [i_10] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10 - 1] [i_10 + 3] [i_10 + 3] [i_9]))) * (((((/* implicit */long long int) arr_28 [1ULL])) / (var_7)))));
                arr_39 [i_3] [i_9] [i_9] = var_6;
            }
            for (unsigned char i_13 = 2; i_13 < 20; i_13 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_14 = 2; i_14 < 20; i_14 += 2) 
                {
                    arr_47 [(_Bool)1] [(_Bool)1] [i_13] [i_9] = ((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((var_6) + (((/* implicit */unsigned long long int) var_3))))));
                    arr_48 [i_14] = ((/* implicit */unsigned long long int) ((short) ((_Bool) var_9)));
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 3; i_15 < 22; i_15 += 4) 
                    {
                        arr_51 [i_3] [i_3] [i_3] [i_3] [i_3] [i_15] = ((/* implicit */unsigned short) var_4);
                        arr_52 [i_15] = ((/* implicit */unsigned char) (~(var_1)));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((unsigned long long int) (unsigned char)150)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_34 [i_14])))))))));
                        arr_53 [i_15] [(signed char)20] [i_13 + 1] [i_15] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_15] [i_14] [i_9] [(signed char)15] [i_9] [i_3]))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_10)) % (((/* implicit */int) var_0))))));
                    }
                    for (short i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_46 [i_13] [i_13] [i_13] [i_13 - 1]))));
                        arr_56 [i_16] [i_14] [i_13 - 1] [22] [22] = ((/* implicit */short) arr_37 [i_13] [10U] [i_13] [i_13 - 2] [i_13]);
                    }
                    for (signed char i_17 = 0; i_17 < 23; i_17 += 3) 
                    {
                        arr_59 [i_17] = ((/* implicit */unsigned int) ((signed char) var_6));
                        arr_60 [i_3] [i_17] [i_13] [i_14] [i_14] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7)))) ? ((~(var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    }
                    var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_33 [i_14 - 1] [(short)22] [i_3] [i_3]) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) & (arr_40 [i_3])));
                }
                arr_61 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) arr_30 [i_3] [i_13 - 2]))))) & (((/* implicit */int) arr_54 [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_13 + 3]))));
            }
            /* LoopNest 3 */
            for (short i_18 = 2; i_18 < 19; i_18 += 1) 
            {
                for (int i_19 = 0; i_19 < 23; i_19 += 3) 
                {
                    for (short i_20 = 4; i_20 < 22; i_20 += 1) 
                    {
                        {
                            var_30 = ((((/* implicit */_Bool) arr_12 [i_3])) ? (arr_30 [i_3] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_18 - 1]))));
                            arr_69 [i_3] [i_3] [8U] [0LL] [i_3] [i_3] [i_3] = ((/* implicit */short) arr_19 [i_19] [i_20 - 3] [(signed char)4] [i_9]);
                            var_31 = ((/* implicit */short) ((((/* implicit */int) arr_22 [(signed char)16] [i_20 - 4] [8] [i_20 - 3] [i_20 - 4] [i_20])) * (((/* implicit */int) var_10))));
                            var_32 = ((/* implicit */signed char) arr_31 [i_18 + 1] [i_18] [i_18]);
                        }
                    } 
                } 
            } 
        }
        arr_70 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_21 [i_3] [i_3] [i_3] [i_3])))) : (var_6)));
    }
    for (short i_21 = 0; i_21 < 14; i_21 += 2) 
    {
        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) (((!(var_2))) || (((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_7)))))))))))));
        arr_73 [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_4))))));
        var_34 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_45 [i_21])), (((((/* implicit */_Bool) max((-1492466407), (((/* implicit */int) (unsigned char)255))))) ? (max((arr_26 [12U] [i_21] [i_21]), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
        arr_74 [i_21] [i_21] = ((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_72 [(signed char)10]))))), (var_6))));
    }
    var_35 = ((/* implicit */signed char) min((var_35), (var_9)));
    /* LoopSeq 1 */
    for (signed char i_22 = 1; i_22 < 12; i_22 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_23 = 0; i_23 < 14; i_23 += 4) 
        {
            for (signed char i_24 = 1; i_24 < 11; i_24 += 2) 
            {
                for (long long int i_25 = 0; i_25 < 14; i_25 += 2) 
                {
                    {
                        var_36 = ((/* implicit */unsigned short) var_7);
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) var_3))));
                        arr_86 [i_22] [(unsigned char)10] [i_24] [i_25] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_22 + 1] [i_22] [i_22 + 2] [i_24 + 3]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_26 = 4; i_26 < 13; i_26 += 2) 
        {
            for (short i_27 = 0; i_27 < 14; i_27 += 4) 
            {
                {
                    arr_94 [3LL] [i_26] [i_26] [i_26] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_85 [i_27] [i_27] [i_26 - 4] [i_26 + 1] [i_22 + 1]))))));
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (var_7))) ? (((/* implicit */int) ((arr_36 [i_22] [i_26 - 2] [i_27]) >= (((/* implicit */int) var_0))))) : (((/* implicit */int) arr_66 [i_22 - 1] [i_22] [i_22 - 1] [i_22 + 1])))) << (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
        arr_95 [11ULL] [i_22 + 2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_6)))))) & (((long long int) (signed char)100))));
    }
}
