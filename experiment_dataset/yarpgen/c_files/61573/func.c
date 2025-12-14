/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61573
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
    var_14 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_1 [i_0])))) ^ (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_8))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [(short)8] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 7; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) 15132208076368225722ULL)) ? (((/* implicit */int) var_12)) : (arr_10 [i_4] [i_3] [i_2 - 2] [i_1 + 1]))), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (var_2)))))) != ((-((+(((/* implicit */int) arr_1 [i_0]))))))));
                            var_17 = ((/* implicit */short) min((((unsigned long long int) 3314535997341325894ULL)), (max((((/* implicit */unsigned long long int) (_Bool)0)), (15132208076368225706ULL)))));
                            var_18 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_13 [i_0] [(short)2] [i_2 - 2] [i_3] [i_0] [i_3 + 3])), (((((/* implicit */_Bool) max((3314535997341325894ULL), (((/* implicit */unsigned long long int) var_4))))) ? (max((5553069180638516464ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4889)))))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((unsigned long long int) ((3314535997341325894ULL) <= (3314535997341325890ULL)))), (3314535997341325891ULL))))));
        }
    }
    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 2; i_7 < 22; i_7 += 3) 
            {
                arr_21 [i_5] [i_7] [i_7 + 3] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 3519568446U))))) >= (((/* implicit */int) arr_18 [i_7 - 1] [i_7 - 2] [i_7]))));
                var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) > (772727421119246635ULL)));
                arr_22 [i_7] [i_7] = ((/* implicit */int) -3249602428387618890LL);
            }
            var_21 ^= ((/* implicit */unsigned int) ((((arr_17 [i_6] [i_6] [i_5]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ? (3314535997341325894ULL) : (((((/* implicit */_Bool) (unsigned char)138)) ? (arr_17 [i_5] [i_6] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            arr_23 [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)672)) ? (((/* implicit */long long int) (+(628033264)))) : (((((/* implicit */_Bool) arr_15 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))) : (var_4)))));
            /* LoopSeq 1 */
            for (short i_8 = 2; i_8 < 22; i_8 += 4) 
            {
                arr_27 [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) ((short) (short)-3314))) | (((int) (short)4889))));
                arr_28 [i_5] [i_6] [i_8] [i_8 + 1] = ((/* implicit */long long int) 2661674463387272849ULL);
            }
            arr_29 [i_5] [i_6] = var_4;
        }
        arr_30 [i_5] = (+(((/* implicit */int) ((((/* implicit */int) arr_20 [i_5] [i_5] [i_5])) <= (((/* implicit */int) (short)-27838))))));
        arr_31 [i_5] = ((/* implicit */short) 628033252);
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 1; i_9 < 24; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                {
                    var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_9 + 1] [i_9 + 1] [i_9 + 1])) * (((/* implicit */int) arr_33 [i_9] [i_9 - 1] [(unsigned char)4]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5] [i_9] [i_10])) ? (((/* implicit */int) arr_33 [i_5] [i_9] [i_10])) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((1407171452) - (1407171440)))))) : (arr_32 [i_9 - 1] [i_9 - 1] [i_9 + 1]))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))) <= (var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967279U)))))) : (((arr_15 [i_5]) >> (((((/* implicit */int) var_9)) - (142)))))))));
                    var_23 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (unsigned char)62)) : (569324276)))) * (((unsigned long long int) (short)-4889)))) / (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))), (442680213))))));
                    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)4889))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 1; i_12 < 23; i_12 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        var_25 += ((/* implicit */short) min((((/* implicit */unsigned long long int) 1407171429)), (7452966087003149114ULL)));
                        arr_48 [i_5] [i_11] [i_11] [i_12 + 2] [i_13 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_13 + 1] [i_13 + 1] [i_12 + 2])) ? (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_44 [i_5] [i_5] [i_12]))))) : (((/* implicit */int) (short)24701))));
                        arr_49 [i_5] [i_11] [i_12] [i_11] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((short) var_10))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (15132208076368225720ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((131667881U) - (131667881U))))))))));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 24; i_14 += 2) 
                    {
                        arr_54 [(unsigned char)13] [i_11] [i_11] [i_11] = ((/* implicit */short) 8135223664020476123ULL);
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 3; i_15 < 24; i_15 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_39 [(_Bool)1] [i_11]))));
                            arr_59 [i_5] [i_11] [(unsigned short)14] [i_5] [i_11] = ((/* implicit */_Bool) (short)4879);
                            var_27 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (~(arr_35 [i_5] [7ULL] [(short)19]))))))));
                        }
                    }
                    for (unsigned long long int i_16 = 1; i_16 < 21; i_16 += 4) 
                    {
                        arr_64 [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5] [8ULL] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4889)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4900))) : ((+(arr_53 [i_11] [i_16 + 4]))))))));
                        arr_65 [i_5] [i_5] [i_5] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_5] [(short)8])) ? (((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)46733)))) : (var_11)));
                        var_28 = ((((((/* implicit */_Bool) arr_37 [i_16 + 1] [i_5] [i_5])) ? (((/* implicit */int) arr_37 [i_5] [i_12 + 2] [i_16 + 1])) : (569324268))) & (((/* implicit */int) var_8)));
                    }
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned long long int) var_4)))))));
                }
            } 
        } 
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_30 += ((/* implicit */short) (~(((((/* implicit */_Bool) 8135223664020476116ULL)) ? (((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384))))) : (((/* implicit */unsigned long long int) (+(4294967279U))))))));
        var_31 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2029944822U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_17] [i_17] [(short)11]))) : (var_10)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_37 [(_Bool)1] [i_17] [16LL]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_17] [i_17]))) ^ (arr_41 [i_17])))));
    }
}
