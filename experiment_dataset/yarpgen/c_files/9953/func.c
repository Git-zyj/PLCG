/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9953
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
    var_13 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [(signed char)0] = max((min((((/* implicit */long long int) arr_0 [i_0])), ((~(-8503550774274706927LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26905)) ? (-951329202) : (((/* implicit */int) (unsigned short)8274)))))))));
                    arr_7 [(unsigned short)15] [(short)1] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_11)))) ? (((int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2964458904114284298LL))))))))));
                    arr_8 [i_0] [i_2 + 1] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) max((2045089309), (((/* implicit */int) (unsigned short)40149))))), (2233058705583059006LL)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((max((((/* implicit */int) (signed char)-86)), (var_11))), (((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        arr_11 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) (unsigned short)32865)) : (max((((/* implicit */int) var_0)), (var_11)))))) ? ((~(((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_6))))))) : (min((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_1 [12ULL])) : (((/* implicit */int) (short)30801)))), (((/* implicit */int) arr_4 [(unsigned short)16] [(short)8] [i_3] [i_3])))));
        arr_12 [i_3] = ((/* implicit */short) var_9);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        {
                            arr_21 [(short)2] [i_4] [i_5] [i_6] [(unsigned short)7] = ((/* implicit */unsigned long long int) var_4);
                            arr_22 [i_3] [i_4] [i_5] [i_6] [i_7] [i_3] = ((/* implicit */int) ((arr_10 [i_4] [i_7]) | (((/* implicit */long long int) ((((/* implicit */_Bool) 2754265901U)) ? (arr_17 [i_3] [i_3]) : (((/* implicit */int) arr_19 [15U] [i_4] [i_5] [i_6] [i_6] [11])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 16; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            arr_29 [i_3] [i_3] [10LL] [i_3] [i_9] [i_3] [i_3] = ((/* implicit */short) ((15110638649779538554ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23822)))));
                            arr_30 [i_3] [i_3] [i_3] [i_3] [i_9] [8] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_8] [i_8] [i_8])) * (((/* implicit */int) arr_14 [i_3]))))) | (((11241304777931058940ULL) * (((/* implicit */unsigned long long int) var_2)))));
                        }
                    } 
                } 
                arr_31 [i_4] [8U] [i_8] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))));
                arr_32 [(unsigned short)10] [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_20 [i_8] [2] [i_8] [i_4] [i_3])) : (((/* implicit */int) (short)-23040))));
                arr_33 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_9 [i_4]))) && (((((/* implicit */int) var_8)) > (var_2)))));
            }
            arr_34 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-20322)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (signed char)61)))) + (((/* implicit */int) ((short) var_3)))));
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_42 [(_Bool)1] [i_13] [i_13] [i_12] [i_13] = ((/* implicit */signed char) arr_9 [i_4]);
                            arr_43 [i_3] [i_3] [i_3] [(short)9] [i_3] [i_13] = ((/* implicit */signed char) ((unsigned short) arr_28 [8] [i_4] [i_11] [i_11] [(short)15] [i_13]));
                            arr_44 [i_3] [i_11] [i_13] = ((/* implicit */unsigned short) (~(arr_9 [i_13])));
                            var_15 = (+(111957320));
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopNest 3 */
    for (short i_14 = 0; i_14 < 15; i_14 += 3) 
    {
        for (long long int i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 15; i_16 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 15; i_17 += 3) 
                    {
                        arr_54 [i_14] [5] [i_17] [i_17] [i_16] [i_14] = ((/* implicit */long long int) arr_9 [i_17]);
                        var_16 = ((/* implicit */_Bool) ((((int) var_7)) - (((/* implicit */int) ((short) var_6)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_18 = 0; i_18 < 15; i_18 += 1) 
                        {
                            arr_59 [i_14] [i_17] [(unsigned char)1] = ((/* implicit */short) (unsigned short)14858);
                            arr_60 [i_18] [i_17] [i_16] [i_17] [i_14] = ((/* implicit */int) arr_4 [i_14] [i_15] [i_16] [i_17]);
                        }
                        for (long long int i_19 = 3; i_19 < 14; i_19 += 4) 
                        {
                            arr_65 [i_17] [i_15] [9LL] [i_16] [9LL] [i_19 - 1] = (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_18 [i_14]))))), (min((((/* implicit */long long int) (short)25800)), (arr_53 [i_14] [i_15] [i_16] [11LL])))))));
                            arr_66 [i_17] = ((/* implicit */short) ((((/* implicit */int) max((arr_64 [i_19 - 3] [i_19 - 2] [i_19 - 3]), (arr_64 [i_19 - 3] [i_19] [i_19 + 1])))) | (min((((/* implicit */int) (unsigned char)207)), (max((arr_50 [i_15] [(short)7] [i_19 - 2]), (((/* implicit */int) var_6))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_20 = 3; i_20 < 13; i_20 += 4) 
                    {
                        for (short i_21 = 4; i_21 < 13; i_21 += 4) 
                        {
                            {
                                arr_72 [i_14] [i_14] [(unsigned short)8] [i_20] [i_20] = ((/* implicit */unsigned char) (((+(((1838060478450653009LL) / (((/* implicit */long long int) ((/* implicit */int) var_12))))))) | (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_56 [(unsigned short)10] [i_15] [i_15] [(unsigned short)12] [(unsigned short)10] [i_21])) < (((/* implicit */int) arr_3 [i_16]))))) - (((/* implicit */int) var_0)))))));
                                var_17 = ((/* implicit */_Bool) var_2);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_8)) ? (5947671370987699406LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_14]))))), (((/* implicit */long long int) min((arr_1 [i_14]), (((/* implicit */unsigned char) var_12))))))) | (((/* implicit */long long int) arr_61 [i_14] [i_15] [i_15] [i_16]))));
                }
            } 
        } 
    } 
}
