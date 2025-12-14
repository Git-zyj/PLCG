/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72996
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (signed char)-117))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)141)) == (((/* implicit */int) (unsigned char)141))))) : (1048575)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_3 [(unsigned short)7])))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (arr_1 [i_1 - 1])));
                    arr_9 [i_0] [i_1] [10U] [i_1] = ((/* implicit */unsigned int) arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_0] [5] [(unsigned short)3] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((4114439268260642381ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141)))))) != (arr_5 [i_0] [i_1] [i_1] [i_1 - 1])));
                        arr_15 [i_0] [3U] [i_1] [i_3] [i_3] = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)141)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)133)) ? (var_0) : (((/* implicit */int) (_Bool)1))))) : ((~(arr_3 [i_0])))));
                    }
                    arr_16 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) var_0);
                }
            } 
        } 
        arr_17 [(_Bool)1] [3] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_18 [i_0] [i_0] &= ((/* implicit */unsigned char) 14332304805448909234ULL);
    }
    for (int i_4 = 2; i_4 < 11; i_4 += 4) 
    {
        var_11 -= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((unsigned short) 2040894462))) == (((((/* implicit */_Bool) var_4)) ? (var_0) : (arr_1 [i_4]))))))));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_4 [i_4] [i_4]))));
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((signed char) min((arr_7 [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 1]), (arr_7 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1])))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_5 = 3; i_5 < 22; i_5 += 2) 
    {
        arr_23 [i_5] [i_5] = max((((/* implicit */int) var_2)), (1571243094));
        var_14 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5 - 2])) ? (arr_21 [i_5 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) / (min((arr_22 [17]), (((/* implicit */unsigned long long int) ((arr_21 [i_5]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
        var_15 ^= ((/* implicit */unsigned int) var_6);
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_7 = 1; i_7 < 12; i_7 += 4) 
        {
            var_16 = ((((/* implicit */_Bool) arr_24 [i_7 - 1])) ? (arr_5 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */int) ((arr_11 [i_7] [i_6] [i_6] [i_6] [i_6]) >= (((/* implicit */int) var_9))))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                        arr_34 [i_6] [i_7 + 1] [i_7 + 1] [i_6] = ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
            var_18 &= (+(((/* implicit */int) arr_12 [(unsigned char)2] [10U] [0ULL] [i_7 + 3])));
            var_19 = ((/* implicit */unsigned short) ((arr_27 [i_6] [i_6] [i_6]) >= (arr_29 [i_6] [i_6] [i_6])));
        }
        for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 2) 
        {
            var_20 = ((/* implicit */int) max((var_20), ((~(arr_5 [(unsigned char)18] [i_10] [i_10] [i_10])))));
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_28 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6] [(unsigned char)6])))))) ? (((/* implicit */unsigned long long int) arr_21 [i_10 - 1])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (14332304805448909235ULL)))));
            arr_38 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_6 [i_6] [i_6] [i_10])))));
            arr_39 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [i_10 - 1] [i_6])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_36 [i_6])) : (((/* implicit */int) arr_24 [(unsigned short)2])))) : (((int) var_8))));
        }
        for (int i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                for (int i_13 = 1; i_13 < 11; i_13 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_1))))));
                        var_23 = ((/* implicit */int) (((+(arr_41 [i_6]))) * (((/* implicit */unsigned int) ((int) arr_12 [i_6] [i_11] [i_11] [i_6])))));
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 4) 
                        {
                            var_24 = ((/* implicit */int) ((unsigned char) var_3));
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1571243079)) ? (((/* implicit */int) (unsigned char)133)) : ((-2147483647 - 1)))))));
                            arr_51 [(unsigned short)3] [(unsigned short)3] [8] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) 0U)) ? (arr_41 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) / (((/* implicit */unsigned int) ((arr_29 [i_6] [10] [10]) / (arr_26 [i_6]))))));
                        }
                        for (int i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_6]))))) <= ((-(arr_44 [i_6] [i_11]))))))));
                            var_27 = ((((/* implicit */_Bool) arr_5 [i_6] [i_12] [i_12] [i_13])) ? ((+(arr_37 [i_12]))) : (((/* implicit */int) arr_31 [i_15] [i_13 + 2] [i_13 + 3] [i_13 + 3])));
                        }
                        for (unsigned short i_16 = 0; i_16 < 15; i_16 += 1) 
                        {
                            arr_56 [i_6] [12] [i_6] [i_13 + 3] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1)) ? ((~(4114439268260642372ULL))) : (((/* implicit */unsigned long long int) -1571243095))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)32))))))))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (-(arr_48 [i_13 + 3] [i_13] [i_13 + 3] [i_13] [i_13 + 2] [i_13 + 3] [i_13 + 3]))))));
                            var_30 = ((/* implicit */unsigned long long int) (~(arr_47 [i_13 - 1] [i_13 - 1] [i_13 + 2] [i_13 - 1])));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                for (signed char i_18 = 1; i_18 < 14; i_18 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_52 [i_11] [(signed char)8] [(signed char)8] [(signed char)8] [i_11] [i_11])) != (((/* implicit */int) arr_32 [9] [12] [i_18] [i_18 + 1] [i_18 + 1] [(unsigned short)13])))))));
                        var_32 &= ((/* implicit */unsigned short) 4114439268260642396ULL);
                        var_33 += ((/* implicit */unsigned int) var_2);
                        var_34 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_11])) ? (((/* implicit */int) arr_52 [i_18 + 1] [i_18] [i_18] [i_18] [i_18 - 1] [i_11])) : (((/* implicit */int) arr_52 [i_18 + 1] [6] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_11]))));
                    }
                } 
            } 
            var_35 = ((unsigned int) arr_1 [i_6]);
        }
        arr_61 [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_31 [i_6] [(signed char)9] [i_6] [i_6]))));
    }
}
