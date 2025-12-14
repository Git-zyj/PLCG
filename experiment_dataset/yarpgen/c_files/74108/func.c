/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74108
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_1 + 1] [i_0])) ? (((/* implicit */long long int) 3139091650U)) : (arr_7 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3]))) + (((var_7) ? (arr_7 [i_0] [(short)12] [i_0] [(signed char)9] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))))), (((/* implicit */long long int) ((unsigned int) arr_1 [i_1 + 1] [i_1 + 1])))));
                        var_21 -= ((/* implicit */unsigned long long int) (+(arr_7 [i_0] [0LL] [i_1 - 1] [(signed char)1] [i_1] [i_1 - 1])));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_7))));
                        var_23 |= ((/* implicit */_Bool) ((short) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_9 [i_3] [i_2] [(short)7] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_2] [i_0]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-60))));
                        var_25 ^= arr_16 [i_6];
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            var_26 = ((((/* implicit */int) ((_Bool) arr_22 [i_9 - 1] [i_9 - 1] [i_9 - 1]))) >= (((/* implicit */int) var_15)));
                            var_27 |= ((/* implicit */long long int) arr_10 [i_0] [i_0]);
                            var_28 = arr_27 [i_0] [i_7] [i_8] [(_Bool)1] [i_9] [i_10];
                            var_29 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_8] [i_0] [6ULL] [i_0])))) ? (min((-9113453998556552563LL), (8702937211956311763LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_10] [i_7]))))))));
                        }
                    } 
                } 
            } 
            arr_29 [(_Bool)1] = arr_24 [i_0] [i_7] [i_7] [i_7];
        }
    }
    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            for (long long int i_13 = 1; i_13 < 13; i_13 += 3) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 16854243097335354566ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9790760298523291249ULL)));
                    arr_38 [i_13] [i_12] [i_13] = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) arr_20 [i_11])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_26 [1U] [1U] [i_13] [i_11] [1U]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
                        {
                            {
                                arr_45 [i_11] [i_12] = ((/* implicit */_Bool) min((arr_40 [(signed char)7] [i_13 + 1] [(signed char)7]), (arr_43 [i_11])));
                                var_31 ^= ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_46 [i_11] = ((/* implicit */long long int) min((arr_20 [i_11]), (arr_20 [i_11])));
        var_32 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((2594305352441040630ULL), (((/* implicit */unsigned long long int) 13U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) (unsigned char)47))))))))) : (max((4294967295U), (695961133U)))));
        arr_47 [i_11] = ((/* implicit */signed char) var_1);
    }
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((arr_48 [(unsigned short)2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
        var_34 = arr_49 [i_16];
        var_35 = ((/* implicit */short) (~(arr_51 [i_16])));
        var_36 = ((/* implicit */_Bool) arr_50 [i_16] [(signed char)17]);
    }
    var_37 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((var_12) == (((/* implicit */unsigned long long int) var_6))))), (var_19)));
    /* LoopNest 3 */
    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
    {
        for (short i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            for (long long int i_19 = 0; i_19 < 18; i_19 += 1) 
            {
                {
                    var_38 ^= ((/* implicit */unsigned int) var_3);
                    var_39 = ((/* implicit */long long int) ((unsigned short) arr_52 [i_17]));
                    var_40 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 3293103086U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1001864196U)))), (-9113453998556552560LL)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_20 = 0; i_20 < 10; i_20 += 4) 
    {
        for (short i_21 = 0; i_21 < 10; i_21 += 1) 
        {
            {
                var_41 = ((/* implicit */short) ((((2647051732575963383LL) != (((/* implicit */long long int) 204176383U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((unsigned int) (+(var_6))))));
                var_42 += ((/* implicit */unsigned int) min((max((((/* implicit */int) arr_6 [(short)13] [(short)13] [(short)11] [i_21] [(_Bool)1] [i_20])), (((int) arr_4 [i_20] [12ULL] [i_20] [i_20])))), (((/* implicit */int) ((((((/* implicit */long long int) arr_21 [i_20] [i_21] [i_21] [i_21])) != (var_10))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */int) (short)32193)) : (((/* implicit */int) (_Bool)0))))))))));
                var_43 = ((/* implicit */unsigned long long int) ((long long int) var_16));
            }
        } 
    } 
}
