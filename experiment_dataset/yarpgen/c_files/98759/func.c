/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98759
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
    var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)30673)) / ((+(((/* implicit */int) (unsigned short)34862))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 -= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_0 [i_0] [i_0])))) / (((((/* implicit */int) (unsigned short)47224)) + (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_16 += ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_17 ^= ((/* implicit */int) 6053481588589980937LL);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_3 - 2] = ((/* implicit */short) ((2817961382393438120LL) % (((/* implicit */long long int) -1612394690))));
                        var_18 -= ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2] [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [i_1 + 1] [(signed char)1])) : (((((arr_5 [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) - (33)))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_1]))) ? ((~(arr_3 [i_0] [i_1]))) : (((/* implicit */unsigned int) arr_1 [7U] [i_0]))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23639))) * (2806859539U))) * (((/* implicit */unsigned int) (+(arr_6 [i_4]))))));
            var_22 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_4])))) ? (((/* implicit */int) (unsigned char)67)) : (arr_6 [i_0])));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_4])) ? (arr_3 [i_4] [i_4]) : (arr_3 [i_0] [i_4])));
        }
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_6])) ? (((/* implicit */int) arr_4 [i_6] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (+(8191U))))));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((((/* implicit */int) arr_13 [i_0])) + (2147483647))) >> (((((/* implicit */int) ((signed char) 2523083))) + (75))))))));
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_5])))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (signed char i_7 = 1; i_7 < 14; i_7 += 1) 
    {
        var_28 ^= ((/* implicit */signed char) (-(((((/* implicit */int) arr_20 [i_7 - 1] [i_7 + 1])) | (arr_19 [i_7 + 2])))));
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((13486890595153703426ULL), (((/* implicit */unsigned long long int) arr_19 [i_7 + 1]))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_7 + 3] [i_7 + 3])))))));
        var_30 -= (!(((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) arr_19 [i_7])))));
        var_31 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_19 [i_7 + 1])) ? (arr_19 [i_7 + 2]) : (arr_19 [i_7 + 2])))));
        var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_19 [i_7 + 1]), (arr_19 [i_7 + 1]))))));
    }
    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 1) 
    {
        arr_23 [i_8] [i_8] = ((/* implicit */unsigned int) (~(max((arr_22 [i_8 + 2]), (((/* implicit */int) arr_21 [i_8 + 2]))))));
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) min((arr_22 [i_8 - 1]), (arr_22 [i_8 + 1]))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        for (int i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                {
                    arr_31 [i_11] [i_9] [i_10] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_11])))))));
                    arr_32 [i_9] [i_11] [i_9] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_21 [i_9])), (max((max((8917548087156065723LL), (((/* implicit */long long int) 1790392674U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2523083)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned short)18328)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_12 = 1; i_12 < 14; i_12 += 1) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (signed char i_14 = 2; i_14 < 14; i_14 += 1) 
            {
                {
                    var_34 ^= ((/* implicit */unsigned int) ((unsigned short) (~(((arr_37 [i_14]) ? (arr_34 [i_12 + 1] [i_12]) : (((/* implicit */unsigned int) arr_40 [i_12] [i_13] [i_12])))))));
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        var_35 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-64))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3591116445U)) && (((/* implicit */_Bool) arr_20 [i_14 - 2] [i_12 - 1]))))) : ((-((~(((/* implicit */int) (_Bool)1))))))));
                        var_36 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_21 [i_13])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_12] [i_12 + 1] [i_12 - 1] [i_13])))))));
                    }
                    for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
                    {
                        var_37 -= ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)43)), (2523072)));
                        var_38 *= ((/* implicit */short) max(((unsigned short)18315), (((/* implicit */unsigned short) (signed char)-27))));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_26 [i_12] [i_12 - 1] [i_14 - 1]), (((/* implicit */unsigned long long int) 1748541356U))))) ? (max((((((/* implicit */_Bool) 1303173390)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_12] [i_13] [i_12 + 1]))) : (arr_28 [i_13] [i_14] [i_12] [i_13]))), (((/* implicit */unsigned int) arr_24 [i_16] [i_12 + 1])))) : (((/* implicit */unsigned int) max((((((((/* implicit */int) arr_21 [i_13])) + (2147483647))) >> (((((/* implicit */int) arr_35 [i_13])) - (73))))), ((~(((/* implicit */int) arr_41 [i_12] [i_12] [i_12] [i_12])))))))));
                    }
                    /* vectorizable */
                    for (int i_17 = 3; i_17 < 14; i_17 += 1) 
                    {
                        arr_49 [i_12] [i_13] [i_12 + 1] [i_12] [i_12 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_42 [i_17 - 1] [i_12 - 1])) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)74)) < (((/* implicit */int) arr_27 [i_12] [i_13])))))));
                        /* LoopSeq 1 */
                        for (short i_18 = 2; i_18 < 13; i_18 += 3) 
                        {
                            arr_52 [i_17] [i_13] [i_14 - 1] [i_17 - 3] [i_13] [i_17 - 3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_29 [i_13])) <= (((/* implicit */int) arr_25 [i_12]))))) | (((/* implicit */int) ((_Bool) arr_44 [i_12 + 1] [(unsigned short)7] [i_12] [i_12 + 1] [i_12])))));
                            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_18 + 1] [i_18 + 2] [i_18 + 1] [i_18 + 2] [i_18] [2ULL] [i_18])) ? (((((/* implicit */_Bool) arr_21 [i_12])) ? (((/* implicit */unsigned long long int) arr_19 [i_12])) : (6686456015083086075ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_12]))))))));
                            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (((~(7988617168956680097LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_12] [i_18 - 1] [i_14] [i_17 - 3] [i_18]))))))));
                        }
                    }
                    arr_53 [i_13] [i_13] = ((((((((/* implicit */_Bool) 3128925801174189935ULL)) ? (((/* implicit */unsigned long long int) arr_43 [i_12] [i_13] [i_14] [i_12])) : (arr_30 [i_12 - 1] [2ULL] [i_14 + 1] [i_13]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_13]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_12 - 1] [i_13] [i_14 - 1])) ? (((((/* implicit */_Bool) arr_50 [i_14] [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_45 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 - 1])) : (((/* implicit */int) arr_36 [i_12 - 1] [i_13] [i_14])))) : (((/* implicit */int) arr_35 [i_13]))))));
                    /* LoopNest 2 */
                    for (signed char i_19 = 1; i_19 < 14; i_19 += 1) 
                    {
                        for (long long int i_20 = 0; i_20 < 15; i_20 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */short) (_Bool)1);
                                var_43 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2114471567)))) ? (max((((/* implicit */unsigned long long int) arr_36 [i_14 + 1] [(_Bool)0] [i_14])), (arr_30 [14] [(short)0] [i_13] [14]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 312279780U)) ? (7293980927548380442LL) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [(signed char)6])))))) ? ((-(((/* implicit */int) (unsigned char)59)))) : (max((arr_40 [i_12] [i_13] [i_12]), (((/* implicit */int) arr_45 [i_20] [i_13] [i_14 + 1] [i_14 + 1] [i_13] [i_12])))))))));
                                var_44 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [i_12])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
