/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74294
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0]);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) var_12);
            arr_6 [i_1] = ((/* implicit */signed char) ((((long long int) (+(((/* implicit */int) arr_3 [i_1]))))) / (((/* implicit */long long int) ((/* implicit */int) var_7)))));
            arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 1])), (arr_0 [i_1] [i_0 + 1])))))));
        }
        arr_8 [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((var_17), (((/* implicit */long long int) arr_4 [i_0] [i_0]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [16ULL])) : (var_0)))) ? (((/* implicit */int) arr_3 [18U])) : (((/* implicit */int) arr_4 [i_0] [i_0 + 1])))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (short i_3 = 4; i_3 < 21; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_24 [i_5] [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)232))));
                                arr_25 [i_2] = ((/* implicit */short) var_14);
                                arr_26 [2ULL] [i_3] [i_3 + 1] [i_3] [i_3] [i_5] [i_6] &= var_0;
                            }
                        } 
                    } 
                    arr_27 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2 + 1] [i_2] [3LL] [i_3 - 1])) ? (arr_15 [i_2 - 1] [i_2] [i_4] [i_3 - 4]) : (arr_15 [i_2 - 1] [i_2] [5] [i_3 - 4])));
                }
            } 
        } 
        arr_28 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1])) | (((/* implicit */int) arr_19 [i_2] [i_2 + 1] [17U] [i_2 + 1] [i_2] [i_2]))));
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                arr_34 [i_2] [i_7] [(unsigned char)0] [i_8] = ((/* implicit */unsigned short) ((arr_32 [i_8] [10]) << (((((/* implicit */int) var_8)) - (94)))));
                arr_35 [i_2] = ((/* implicit */unsigned char) (+(2147483647)));
                arr_36 [i_2] = (+(((/* implicit */int) arr_11 [i_2] [i_2 + 1])));
                arr_37 [i_2] [i_7] = ((/* implicit */_Bool) arr_13 [i_2] [i_7]);
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                {
                    arr_41 [15] [i_2] [i_8] [i_8] = ((/* implicit */_Bool) arr_10 [i_2]);
                    /* LoopSeq 4 */
                    for (unsigned char i_10 = 3; i_10 < 20; i_10 += 1) 
                    {
                        arr_44 [i_9] [i_7] [i_7] [i_7] [i_9] [i_7] = 1273619398;
                        arr_45 [i_2] [i_2] [i_8] [i_9] [i_10 + 1] = ((/* implicit */unsigned short) (((+(4095))) == (((/* implicit */int) var_16))));
                        arr_46 [(_Bool)1] [i_2] [i_8] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_39 [i_2]) % (((/* implicit */long long int) arr_23 [i_2]))))) & (((var_15) * (((/* implicit */unsigned long long int) -1273619398))))));
                    }
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                    {
                        arr_49 [i_11] [i_9] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((1273619414) + (-1273619398)));
                        arr_50 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7] [i_9] [i_8] [i_7] [i_2] [i_2])) ? (arr_43 [12U] [i_7] [i_8] [2U] [i_2]) : (arr_43 [i_2 + 1] [(signed char)13] [(signed char)13] [(unsigned short)14] [i_2])))) ? ((((_Bool)0) ? (118983196U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    }
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
                    {
                        arr_54 [i_2] [i_7] [i_2] = ((/* implicit */int) (unsigned char)255);
                        arr_55 [i_2] [i_7] [i_2] [i_9] [i_12] = ((/* implicit */unsigned short) (-(arr_15 [i_2 + 1] [i_2] [i_2] [i_2])));
                    }
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
                    {
                        arr_58 [i_2] [i_7] [i_8] [i_2] [i_13] = ((/* implicit */unsigned int) (-(arr_10 [i_2])));
                        arr_59 [i_2] [i_7] [i_7] [20LL] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_13] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_7]))));
                    }
                    arr_60 [i_2] [i_2] [i_8] [i_9] [i_2] = ((/* implicit */long long int) ((short) var_9));
                    arr_61 [i_2] [i_7] [i_7] [i_8] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(4190208)))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_40 [i_2 - 1]))));
                }
                for (long long int i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
                {
                    arr_65 [i_7] [i_2] = ((var_2) ? (((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_47 [i_14] [i_7] [i_8] [i_8] [i_7] [i_8] [i_14])))));
                    arr_66 [i_2 - 1] [i_2] [i_14] = ((((/* implicit */_Bool) arr_47 [i_2] [i_14] [i_2 - 1] [i_14] [i_2] [i_14] [i_14])) ? ((-(var_0))) : (((/* implicit */int) var_3)));
                }
            }
            arr_67 [i_7] [i_2] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_11))))));
        }
        for (int i_15 = 2; i_15 < 21; i_15 += 3) 
        {
            arr_70 [i_2] = ((/* implicit */int) arr_57 [i_15 - 2] [i_15 - 2] [i_15] [i_15 - 1] [i_2] [i_15 - 2]);
            arr_71 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) 1116892707587883008LL)) ? (((/* implicit */long long int) var_0)) : (arr_39 [i_2]))) / (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        }
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4261412864U)) ? (1273619374) : (((/* implicit */int) (_Bool)0))));
}
