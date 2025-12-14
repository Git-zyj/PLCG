/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9536
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((unsigned char) ((short) arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned char) (+((+(max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0])))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max(((-((-(((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_2 [i_0] [i_0]))))))))))));
        var_21 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (+(arr_1 [i_0])));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_10 [0ULL] [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)23427))));
            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_9 [i_2] [i_2] [i_1])))));
            var_23 = ((/* implicit */signed char) (-(((var_15) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1])))))));
        }
        for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (long long int i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    {
                        var_24 -= (-(((/* implicit */int) arr_9 [i_1] [i_1] [i_1])));
                        /* LoopSeq 2 */
                        for (int i_6 = 2; i_6 < 9; i_6 += 4) 
                        {
                            arr_21 [(signed char)0] [i_4] [i_4] [i_5] [i_6 + 2] = ((/* implicit */signed char) var_18);
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 850315297U)) || ((_Bool)1)))) << (((((((/* implicit */_Bool) arr_2 [i_4] [(unsigned char)5])) ? (var_8) : (((/* implicit */unsigned long long int) arr_5 [i_4] [i_3])))) - (584461516833557275ULL))))))));
                            arr_22 [i_1] [i_3 - 1] [i_4] [11ULL] [11U] = ((/* implicit */_Bool) ((long long int) arr_11 [(unsigned short)2]));
                        }
                        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((_Bool) arr_24 [i_7 - 1] [i_7 - 1] [i_5 - 2] [i_4] [i_3 + 2] [i_1]))));
                            arr_26 [i_7] [(_Bool)1] [i_4] [i_4] [i_3 + 2] [i_1] = (-((-(-252346287))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                arr_29 [i_1] [i_1] [i_3] [i_8] |= ((/* implicit */unsigned char) arr_2 [i_8] [i_3]);
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (long long int i_10 = 4; i_10 < 9; i_10 += 1) 
                    {
                        {
                            arr_36 [i_10] [(unsigned short)0] [i_8] [4] [3LL] = ((/* implicit */short) arr_11 [i_10]);
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1716913477)) ? (2395768366U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102)))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1] [i_3 - 1]))));
                /* LoopSeq 1 */
                for (unsigned char i_11 = 3; i_11 < 10; i_11 += 4) 
                {
                    var_29 += ((/* implicit */unsigned int) ((long long int) (+(var_16))));
                    var_30 = ((/* implicit */long long int) max((var_30), ((~(arr_11 [i_3 + 2])))));
                    var_31 = ((/* implicit */short) min((var_31), (arr_2 [(unsigned short)11] [i_3])));
                    arr_39 [i_11] [i_8] [i_8] [i_3] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) arr_31 [i_8] [i_3] [i_3 - 1] [3LL] [i_11 - 1] [(unsigned char)9]));
                }
            }
            arr_40 [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_1] [(signed char)5] [i_1] [i_1] [i_1])) ? (arr_33 [i_1] [i_1] [i_1] [i_1] [(_Bool)1]) : (arr_33 [(signed char)7] [i_3 + 2] [i_1] [i_1] [i_3 + 1])));
            arr_41 [i_1] = ((/* implicit */short) ((unsigned long long int) arr_34 [i_3 + 1] [i_1] [i_3 - 1] [i_3] [i_3 - 1] [4U] [i_3]));
            arr_42 [9U] = (-(((/* implicit */int) arr_2 [i_3 + 1] [i_3 - 1])));
        }
        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            var_32 |= ((/* implicit */int) arr_34 [i_1] [i_12] [i_1] [i_12] [i_12] [i_12] [i_12]);
            arr_45 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [0U] [i_12] [2LL] [i_1] [i_1] [(unsigned short)1]))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [1] [i_1] [1] [1] [i_12]))) : (((((/* implicit */_Bool) 9991960524284204948ULL)) ? (((/* implicit */unsigned long long int) 350772764U)) : (8454783549425346667ULL)))));
        }
        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            arr_49 [i_1] [i_13] = ((/* implicit */unsigned char) var_8);
            var_33 -= ((/* implicit */short) (~(((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [i_13] [(_Bool)1] [i_13]))));
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)218))));
            var_35 ^= (!(((/* implicit */_Bool) arr_44 [i_1])));
        }
        arr_50 [(_Bool)1] = arr_7 [i_1] [i_1];
        arr_51 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_27 [i_1]))));
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) arr_52 [i_14] [i_14]))));
        var_37 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_52 [i_14] [i_14])))) ? (((/* implicit */unsigned int) ((int) (unsigned short)24214))) : (arr_53 [i_14])));
    }
    var_38 *= ((/* implicit */unsigned long long int) (+(var_0)));
    var_39 = var_2;
}
