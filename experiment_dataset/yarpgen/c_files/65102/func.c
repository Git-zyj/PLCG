/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65102
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_16 = (-((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_3 [(_Bool)1]) : (((/* implicit */long long int) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (int i_3 = 3; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_13 [i_3] [i_2] = arr_11 [i_1] [i_2] [1U] [i_3] [i_3 - 3] [i_3];
                        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((-248075325) + (((/* implicit */int) (_Bool)1))))) + ((+(arr_8 [i_1] [i_1] [i_1])))));
                        arr_15 [i_3] [i_3] [i_2] [i_3] [i_2] [i_0 - 1] = (+(248075324));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) (~(arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) ((4095ULL) < (15740764057121573497ULL)));
            var_19 = ((/* implicit */unsigned short) (-(arr_7 [i_4])));
        }
    }
    /* LoopSeq 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_20 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_22 [i_6] [i_6])))) - (((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (((/* implicit */int) arr_22 [i_6] [i_6])) : (((/* implicit */int) arr_22 [i_6] [i_6]))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? ((((!(((/* implicit */_Bool) arr_22 [(short)17] [i_6])))) ? ((-(var_6))) : (((/* implicit */int) arr_22 [i_6] [i_6])))) : (((((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (((/* implicit */int) arr_22 [i_6] [i_6])) : (((/* implicit */int) var_4)))) * (((/* implicit */int) arr_22 [i_6] [i_6]))))));
        arr_24 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? ((-(arr_23 [i_6] [i_6]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)73)))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -447975365)) != (15359890416064266020ULL)));
    }
    for (int i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        arr_27 [i_7] [i_7] = ((/* implicit */int) arr_26 [i_7]);
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            arr_31 [i_8] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_7] [i_8]))));
            /* LoopNest 2 */
            for (long long int i_9 = 1; i_9 < 22; i_9 += 2) 
            {
                for (int i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_40 [(unsigned short)0] [(unsigned short)0] [i_8] [i_7] [i_11] [5] [i_8] = ((/* implicit */signed char) var_0);
                            var_23 = ((/* implicit */unsigned short) arr_35 [i_7] [i_8] [i_7] [14ULL] [i_7] [i_11]);
                            arr_41 [i_9] [i_8] = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) arr_30 [i_9 + 1] [i_8])), (arr_35 [i_9 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))), (arr_38 [i_11] [i_8 + 1] [i_9 - 1])));
                            var_24 *= (((~(((/* implicit */int) arr_37 [i_7] [i_7] [i_10] [i_9 - 1])))) & (((/* implicit */int) min((arr_37 [i_8] [i_9] [i_7] [i_9 - 1]), (arr_37 [i_9 - 1] [i_9] [i_10] [i_9 - 1])))));
                        }
                        for (unsigned short i_12 = 3; i_12 < 22; i_12 += 2) 
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_7] [i_9 - 1] [i_10] [i_12 + 1])))))));
                            var_26 = ((/* implicit */_Bool) (-((-(arr_29 [i_10])))));
                        }
                        var_27 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_7] [i_7] [i_10] [i_10] [i_9 - 1]))) ^ (arr_42 [i_10] [i_10] [i_8 + 1] [i_10] [i_7]))))));
                        /* LoopSeq 2 */
                        for (int i_13 = 3; i_13 < 22; i_13 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_35 [i_10] [i_8] [i_9 + 1] [6] [i_10] [i_13]))));
                            arr_47 [i_7] [i_8] [i_9] [i_10] [i_13] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7] [i_7] [13U] [i_7]))) == (arr_36 [i_7] [i_8 + 1] [i_8] [i_13])))), (arr_44 [i_13 - 2] [i_13] [21LL] [i_13] [21LL])))));
                            var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_43 [i_8 + 1] [i_9 - 1] [i_8] [i_13 - 3] [i_13 - 2]))));
                        }
                        for (unsigned long long int i_14 = 3; i_14 < 21; i_14 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) (((+(arr_25 [i_14 - 1]))) * (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6731380619738577088LL)))) / ((-(2705980016587978119ULL)))))));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_46 [i_14 + 1] [19ULL] [i_9] [i_8] [19ULL]))))), (((arr_46 [i_14 + 1] [i_8] [i_9] [i_10] [i_14]) / (arr_46 [i_14 + 2] [i_14 + 2] [i_9] [i_10] [i_9]))))))));
                        }
                        arr_50 [i_10] [i_8] [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_8] [i_9 - 1])) ? (((/* implicit */long long int) var_2)) : (arr_42 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_9 + 1])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_42 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_9 + 1])), (arr_36 [i_7] [i_8 + 1] [i_8] [i_9 + 1]))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (arr_33 [i_8 + 1] [i_8 + 1]) : (arr_33 [i_8 + 1] [i_8 + 1])))));
            var_33 -= ((/* implicit */unsigned int) arr_25 [(unsigned short)6]);
        }
        var_34 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_14) : (max((((/* implicit */unsigned int) arr_48 [i_7] [i_7])), (arr_46 [i_7] [i_7] [i_7] [i_7] [i_7])))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) / ((+(var_1))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_48 [i_7] [i_7])))))));
    }
    /* vectorizable */
    for (long long int i_15 = 3; i_15 < 12; i_15 += 2) 
    {
        arr_54 [12ULL] [i_15] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
        /* LoopSeq 2 */
        for (long long int i_16 = 1; i_16 < 12; i_16 += 2) 
        {
            var_35 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [(signed char)16] [i_15 - 2] [(signed char)16] [i_15 - 2])) ? (((((/* implicit */unsigned long long int) arr_29 [i_16])) / (arr_25 [i_16]))) : ((~(arr_36 [(unsigned char)0] [(unsigned char)0] [(unsigned short)2] [i_16 + 1])))));
            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (-((~(2754280189U))))))));
            /* LoopSeq 1 */
            for (int i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                arr_61 [i_15 - 2] [i_16] [i_17] = ((((/* implicit */_Bool) arr_38 [i_16 + 1] [i_15 - 3] [i_17])) ? (arr_38 [i_16 - 1] [i_15 - 1] [i_17]) : (arr_38 [i_16 + 1] [i_15 + 1] [i_17]));
                var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
                arr_62 [i_15] [i_15] [i_17] = ((/* implicit */long long int) var_11);
            }
        }
        for (unsigned int i_18 = 1; i_18 < 12; i_18 += 2) 
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                for (unsigned int i_20 = 0; i_20 < 13; i_20 += 2) 
                {
                    {
                        var_38 = ((/* implicit */signed char) var_15);
                        var_39 = ((/* implicit */int) arr_53 [i_19] [i_15]);
                    }
                } 
            } 
            arr_70 [i_15] [i_18] = ((/* implicit */unsigned long long int) ((arr_46 [i_15 - 1] [i_15 - 1] [i_15 - 3] [i_18 + 1] [i_18 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_18 + 1] [i_15 - 3])))));
            arr_71 [i_15 - 2] [i_18 - 1] [i_18] = ((/* implicit */long long int) ((arr_56 [i_18 - 1] [i_18 - 1] [i_15 - 1]) != (((/* implicit */unsigned long long int) arr_35 [i_15] [i_18 - 1] [i_18] [i_18] [i_18 - 1] [i_15 - 1]))));
        }
        var_40 = ((/* implicit */int) ((arr_4 [i_15 - 1] [i_15 - 2]) == (arr_4 [i_15 - 1] [i_15 - 2])));
    }
}
