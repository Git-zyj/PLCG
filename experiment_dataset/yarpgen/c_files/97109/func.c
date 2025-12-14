/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97109
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) ((_Bool) (unsigned short)168)))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)8);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)59542))));
                arr_11 [i_1] = ((/* implicit */unsigned short) arr_8 [i_0] [i_2] [i_2] [i_0]);
                arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_9 [i_0] [i_1] [i_0]) + (((/* implicit */unsigned long long int) arr_3 [i_0] [(_Bool)1]))));
            }
        }
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_2 [i_0]))));
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                arr_21 [11U] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)29273))))) ^ (((/* implicit */int) arr_0 [i_0] [(unsigned short)10]))));
                arr_22 [i_0] [i_0] [i_0] [20LL] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
            }
        }
        for (signed char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_6 = 1; i_6 < 19; i_6 += 1) 
            {
                arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)59828)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (unsigned short)60802))))));
                /* LoopSeq 3 */
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_31 [i_0] [i_6 + 2] [i_0] [i_7]));
                    arr_35 [i_0] [i_5] [i_0] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_0] [i_6]))) && (((/* implicit */_Bool) arr_32 [i_5] [i_6] [i_6 + 2] [i_6 + 2]))));
                    arr_36 [(unsigned short)11] [(unsigned short)11] [(unsigned short)11] [(unsigned short)11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_6 + 1] [i_7]))));
                }
                for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    arr_39 [i_8] [i_6] [18LL] [i_0] [i_0] = ((/* implicit */unsigned short) arr_9 [i_8] [i_6] [i_5]);
                    arr_40 [i_0] [i_5] [(_Bool)1] [i_8] = ((/* implicit */unsigned char) ((arr_8 [i_6 + 2] [i_8] [i_8] [i_8]) / (arr_8 [i_6 + 1] [i_8] [i_8] [i_8])));
                }
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    arr_44 [i_0] [i_0] [8ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_6 + 1] [i_9] [(unsigned char)2])) ? (((/* implicit */int) arr_37 [4ULL] [i_6 + 2] [i_9] [15] [i_6 + 2])) : (((/* implicit */int) arr_37 [i_6] [i_6 + 1] [i_9] [i_9] [i_9]))));
                    arr_45 [15U] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) arr_15 [i_5]));
                    arr_46 [(short)20] [i_5] [i_5] [i_5] [(short)20] = arr_37 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_0] [i_0];
                }
                arr_47 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (signed char)(-127 - 1)))))));
            }
            for (unsigned short i_10 = 2; i_10 < 19; i_10 += 4) 
            {
                arr_51 [i_0] [i_0] [20LL] [i_5] = ((/* implicit */unsigned int) ((signed char) arr_50 [i_0] [i_0] [i_0] [i_0]));
                arr_52 [i_5] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_10 + 2] [i_10 + 2])) && (((/* implicit */_Bool) arr_38 [i_0] [i_5] [i_10 - 2] [i_10 + 1]))));
            }
            arr_53 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (arr_41 [i_5] [i_5] [i_0] [i_0]))))));
            /* LoopNest 3 */
            for (int i_11 = 4; i_11 < 18; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        {
                            arr_60 [i_0] [i_0] [(unsigned short)14] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 63907742)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_59 [i_11 + 3] [i_11 + 3] [i_11 - 2] [i_11 + 2] [i_11 - 1] [i_11 - 2] [i_11 - 3]))));
                            arr_61 [i_0] [i_12] [i_11] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_11 + 3] [(short)15] [i_11 - 4])) ? (arr_27 [i_11 + 3] [9U] [i_11 - 4]) : (arr_27 [i_11 - 1] [(unsigned short)5] [i_11 + 3])));
                            arr_62 [i_0] [i_11] [i_11 - 3] [(_Bool)0] [9LL] = (((_Bool)1) ? (((unsigned int) 917466799U)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
            {
                arr_66 [i_0] |= ((/* implicit */short) 1314364416);
                arr_67 [(_Bool)1] = ((/* implicit */long long int) ((14195617068703292155ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_65 [(signed char)14] [i_0] [i_0] [i_0]))) + (-1935610495407289977LL))))));
                /* LoopSeq 3 */
                for (unsigned char i_15 = 1; i_15 < 19; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        arr_72 [i_15] [i_15] [i_14] [6] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_70 [i_0] [i_0] [i_0] [i_0] [i_16] [i_15 + 1] [i_0])) ? (arr_70 [(signed char)10] [i_5] [(_Bool)1] [(_Bool)1] [i_16] [i_15 - 1] [(unsigned short)13]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_73 [i_0] [i_0] [i_0] [i_0] [i_16] = ((/* implicit */short) 2613271203U);
                    }
                    arr_74 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_55 [i_0] [i_5] [i_5] [i_15]))));
                    arr_75 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_59 [i_0] [i_5] [i_14] [i_15] [1U] [i_0] [i_0];
                    arr_76 [i_0] [i_15] [i_14] [i_14] [i_14] [i_15] = ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_5] [i_5] [18]))));
                    arr_77 [i_0] [i_0] [i_0] [i_0] [i_15] = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_17 = 1; i_17 < 19; i_17 += 4) 
                {
                    arr_81 [i_0] [i_5] [i_5] [i_14] [(signed char)16] [(signed char)16] = ((/* implicit */unsigned int) ((arr_57 [i_5] [i_5] [i_5] [i_5] [i_5] [i_0]) <= (arr_57 [i_0] [i_17] [i_5] [(unsigned short)14] [i_5] [i_0])));
                    /* LoopSeq 1 */
                    for (long long int i_18 = 2; i_18 < 20; i_18 += 1) 
                    {
                        arr_86 [i_18] [i_0] = (short)6786;
                        arr_87 [i_18] [i_18] = ((/* implicit */short) (_Bool)1);
                    }
                    arr_88 [i_17] [(short)1] = ((/* implicit */unsigned char) 2204956156U);
                }
                for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    arr_91 [14U] [14U] [5] [16LL] = ((/* implicit */unsigned char) ((arr_57 [i_0] [i_14] [i_0] [i_5] [i_0] [i_0]) + (arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    arr_92 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 2204956152U);
                }
            }
            for (signed char i_20 = 0; i_20 < 21; i_20 += 1) /* same iter space */
            {
                arr_96 [i_0] = ((/* implicit */unsigned long long int) var_8);
                arr_97 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((1314364415) + (-1327686827))))));
            }
        }
        arr_98 [i_0] [i_0] = ((/* implicit */signed char) var_0);
    }
    var_15 = ((/* implicit */unsigned short) var_3);
    var_16 = ((/* implicit */unsigned char) var_4);
    var_17 = ((/* implicit */long long int) var_6);
}
