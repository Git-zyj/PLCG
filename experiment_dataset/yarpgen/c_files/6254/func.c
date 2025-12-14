/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6254
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [(short)13] [(_Bool)1] [i_2] = min((((arr_8 [i_0 + 2] [i_0] [i_1 - 3] [i_2]) << ((((-(((/* implicit */int) var_7)))) - (100))))), (max((min((((/* implicit */unsigned long long int) arr_2 [i_2])), (2784818477345755256ULL))), (((/* implicit */unsigned long long int) arr_1 [i_1 - 2])))));
                    arr_10 [i_0] [(short)11] [i_0 + 1] = ((/* implicit */long long int) ((((unsigned long long int) arr_7 [i_0 - 3] [i_0 - 2] [i_0 - 2])) << (((7232796471460614228ULL) - (7232796471460614200ULL)))));
                    var_10 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) arr_4 [i_2])), (arr_7 [i_0 - 2] [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) ((long long int) (signed char)-86));
    var_12 = ((/* implicit */short) (+(((/* implicit */int) ((var_9) > (-1895384611636047278LL))))));
    var_13 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (int i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            {
                var_14 = ((/* implicit */short) (_Bool)1);
                arr_16 [9ULL] [14] [i_3] = ((/* implicit */unsigned char) -8501953772671013917LL);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            var_15 = ((int) ((((arr_22 [(short)11] [i_4 - 2] [(_Bool)1] [i_4]) ? (arr_8 [i_3] [i_4 + 1] [i_6] [13ULL]) : (var_6))) | (min((((/* implicit */unsigned long long int) var_3)), (var_6)))));
                            arr_23 [i_6 + 1] [i_5] [(unsigned short)6] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_22 [i_3] [i_4 + 1] [i_5] [i_6 + 1])), (arr_2 [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_6]))))) : (((/* implicit */int) arr_21 [i_5]))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_16 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_4])) | (((/* implicit */int) arr_4 [i_3]))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((arr_18 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) ? (((/* implicit */unsigned long long int) ((int) 909393590256750571ULL))) : (arr_3 [i_4 + 1]))))));
                            }
                            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
                            {
                                arr_29 [i_3] [14ULL] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) min((-7618533738547589821LL), (((/* implicit */long long int) var_3))))), (((unsigned long long int) (unsigned char)240)))) << (((max((arr_0 [i_4 + 1]), (((/* implicit */long long int) (_Bool)1)))) - (9134753472372496120LL)))));
                                arr_30 [i_3] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (short)-2832)), (21ULL))), (((arr_8 [i_3] [i_3] [(_Bool)1] [(_Bool)1]) ^ (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)29)), (-6769772970526434505LL))))))));
                                arr_31 [i_3] [i_3] [i_5] [i_5] [(unsigned short)10] [i_6] [i_8] = ((/* implicit */int) (!(var_2)));
                            }
                            /* vectorizable */
                            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
                            {
                                var_18 ^= ((/* implicit */unsigned short) (+(arr_0 [i_3])));
                                arr_34 [i_3] [4ULL] [i_5] [i_6] = ((/* implicit */unsigned long long int) arr_17 [i_6 + 1] [i_5] [i_4 - 1] [(signed char)5]);
                                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_4 + 3]))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    arr_37 [(short)8] [(unsigned short)2] [(short)8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((-2482513149520731704LL) > (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_10])))))), (max((((/* implicit */long long int) var_7)), (var_0)))))), (min((max((arr_7 [i_3] [i_4 + 1] [i_3]), (((/* implicit */unsigned long long int) (signed char)52)))), (((/* implicit */unsigned long long int) arr_15 [i_4 + 2]))))));
                    var_20 -= ((/* implicit */long long int) arr_27 [i_10] [15] [i_3] [i_3]);
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_3] [i_4 + 1])) / (((/* implicit */int) arr_11 [i_3] [i_4 + 3]))));
                    /* LoopSeq 3 */
                    for (short i_12 = 1; i_12 < 13; i_12 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) 0ULL);
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((signed char) var_2)))));
                        arr_45 [i_3] = ((unsigned char) (unsigned short)12288);
                        var_24 = ((unsigned long long int) ((((/* implicit */int) (unsigned char)49)) / (((/* implicit */int) (short)28933))));
                        var_25 = ((/* implicit */int) ((arr_33 [i_3] [i_12 + 3] [i_11] [0LL] [i_4 + 3] [i_11]) != (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 - 1] [i_4] [i_12 - 1])))));
                    }
                    for (short i_13 = 1; i_13 < 13; i_13 += 1) /* same iter space */
                    {
                        arr_48 [i_3] [i_3] [i_11] [i_3] = ((/* implicit */long long int) ((unsigned char) var_5));
                        arr_49 [i_3] [i_4 + 2] [i_11] [i_4 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_13 + 3] [i_4 + 1] [i_11])) ? (((/* implicit */long long int) ((unsigned int) arr_39 [i_3] [i_3] [(short)4] [i_3]))) : (((((/* implicit */_Bool) (unsigned char)239)) ? (11LL) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_3] [i_4] [i_3])))))));
                    }
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        var_26 = arr_0 [i_4 - 2];
                        arr_52 [i_3] [i_4 + 1] [i_11] [i_11] |= ((/* implicit */short) ((((/* implicit */int) arr_13 [i_4] [i_4 + 2])) ^ (((/* implicit */int) arr_6 [i_3]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 1) 
                    {
                        for (unsigned long long int i_16 = 1; i_16 < 15; i_16 += 2) 
                        {
                            {
                                arr_59 [i_3] [i_16] [i_11] [i_3] [i_16 - 1] = ((/* implicit */short) ((unsigned int) ((unsigned long long int) var_3)));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_4 - 1] [i_4 + 1] [i_16 + 1])) >= (((/* implicit */int) (unsigned short)17247))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        for (unsigned short i_19 = 2; i_19 < 13; i_19 += 3) 
                        {
                            {
                                var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_66 [i_19 + 3] [(signed char)2] [i_19 + 3] [i_19 + 1] [i_19 + 2])) || (((/* implicit */_Bool) (unsigned short)31878))));
                                var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32750)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10248)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))) <= (5446700702570730670ULL))))) : (arr_33 [(unsigned char)4] [(unsigned char)4] [i_4 + 3] [i_18] [i_19 + 1] [(short)14]));
                                var_30 = ((((/* implicit */int) (signed char)-102)) - (((/* implicit */int) (short)22557)));
                            }
                        } 
                    } 
                    arr_68 [(short)1] [i_4] [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_15 [i_4 + 3]))));
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_55 [i_3] [i_4 - 1] [i_17] [i_3]))));
                }
            }
        } 
    } 
}
