/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78492
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
    var_13 ^= ((/* implicit */signed char) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((arr_1 [i_0]) < (arr_1 [i_0])));
        arr_4 [i_0] = var_7;
        arr_5 [i_0] = ((/* implicit */unsigned long long int) var_8);
        arr_6 [i_0] = ((/* implicit */long long int) 16429790529143937429ULL);
        arr_7 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */long long int) arr_3 [(short)12]);
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) min(((+(((/* implicit */int) arr_9 [i_1] [i_2])))), (((/* implicit */int) arr_9 [i_3] [i_1]))));
                    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_3] [i_1]))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 1; i_5 < 12; i_5 += 3) 
                        {
                            {
                                arr_24 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_14 [i_2 - 1] [i_4 - 1] [i_2])))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
                                var_17 *= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) max(((short)4822), ((short)-7443)))))), ((~(((/* implicit */int) ((signed char) (signed char)76)))))));
                                arr_25 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_2 [i_4]);
                                arr_26 [i_2] [i_1] [i_4] [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_1 [i_2]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        arr_29 [i_2] = ((/* implicit */unsigned long long int) min(((-(max((arr_0 [i_6] [i_6]), (((/* implicit */unsigned int) var_2)))))), (min((((/* implicit */unsigned int) (short)-4827)), (arr_19 [i_1] [i_3])))));
                        var_18 = ((/* implicit */long long int) ((((_Bool) 4294967294U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 - 1]))) : ((-(arr_15 [i_2 + 2] [i_2 + 3])))));
                    }
                    /* vectorizable */
                    for (short i_7 = 1; i_7 < 14; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) (-(arr_0 [i_2 + 3] [i_2 - 1])));
                        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) var_5)))));
                        arr_33 [i_3] [(_Bool)1] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2LL)) || (((/* implicit */_Bool) arr_27 [i_1] [i_2] [i_1] [i_7 + 1])))))) : (arr_21 [i_1] [i_2] [i_2] [i_3] [i_7] [i_7 - 1])));
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_8 = 1; i_8 < 13; i_8 += 2) /* same iter space */
        {
            arr_37 [i_1] [i_1] = (!(arr_32 [i_8] [i_8 + 2] [i_8] [i_8 + 2]));
            var_21 = ((/* implicit */short) ((signed char) ((unsigned char) arr_17 [i_8 - 1] [i_8 + 2] [i_8] [i_8 + 2])));
            var_22 = ((/* implicit */long long int) max((var_22), (arr_30 [i_1] [(short)0] [i_1] [i_8 - 1])));
        }
        for (short i_9 = 1; i_9 < 13; i_9 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) var_2);
            arr_41 [i_1] [i_1] [i_1] = ((/* implicit */long long int) 0U);
            arr_42 [i_1] [5] = ((/* implicit */unsigned char) 13481676138736773950ULL);
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && ((!(((/* implicit */_Bool) arr_9 [i_1] [i_9]))))));
            arr_43 [i_1] [i_9 - 1] = ((/* implicit */short) arr_12 [i_1] [i_9]);
        }
        for (short i_10 = 1; i_10 < 13; i_10 += 2) /* same iter space */
        {
            var_25 *= ((/* implicit */_Bool) ((0U) | (min((arr_22 [i_1] [i_1]), (((/* implicit */unsigned int) ((arr_30 [i_1] [i_1] [i_10] [i_10]) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
            /* LoopNest 3 */
            for (unsigned short i_11 = 1; i_11 < 14; i_11 += 2) 
            {
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        {
                            arr_53 [i_1] [i_1] [i_1] [i_10] [i_12] [(_Bool)1] = (i_10 % 2 == zero) ? ((-(((arr_52 [i_1] [i_10] [(_Bool)1] [i_13] [i_11 + 1]) >> (((arr_22 [i_10] [i_10]) - (3273512133U))))))) : ((-(((arr_52 [i_1] [i_10] [(_Bool)1] [i_13] [i_11 + 1]) >> (((((arr_22 [i_10] [i_10]) - (3273512133U))) - (134231296U)))))));
                            var_26 |= ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_13] [i_11 - 1] [i_10] [i_1]))) ^ ((+(2U)))))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (-(((/* implicit */int) arr_49 [i_1] [i_10 + 1] [i_11 - 1] [i_12] [i_13])))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)233)) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_1] [i_10] [i_11 + 1])))))));
                        }
                    } 
                } 
            } 
            arr_54 [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(arr_28 [i_1] [i_1] [9])))))) ? (min((-103456083536521544LL), (((/* implicit */long long int) (~(arr_45 [i_1] [i_10])))))) : (((/* implicit */long long int) min((arr_23 [i_10] [i_10 - 1] [i_10] [i_10 + 1] [i_10 + 1]), (arr_23 [i_10] [i_10 + 1] [(signed char)12] [i_10 + 2] [i_10]))))));
        }
    }
    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 3) 
    {
        arr_57 [i_14] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_56 [i_14] [i_14])) ? (((/* implicit */int) arr_56 [i_14] [i_14])) : (((/* implicit */int) (unsigned short)10282)))), (((((/* implicit */int) min(((unsigned short)64370), (((/* implicit */unsigned short) (short)27174))))) >> ((((-(arr_55 [i_14]))) + (5686677798459994131LL)))))));
        arr_58 [i_14] = ((/* implicit */unsigned short) ((int) (signed char)-100));
    }
    var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7204)))))));
}
