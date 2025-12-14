/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72597
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
    var_10 = ((/* implicit */unsigned int) ((long long int) (signed char)-48));
    var_11 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) (+(arr_0 [i_0])));
        arr_2 [i_0] = ((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_10 [i_3] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_3 - 3] [i_3 + 1] [i_1 + 2]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)16] [19LL]);
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4940777916854883504LL)) ? (((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (unsigned short)47261)) : (((/* implicit */int) (signed char)48)))) : (829301672)));
                            arr_14 [i_0] [2U] [i_0] [i_0] [2U] = ((/* implicit */_Bool) arr_8 [(unsigned char)5] [i_2] [i_1 - 1] [i_0]);
                            arr_15 [i_0] [i_1] [i_4] = ((/* implicit */unsigned char) (~(8117614347781031422LL)));
                        }
                        arr_16 [i_0] [9U] [i_0] [i_3 + 1] [i_1] = (!(((/* implicit */_Bool) 2090606258)));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned short) (+((-(2090606258)))));
            arr_17 [i_0] = (-(arr_4 [i_1 + 2] [i_0] [i_1 + 2]));
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 3; i_6 < 22; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 22; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) var_1);
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (-829301673)))) ? (((var_7) & (var_7))) : (((/* implicit */unsigned long long int) arr_24 [i_6] [i_7 + 2] [i_6] [i_6 + 2] [i_8] [i_6 + 2])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_29 [i_5] [i_6 - 3] [i_9])) ^ (arr_18 [i_6 - 2] [i_6 - 1] [i_6 + 2])));
                    var_20 = arr_24 [i_0] [i_0] [i_5] [i_6] [6] [i_9];
                    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_6] [(unsigned short)10])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) <= (arr_8 [i_6 + 2] [i_5] [(unsigned short)1] [i_9])));
                    arr_32 [i_0] [i_0] [i_6] [i_5] [18ULL] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)47));
                }
            }
            var_22 ^= ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (2090606258)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [(short)7] [i_0]))))) : (7351780842578775465LL));
        }
    }
    for (long long int i_10 = 4; i_10 < 13; i_10 += 4) 
    {
        arr_35 [i_10] = var_7;
        arr_36 [i_10] [i_10 - 4] = ((/* implicit */unsigned char) var_0);
        arr_37 [i_10 - 3] = ((/* implicit */unsigned short) ((unsigned long long int) arr_28 [i_10] [(unsigned short)4] [i_10] [i_10] [(unsigned short)4] [i_10] [i_10]));
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_14 = 2; i_14 < 12; i_14 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (+(((((/* implicit */_Bool) 3236624190873201715ULL)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (unsigned char)193)))))))));
                            arr_47 [i_10] [i_11] [(short)14] [i_13] [i_13] [i_14] [i_14] = ((/* implicit */signed char) var_1);
                            arr_48 [i_10 - 2] [4] [i_12] [i_13] [i_14] [4] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_33 [i_14])) / (((/* implicit */int) var_2))))));
                            var_24 = ((/* implicit */unsigned long long int) (((+(var_6))) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_25 = ((/* implicit */unsigned char) ((int) arr_23 [i_10 - 4] [i_10 - 1]));
                        }
                        /* vectorizable */
                        for (signed char i_15 = 0; i_15 < 16; i_15 += 2) 
                        {
                            arr_51 [i_13] [i_11] [i_11] [i_13] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)37))));
                            arr_52 [9U] [i_11] [i_11] [9U] = ((/* implicit */unsigned short) ((short) ((arr_0 [i_10]) > (3839670506318577925ULL))));
                        }
                        /* LoopSeq 1 */
                        for (int i_16 = 3; i_16 < 14; i_16 += 1) 
                        {
                            arr_55 [i_10] [i_11] [i_10] [i_16 - 1] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_21 [i_10 - 1] [i_10 + 3] [i_10 + 2] [i_10 + 3])) ? (((/* implicit */int) arr_21 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 3])) : (((/* implicit */int) arr_21 [i_10 + 1] [i_10 - 4] [i_10 + 3] [i_10 + 1])))));
                            arr_56 [(short)15] [i_11] [(unsigned short)11] |= ((/* implicit */int) ((((/* implicit */int) arr_21 [i_13] [i_13] [i_13] [i_13])) != (((/* implicit */int) ((((/* implicit */int) arr_49 [i_10] [i_10] [i_10] [i_12] [i_13] [i_16] [i_16 + 1])) <= (((/* implicit */int) var_3)))))));
                            arr_57 [i_10] [i_10] [(signed char)4] [i_10] [i_10] [i_10 + 2] [i_10 + 3] = ((/* implicit */unsigned int) 6186099128394261538LL);
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+(((((((/* implicit */int) var_5)) + (((/* implicit */int) arr_1 [i_10])))) / (((((/* implicit */_Bool) var_6)) ? (arr_34 [i_16]) : (arr_53 [i_11] [i_12] [i_13]))))))))));
                        }
                    }
                    for (short i_17 = 1; i_17 < 13; i_17 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((2090606281) <= ((~(((/* implicit */int) var_1))))));
                        var_28 = ((/* implicit */int) var_5);
                    }
                    arr_61 [i_10 + 3] [i_11] [7U] = ((/* implicit */signed char) ((min((-7351780842578775478LL), (((/* implicit */long long int) -2090606273)))) <= (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_10 + 1] [(_Bool)1] [i_10] [i_10 - 2])))));
                    arr_62 [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_0 [i_12]) <= (arr_0 [i_12])))) >= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_10] [i_11] [12U] [i_10] [i_12] [i_12] [(short)14])) <= (((/* implicit */int) arr_49 [i_10 - 4] [i_10 - 4] [i_12] [i_11] [i_10] [7] [i_10]))))) <= (((/* implicit */int) var_4)))))));
                    arr_63 [i_12] [i_11] = arr_22 [i_12] [8LL] [i_12];
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_33 [i_10])))))))));
    }
    var_30 = ((/* implicit */unsigned long long int) var_9);
    var_31 = var_8;
}
