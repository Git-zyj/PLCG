/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58973
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
    var_15 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_0))))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), ((-(((unsigned long long int) (unsigned short)11839))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2024160971)) ? (1103614355U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4988)))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1550146502)) ? (((/* implicit */int) (unsigned short)65529)) : ((-((~(((/* implicit */int) (unsigned short)60548))))))));
        }
        /* LoopSeq 4 */
        for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [12U]))) : (arr_8 [i_0] [(_Bool)1])))) || (((/* implicit */_Bool) ((arr_6 [i_2] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))), ((!(arr_1 [i_2 + 1] [i_2 - 1]))))))));
            var_20 = ((/* implicit */int) ((unsigned int) max((((((/* implicit */_Bool) arr_7 [i_2] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0])))), (((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_1 [13U] [13U])))))));
        }
        for (unsigned short i_3 = 2; i_3 < 17; i_3 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            var_22 = ((/* implicit */_Bool) ((max((min((((/* implicit */unsigned long long int) arr_7 [i_0] [13LL])), (arr_10 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [i_3] [i_0])))) << (((((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_3 + 1])) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 2] [i_3 - 1])) : (((/* implicit */int) arr_5 [i_3 + 1] [i_3 - 2] [9ULL])))) - (64836)))));
            var_23 *= ((_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)162))))), (((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_8 [i_3 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(_Bool)1] [i_3 - 2])))))));
        }
        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_19 [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 - 1]))) : (arr_4 [i_0]))), (((/* implicit */unsigned int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_4 - 2] [i_0]))) <= (arr_16 [i_0] [10LL] [i_5] [i_5])))), (arr_9 [i_4] [i_4 - 2]))))) : (max((((/* implicit */unsigned int) (unsigned short)44906)), (4294967295U)))));
                arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((_Bool) ((arr_6 [i_0] [i_4 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_4 - 1] [i_5]))))));
            }
            var_24 = ((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */short) arr_2 [i_4 - 1])), (arr_12 [i_0] [i_4 + 1])))), ((-(((/* implicit */int) arr_12 [i_4 - 1] [i_4 + 1]))))));
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_6])) ? (((/* implicit */int) arr_12 [i_0] [i_6])) : (((/* implicit */int) arr_12 [i_0] [i_0]))));
            arr_23 [i_0] [i_0] [7LL] = ((/* implicit */long long int) ((416740897U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65524)))));
        }
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_26 [4U])))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            arr_30 [i_8] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
            var_27 = ((/* implicit */_Bool) min((var_27), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7]))) >= (((((/* implicit */_Bool) 1008806316530991104ULL)) ? (9349238236689903301ULL) : (((/* implicit */unsigned long long int) 1103614373U))))))));
            arr_31 [i_8] [i_7] = ((/* implicit */long long int) arr_26 [(_Bool)1]);
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                var_28 = ((/* implicit */unsigned char) ((_Bool) arr_24 [i_7]));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7])) ? (var_4) : (((/* implicit */unsigned long long int) arr_32 [i_7] [(_Bool)1]))))) ? (((((/* implicit */_Bool) arr_24 [i_7])) ? (var_4) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_26 [i_9]))))));
            }
            for (unsigned int i_10 = 2; i_10 < 16; i_10 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    var_30 = ((/* implicit */_Bool) max((var_30), (((((var_8) ? (arr_36 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_7] [i_7] [i_10 + 1]))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_10] [i_10 + 1] [i_10] [i_10 + 2])))))));
                    arr_38 [i_7] [i_8] [i_10] [i_11] [i_11] = ((_Bool) arr_36 [i_10 - 1] [i_8]);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_10 + 3] [i_10 + 3] [i_12])) ? (((/* implicit */int) arr_34 [i_10 + 2] [i_12] [i_12])) : (((/* implicit */int) arr_34 [i_10 + 1] [i_12] [i_12]))));
                    var_32 = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
                }
                for (unsigned int i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    var_33 = ((/* implicit */unsigned char) ((_Bool) ((_Bool) arr_42 [i_7] [i_10 + 2])));
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned int) ((arr_46 [i_7] [i_8] [i_13]) ? (((/* implicit */int) arr_46 [i_7] [i_8] [i_13])) : (((/* implicit */int) arr_26 [i_7]))));
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) arr_28 [i_14] [(unsigned short)18] [10ULL]))))))));
                        arr_47 [i_13] = ((/* implicit */unsigned char) ((((arr_29 [i_7] [i_14]) < (arr_29 [(_Bool)1] [i_7]))) || (((/* implicit */_Bool) var_7))));
                    }
                    for (long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        var_36 += ((/* implicit */_Bool) ((unsigned char) (unsigned char)99));
                        var_37 = arr_29 [i_7] [i_10 - 1];
                        var_38 = ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_10 - 2]))));
                        arr_51 [i_13] [i_10 - 2] [i_10 - 2] = ((/* implicit */_Bool) arr_29 [i_10 - 2] [i_8]);
                    }
                }
                arr_52 [i_7] [i_8] [i_8] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_7] [i_10 + 2] [i_7]))));
                var_39 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)10)) < (((/* implicit */int) (short)-12)))))) | (((((/* implicit */_Bool) (unsigned char)93)) ? (8721911067367477109ULL) : (((/* implicit */unsigned long long int) 1950807430900818258LL))))));
                arr_53 [(short)1] [(short)10] [i_7] = ((/* implicit */_Bool) ((arr_29 [i_10 - 2] [i_10 - 2]) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_7] [i_7] [i_7])) & (((/* implicit */int) arr_41 [(_Bool)1] [3ULL] [i_10] [i_10])))))));
            }
        }
    }
    for (unsigned short i_16 = 0; i_16 < 15; i_16 += 1) 
    {
        arr_57 [i_16] [i_16] = ((/* implicit */unsigned short) min(((-(821832485U))), (((/* implicit */unsigned int) ((min((arr_10 [i_16] [i_16] [i_16]), (5367410432966087740ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [13ULL] [i_16])) ? (((/* implicit */int) arr_25 [i_16])) : (arr_14 [3LL])))))))));
        var_40 = ((/* implicit */unsigned short) arr_4 [i_16]);
        var_41 -= ((/* implicit */_Bool) ((unsigned int) -1713378720));
    }
}
