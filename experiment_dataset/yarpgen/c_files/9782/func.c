/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9782
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
    for (short i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0 - 1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0 + 1])) * (((/* implicit */int) arr_0 [i_0 + 1])))) * (((((/* implicit */int) var_6)) - (((/* implicit */int) arr_0 [i_0 + 1]))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        {
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_0 [i_3 + 1]);
                            arr_16 [i_0] [i_2] [i_0] [4ULL] [i_0] = ((/* implicit */int) (~(((((/* implicit */long long int) -8)) * (((575334852396580864LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8846)))))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) -668346271)) : (arr_11 [i_0] [(_Bool)1] [(_Bool)1])))), (((((/* implicit */_Bool) -505388559)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56689))) : (arr_10 [i_0] [i_0] [i_1] [i_0] [i_0 - 1] [i_1])))))));
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            arr_21 [i_0] [i_0] [9ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1623)) || (arr_1 [i_0] [i_0])))), (min((18027179116157408080ULL), (((/* implicit */unsigned long long int) 3942310409923356763LL)))))))));
            arr_22 [(unsigned short)4] [(unsigned short)4] = ((/* implicit */unsigned long long int) var_4);
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) 3942310409923356763LL)) || (((/* implicit */_Bool) (unsigned short)56011))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56690))))))), (((/* implicit */int) var_7))));
        }
        arr_24 [i_0] = ((/* implicit */unsigned long long int) -1528763517);
        arr_25 [(short)3] [i_0] = arr_14 [(unsigned char)0] [i_0] [6ULL] [(_Bool)1] [6ULL] [i_0] [i_0];
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 9; i_6 += 2) /* same iter space */
    {
        arr_28 [i_6 - 1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-5436)) ? (((/* implicit */unsigned long long int) arr_20 [i_6 - 1] [i_6])) : (2097151ULL)));
        arr_29 [5] [5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_6] [i_6 + 1] [i_6 - 1])) ? (((((/* implicit */_Bool) 2273994053263928719ULL)) ? (var_5) : (-668346271))) : (((/* implicit */int) arr_0 [i_6 + 1]))));
        arr_30 [i_6 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1516308862U)) ? (arr_4 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)-28188)))))) ? (((/* implicit */unsigned long long int) arr_7 [i_6 - 1])) : (arr_26 [i_6 + 1])));
    }
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                {
                    arr_39 [i_9] [i_9] [i_9] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_0)), (min((min((((/* implicit */unsigned long long int) (signed char)-52)), (arr_26 [i_7 + 1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_7] [i_7])))))))));
                    arr_40 [i_9] [i_9] [(signed char)7] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_7] [i_7])) - (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) (signed char)-6))))) : (var_11))) * (max((((/* implicit */unsigned long long int) (signed char)-122)), (2898637323911920650ULL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        arr_43 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_9] = ((/* implicit */signed char) var_13);
                        arr_44 [i_8] [i_8] [1] [i_8] [i_10] [i_8] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)8846))))));
                    }
                }
            } 
        } 
        arr_45 [i_7] = ((/* implicit */short) arr_6 [i_7] [i_7]);
        /* LoopSeq 1 */
        for (short i_11 = 1; i_11 < 9; i_11 += 2) 
        {
            arr_49 [i_11] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_7 + 1]))));
            arr_50 [(unsigned short)2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((arr_13 [i_11 - 1] [i_11 + 1]), (((/* implicit */unsigned short) (!((_Bool)1))))))), (((((/* implicit */_Bool) arr_26 [i_7 + 1])) ? (arr_6 [i_11 + 1] [5]) : (((((/* implicit */_Bool) arr_37 [i_7] [i_7] [i_7 + 1])) ? (var_11) : (((/* implicit */unsigned long long int) var_13))))))));
        }
        /* LoopSeq 2 */
        for (signed char i_12 = 2; i_12 < 8; i_12 += 1) 
        {
            arr_53 [i_7] = (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_3)) * (arr_6 [i_7] [i_7 + 1]))) - (min((arr_26 [2ULL]), (arr_6 [i_7] [i_7 + 1])))))));
            arr_54 [i_7 + 1] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_12 + 1] [i_12 + 2] [i_12])) ? (((/* implicit */int) (unsigned short)8846)) : (((/* implicit */int) arr_36 [i_12 + 1] [i_12 + 1] [8]))))) ? (((((/* implicit */_Bool) arr_36 [i_12 - 2] [i_12] [i_12])) ? (((/* implicit */int) arr_36 [i_12 - 2] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) arr_36 [i_12 - 1] [i_12 - 1] [i_12 - 1])) - (((/* implicit */int) arr_36 [i_12 + 2] [i_12 + 2] [i_12]))))));
        }
        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            arr_58 [i_7] [i_7 + 1] [i_7] = ((/* implicit */_Bool) arr_7 [i_7 + 1]);
            arr_59 [i_7] [i_7] = ((/* implicit */long long int) (((+(arr_42 [i_13] [i_7 + 1] [i_13]))) / (((((/* implicit */_Bool) arr_42 [i_13] [i_13] [i_13])) ? (((/* implicit */int) var_4)) : (arr_42 [i_13] [i_13] [i_13])))));
            /* LoopNest 3 */
            for (unsigned char i_14 = 2; i_14 < 7; i_14 += 3) 
            {
                for (unsigned short i_15 = 1; i_15 < 8; i_15 += 3) 
                {
                    for (long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        {
                            arr_70 [i_14] [i_16] [i_16] [i_16] [i_16] [(unsigned char)6] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 814249022U)), (2273994053263928719ULL))))))));
                            arr_71 [i_16] [5LL] [i_14] [i_15] [i_16] = ((min((((/* implicit */long long int) min((1378360847), (((/* implicit */int) (signed char)79))))), (9223372036854775807LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_13] [i_13] [(short)8]))) : (arr_19 [i_7])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((signed char)10), ((signed char)121))))))));
                            arr_72 [i_7] [i_7] [i_7] [i_7 + 1] [i_14] = ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
            } 
            arr_73 [(_Bool)1] [i_13] [(_Bool)1] = ((((min((((/* implicit */long long int) var_8)), (var_2))) / (((/* implicit */long long int) ((/* implicit */int) var_6))))) / (((/* implicit */long long int) ((/* implicit */int) var_4))));
        }
    }
    var_14 = ((/* implicit */signed char) var_8);
}
