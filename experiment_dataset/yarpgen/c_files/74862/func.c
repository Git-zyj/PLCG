/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74862
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
    var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1295091835)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (var_4)))) : (((/* implicit */int) ((_Bool) var_10))))))));
    var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_15))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_23 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) >> (((((/* implicit */int) var_6)) - (103))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_24 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_8)), (16454211304072899290ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_1] [(_Bool)1])))));
                        arr_13 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((arr_10 [i_0] [i_0] [i_0] [i_2 - 1] [i_0]) + ((+(((/* implicit */int) arr_9 [i_2 + 1] [i_1 + 1])))))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((((/* implicit */unsigned int) (short)32767)), (min(((+(arr_1 [i_2]))), (min((arr_7 [i_2 + 1] [i_2 + 3] [i_2 + 1]), (arr_1 [i_0]))))))))));
                        var_26 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1 + 1] [i_2] [i_3 - 2]);
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = var_9;
                            var_27 = ((/* implicit */unsigned char) min((var_7), (((/* implicit */int) var_1))));
                        }
                        for (int i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [6ULL] [i_0] [i_0] [8] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)46336))));
                            var_28 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)40)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_0] [i_1] [i_5])))))))), (min((4325878451249240268ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 3; i_6 < 23; i_6 += 2) 
    {
        arr_25 [i_6 - 3] [i_6 - 3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_18)))) ? (((/* implicit */int) (short)-11025)) : (((((/* implicit */int) (unsigned char)115)) % (((/* implicit */int) arr_24 [i_6] [i_6]))))))), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6]))) | (var_11)))))));
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            arr_29 [i_6] [i_7] = ((/* implicit */int) ((unsigned char) min((1992532769636652326ULL), (((/* implicit */unsigned long long int) (unsigned char)203)))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) min(((-((+(arr_34 [i_9]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_19)))))));
                        arr_36 [i_9] [i_7] [i_8] [i_9] [i_9] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_6 + 2] [i_6 + 2] [(unsigned char)13] [i_8] [i_9]))));
                        var_30 += ((/* implicit */_Bool) var_0);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    {
                        var_31 += ((/* implicit */unsigned short) -272641538);
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((var_10), (((/* implicit */unsigned long long int) var_6)))) + (((/* implicit */unsigned long long int) -272641538))))) ? ((+(min((((/* implicit */long long int) (signed char)116)), (arr_39 [i_6 + 2] [i_6 + 2] [i_10] [i_11]))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 23; i_12 += 1) 
        {
            for (short i_13 = 1; i_13 < 24; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    {
                        var_33 |= ((/* implicit */signed char) min((((/* implicit */int) var_6)), ((~(((/* implicit */int) arr_43 [i_6 - 3] [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 - 2]))))));
                        arr_51 [i_6] [i_6 - 2] [i_12 + 2] [i_13 - 1] [(unsigned char)15] [i_14] = ((/* implicit */unsigned int) var_3);
                        var_34 = ((/* implicit */_Bool) var_18);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_15 = 1; i_15 < 21; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 2) 
            {
                for (signed char i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    {
                        arr_59 [i_6 - 2] [i_6 - 1] [(unsigned char)15] [i_16] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((16454211304072899290ULL), (((/* implicit */unsigned long long int) 3291523548U)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_58 [i_6] [i_16] [i_16] [i_17] [i_17]))))) ? ((-(((/* implicit */int) arr_54 [i_15])))) : (((/* implicit */int) ((var_18) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18228))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_38 [i_6] [i_15 + 2] [i_16] [i_6]), (((/* implicit */unsigned short) (unsigned char)203)))))) + (arr_37 [i_6] [i_15] [i_16] [i_17])))));
                        arr_60 [i_6] [i_6 - 3] [i_15] [i_6 - 3] [i_16] [i_17] = ((signed char) (+(((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_15]))) : (339598193U)))));
                        var_35 = ((/* implicit */signed char) var_0);
                        var_36 += ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_27 [i_6 + 2] [(unsigned short)1] [i_6]), (arr_27 [i_6 - 1] [i_15 - 1] [i_16])))), ((-(min((((/* implicit */int) (unsigned short)33802)), (arr_50 [i_6] [i_6] [16] [i_16])))))));
                        var_37 ^= ((/* implicit */short) (-(((unsigned long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_45 [i_6 + 1] [i_17] [i_6 + 1])))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_18 = 0; i_18 < 10; i_18 += 3) 
    {
        arr_64 [i_18] [i_18] = ((/* implicit */unsigned long long int) ((long long int) 272641538));
        var_38 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_27 [i_18] [i_18] [i_18])))), (((/* implicit */int) arr_0 [(short)9] [(short)9]))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_19 = 1; i_19 < 10; i_19 += 2) 
    {
        var_39 = min((arr_55 [i_19] [i_19]), (((/* implicit */long long int) (~(((734797506) | (((/* implicit */int) var_1))))))));
        var_40 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_42 [i_19] [i_19 - 1]))))));
        var_41 = ((/* implicit */short) arr_55 [i_19] [i_19]);
        var_42 = ((/* implicit */signed char) min((var_42), (min((arr_56 [i_19]), (((/* implicit */signed char) ((((/* implicit */int) arr_40 [i_19 + 2] [i_19] [i_19])) != (((/* implicit */int) var_12)))))))));
    }
}
