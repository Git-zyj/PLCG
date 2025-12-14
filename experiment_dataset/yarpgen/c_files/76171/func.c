/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76171
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            arr_4 [i_0] [(short)4] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) - (arr_1 [i_1]))) % (arr_1 [i_0])));
            arr_5 [i_0] [i_0] = arr_1 [i_1];
            arr_6 [i_0] [i_1] = ((/* implicit */int) arr_1 [i_1]);
        }
        for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) arr_1 [i_0]))));
                        arr_16 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_4] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [i_4 + 1]))));
                    }
                } 
            } 
        }
        for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                for (unsigned short i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    {
                        arr_24 [i_0] [i_0] [i_5] [i_6] [i_7] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_5] [i_0]);
                        arr_25 [i_0] [i_5] [i_5] [i_0] = ((/* implicit */unsigned int) arr_13 [i_5] [i_5] [i_0] [i_0] [i_5]);
                        arr_26 [i_0] [i_5] [i_0] [i_7] = ((((((/* implicit */_Bool) arr_21 [i_7])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_21 [i_0])))) + (arr_2 [i_0] [i_5] [i_6]));
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 1; i_8 < 10; i_8 += 2) 
                        {
                            arr_31 [i_6] [0LL] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_6 - 1] [(_Bool)1] [i_6] [i_6])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_8] [4U] [4U] [4U]))) * (arr_8 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6 + 1] [i_6 - 1] [i_6])))));
                            arr_32 [i_0] [8U] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */int) arr_19 [i_8] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [10U] [i_0])) == (((/* implicit */int) arr_19 [i_5] [i_7] [i_5])))))));
                        }
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_6] [i_5] [i_5 + 1])) < (((/* implicit */int) arr_3 [i_5] [i_7] [i_9]))));
                            arr_36 [i_0] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_33 [i_0] [i_0] [i_5 - 1] [i_7 + 1]);
                            arr_37 [i_0] [i_0] [i_0] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_6] [i_7 + 1] [i_7 + 1])))));
                        }
                        for (int i_10 = 1; i_10 < 9; i_10 += 2) 
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_10 + 1] [i_6 + 1] [i_5 - 1] [i_5])) ? (((/* implicit */unsigned long long int) arr_7 [i_5 + 1] [i_0])) : (arr_14 [i_10] [i_10 + 2] [i_6 + 1] [i_5 + 1] [i_0])));
                            arr_41 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_6] [i_0])) ? (arr_17 [i_0] [i_5]) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) arr_22 [i_10 + 1])) : (((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_7] [i_7] [i_6] [i_0]))) : (arr_2 [i_0] [i_0] [i_0])))));
                            arr_42 [i_0] [i_0] [i_0] [i_7] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1883628390)) ? (((/* implicit */unsigned long long int) -1883628386)) : (((((/* implicit */_Bool) 143706633U)) ? (13007014503129993876ULL) : (((/* implicit */unsigned long long int) 4294967295U))))));
                            arr_43 [i_0] [i_5] [i_5] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */_Bool) arr_22 [i_10]);
                        }
                    }
                } 
            } 
            arr_44 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_30 [i_0] [i_5] [i_5] [i_0])) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_5])) : (((/* implicit */int) arr_0 [i_0])))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_5])) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])))))));
            arr_45 [8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_5 + 1] [i_5 - 1])) ? (((/* implicit */int) arr_19 [i_5 - 1] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_19 [i_5 + 1] [i_5 + 1] [i_5 - 1]))));
            arr_46 [i_0] = ((/* implicit */short) arr_20 [i_0] [i_0] [i_5] [i_5]);
        }
        for (unsigned int i_11 = 1; i_11 < 11; i_11 += 1) /* same iter space */
        {
            arr_49 [i_0] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_0] [i_11] [i_0] [i_11] [i_11] [i_0] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_11 + 1] [i_11] [i_11 + 1] [i_11] [i_11 - 1] [i_11] [i_11 - 1]))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_39 [i_11] [i_11] [i_11] [i_11] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0])))))));
            arr_50 [(signed char)6] &= ((/* implicit */unsigned int) arr_38 [i_0] [i_11 + 1] [i_11 - 1]);
            arr_51 [i_0] = ((/* implicit */unsigned char) arr_33 [i_0] [i_0] [i_0] [i_11]);
        }
        arr_52 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 201822267)) ? (5439729570579557725ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190)))));
        /* LoopSeq 1 */
        for (unsigned int i_12 = 2; i_12 < 9; i_12 += 1) 
        {
            arr_55 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_12 - 2] [i_12 - 2] [i_12 + 3] [i_12 - 2]))) & (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
            arr_56 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_28 [i_0] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_53 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_12] [i_0] [i_0]))) : (arr_17 [i_0] [i_12]))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24227))))))));
            arr_57 [i_0] = ((/* implicit */long long int) ((arr_53 [i_12 - 2]) | (arr_53 [i_12 - 2])));
        }
        /* LoopSeq 1 */
        for (unsigned int i_13 = 2; i_13 < 11; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (int i_15 = 1; i_15 < 9; i_15 += 1) 
                {
                    {
                        arr_65 [i_13] [i_13] [i_14] = ((((/* implicit */_Bool) arr_61 [i_15 - 1] [i_13] [i_13 - 1])) ? (((/* implicit */int) arr_61 [i_15 + 1] [i_13] [i_13 + 1])) : (((/* implicit */int) arr_61 [i_15 + 1] [i_13] [i_13 - 2])));
                        arr_66 [i_0] [i_0] [i_13] [i_0] = ((((/* implicit */_Bool) arr_60 [i_13 - 1] [i_13 + 1])) ? (arr_60 [i_13 + 1] [i_13 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_15 + 3] [i_15 + 2] [i_13 - 1]))));
                        arr_67 [i_0] = ((/* implicit */int) arr_30 [i_0] [i_13 + 1] [i_13 + 1] [i_15]);
                    }
                } 
            } 
            arr_68 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))) * (arr_60 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_48 [i_0]) > (arr_33 [i_0] [i_0] [i_0] [i_0]))))) : (arr_53 [i_0])));
            arr_69 [i_0] [i_13] [i_0] = ((((/* implicit */_Bool) arr_12 [i_0] [i_13 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_58 [i_13] [i_0] [i_0])) * (((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_30 [i_0] [i_13] [i_0] [i_0])) ? (arr_60 [i_0] [i_13]) : (arr_8 [i_0] [i_0] [i_0]))));
        }
    }
    for (signed char i_16 = 1; i_16 < 19; i_16 += 4) 
    {
        arr_73 [i_16] [i_16] = ((((((((/* implicit */int) (_Bool)1)) / (29))) != (((/* implicit */int) arr_71 [i_16 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_72 [i_16])) || (((/* implicit */_Bool) ((arr_72 [i_16]) / (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_16])))))))))) : (arr_70 [i_16 + 2]));
        arr_74 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_71 [i_16 + 1])) % (((/* implicit */int) arr_71 [i_16]))));
        arr_75 [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_16 + 3])) ? (arr_72 [i_16 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_16 - 1])))))) && (((/* implicit */_Bool) arr_71 [i_16 - 1]))));
        arr_76 [i_16] = ((/* implicit */unsigned long long int) arr_72 [i_16]);
    }
    for (unsigned int i_17 = 1; i_17 < 11; i_17 += 1) 
    {
        arr_79 [i_17] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_71 [i_17])) * (((((/* implicit */_Bool) arr_77 [i_17 + 2])) ? (((/* implicit */int) arr_71 [i_17 + 3])) : (((/* implicit */int) ((arr_78 [i_17]) <= (arr_70 [i_17]))))))));
        arr_80 [i_17] = ((/* implicit */unsigned long long int) arr_72 [i_17 + 1]);
        arr_81 [i_17] = ((((/* implicit */_Bool) ((arr_70 [i_17 - 1]) << (((arr_78 [i_17 - 1]) - (706208149U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)24)) : (-1883628386)))) : (((arr_70 [i_17 + 3]) & (arr_70 [i_17 + 2]))));
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 2; i_18 < 9; i_18 += 1) 
    {
        arr_84 [i_18] = ((((((((/* implicit */_Bool) arr_13 [i_18] [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_18] [i_18] [i_18]))) : (arr_29 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))) + (9223372036854775807LL))) >> (((arr_14 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 - 1] [i_18 + 1]) - (16224521091700503666ULL))));
        arr_85 [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_18 - 2] [i_18 + 1] [i_18]))) * (((((/* implicit */_Bool) arr_8 [i_18] [i_18] [i_18])) ? (arr_78 [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_18] [i_18])))))));
    }
    var_12 = ((/* implicit */unsigned short) var_4);
    var_13 = ((/* implicit */unsigned char) var_8);
}
