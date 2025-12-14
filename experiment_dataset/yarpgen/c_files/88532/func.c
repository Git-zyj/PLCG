/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88532
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
    var_17 = ((/* implicit */unsigned long long int) (+(var_13)));
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            arr_6 [i_1 + 3] [i_1] = ((/* implicit */short) (-(arr_1 [i_1 + 2])));
            var_19 = ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_14) : (arr_5 [i_1]));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1]))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            arr_11 [1U] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (short)-32355))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)50088)) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) (unsigned short)15447))))));
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50088)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (unsigned short)9926)))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_5 [i_0])))));
            arr_15 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((int) (((_Bool)1) || (((/* implicit */_Bool) 3790657129880831076ULL)))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 1) 
        {
            arr_18 [i_0] [i_4] = arr_12 [i_0] [i_0] [i_4];
            arr_19 [i_0] [i_4] [i_4] = ((/* implicit */short) var_9);
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551615ULL)))) ? (((((/* implicit */int) (unsigned short)45731)) | (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_12)))))))));
        }
        arr_20 [6LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59498)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_11)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (2147483644) : (((/* implicit */int) (unsigned short)50092)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)64645)) : (((/* implicit */int) (_Bool)1))))));
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)0))))));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (_Bool)1)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (arr_9 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned short)24]))))) & (max((var_1), (((/* implicit */unsigned int) arr_13 [i_5] [i_5]))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) arr_7 [i_5] [i_5]))))) : (((long long int) 314975538)))))))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                arr_30 [i_7] [i_6] [i_5] = ((/* implicit */long long int) ((unsigned int) arr_8 [i_7]));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (unsigned short i_9 = 2; i_9 < 11; i_9 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5]);
                            arr_37 [i_8] [i_6] [i_7] [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5])))))) ? (arr_32 [i_5] [i_6] [i_6] [i_9 - 1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_5] [i_5] [i_5])))))));
                            var_27 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_10)) ? (1820479440U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                            var_28 = ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            arr_43 [i_11] [i_7] [i_11] = ((/* implicit */unsigned long long int) arr_17 [i_5] [i_6] [i_7]);
                            arr_44 [i_5] [i_5] [i_5] [i_11] [i_11] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_5] [i_5])) || (((/* implicit */_Bool) arr_25 [i_7])))));
                        }
                    } 
                } 
            }
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                var_29 = ((/* implicit */short) (~(((((arr_1 [i_5]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)7981)) - (7981)))))));
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) -1611923489)))))));
                var_31 = ((((/* implicit */int) (unsigned short)15454)) < (((/* implicit */int) (unsigned short)33808)));
                arr_48 [(unsigned char)9] [i_6] [(unsigned char)9] = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((signed char) (unsigned short)65535))), ((unsigned short)3839)));
                var_32 = ((/* implicit */unsigned int) arr_4 [i_5]);
            }
            arr_49 [i_5] = ((/* implicit */long long int) var_5);
            var_33 = ((/* implicit */signed char) arr_21 [i_5]);
        }
        for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            var_34 = arr_41 [i_13];
            var_35 = ((/* implicit */short) (_Bool)1);
        }
    }
}
