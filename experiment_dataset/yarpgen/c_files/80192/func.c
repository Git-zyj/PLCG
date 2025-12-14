/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80192
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) >= (0)));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 6914067516513551486ULL)) ? (11003389354392884388ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27023)))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_19 = ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0))))) : (((((/* implicit */int) (_Bool)0)) * (var_9))));
                        var_20 = ((/* implicit */_Bool) (-(arr_8 [i_2 - 1] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 2])));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_21 = (~(max((((/* implicit */int) (signed char)65)), (min((-1), (((/* implicit */int) (_Bool)1)))))));
                        arr_19 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((+(var_10)))))) ? (((arr_9 [i_7]) & (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? ((~(0))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_6] [i_5]))) < (arr_12 [i_5])))))))));
                        var_22 += ((/* implicit */int) arr_15 [i_6] [i_7] [i_5 - 2]);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
        {
            arr_24 [1ULL] = ((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_4] [13LL]))));
            arr_25 [i_4] [i_4] [i_4] = ((/* implicit */short) (+(-1410473281)));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 2; i_9 < 19; i_9 += 4) 
            {
                arr_29 [i_4] [i_4] [i_4] = ((/* implicit */long long int) (~(arr_23 [i_4] [i_8] [i_9])));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                    arr_33 [i_10] = ((/* implicit */short) (~(arr_17 [(unsigned char)0] [i_8] [i_9 + 2] [i_9 + 2])));
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        arr_36 [i_11] = ((/* implicit */unsigned long long int) var_6);
                        arr_37 [i_11] [(unsigned char)15] [i_11] [i_8] [i_11] [6LL] [i_4] = ((/* implicit */int) 4503178495502421031LL);
                        var_24 *= ((/* implicit */unsigned long long int) (~(((arr_9 [i_4]) + (arr_17 [i_8] [i_8] [10LL] [9ULL])))));
                    }
                    for (int i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((int) arr_30 [i_9] [i_9 + 2] [i_9 - 2] [i_9 - 1] [i_9] [i_9]));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((int) var_15)))));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)39905))))) ? (((unsigned int) arr_35 [i_12] [i_8] [i_9 + 2] [i_10] [i_12] [i_10] [i_4])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_9 - 2] [i_9] [i_9 + 2] [i_12] [i_9 - 2] [i_9 - 2])))));
                        var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */_Bool) arr_18 [i_4] [i_9] [i_9 + 1] [i_9 - 2])) ? (((/* implicit */int) arr_18 [i_4] [i_9] [i_9] [i_9 + 2])) : (((/* implicit */int) arr_18 [i_8] [i_9] [i_9] [i_9 + 2]))))));
                    }
                    arr_41 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4] [i_8] [i_4])))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_44 [i_4] [i_4] [i_4] = ((int) arr_17 [i_9 - 2] [i_9 + 1] [i_9 + 2] [i_9 + 2]);
                    arr_45 [i_4] [i_8] [i_8] [i_13] = ((/* implicit */int) var_10);
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))));
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_9 + 2] [i_9] [i_9 + 2] [i_9] [i_9 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1783130511)) || (((/* implicit */_Bool) 1489187911185121643LL)))))) : (((unsigned long long int) 1144531980))));
                }
                for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    var_31 -= ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) arr_39 [i_9] [i_9 - 2] [16])) : (((/* implicit */int) arr_39 [i_4] [i_9 - 1] [i_9]))));
                    var_32 = ((((/* implicit */int) arr_31 [i_9] [i_9] [i_9 + 2])) + (((int) arr_35 [i_14] [i_8] [i_9 + 1] [i_14] [i_8] [i_4] [i_4])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        arr_50 [i_4] [i_4] [i_4] [(signed char)12] [i_14] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_39 [i_14] [i_8] [i_8]))));
                        var_33 -= ((/* implicit */unsigned short) ((_Bool) arr_15 [i_9] [i_9] [i_9]));
                        var_34 = ((/* implicit */int) ((unsigned short) ((short) arr_35 [i_14] [i_4] [i_8] [i_9 + 1] [i_14] [i_8] [i_15])));
                        var_35 = ((/* implicit */long long int) max((var_35), ((~(arr_32 [i_9] [(short)5] [i_9] [(short)5] [i_9] [i_9 + 2])))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        arr_53 [i_4] &= ((/* implicit */unsigned long long int) 9223372036854775800LL);
                        arr_54 [i_14] = ((/* implicit */unsigned char) arr_9 [i_4]);
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_9 + 2] [i_9 + 1] [i_4])) ? (((/* implicit */int) arr_43 [i_9] [i_9] [(unsigned char)2] [i_9] [i_9 + 1] [3ULL])) : (((/* implicit */int) arr_43 [i_9 - 2] [i_9 - 2] [i_9] [i_9 - 2] [i_9 + 1] [i_9 - 2])))))));
                    }
                    arr_55 [i_9] [i_8] [i_9] [i_14] [1ULL] [i_14] = ((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) arr_31 [(short)2] [i_9] [i_9 - 1])) - (41))));
                }
            }
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 21; i_17 += 1) /* same iter space */
        {
            var_37 |= (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_52 [(unsigned char)7] [i_4])) : (((/* implicit */int) (_Bool)0)))));
            var_38 = ((/* implicit */unsigned int) arr_49 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 3) 
        {
            for (unsigned short i_19 = 2; i_19 < 20; i_19 += 3) 
            {
                {
                    var_39 = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (3031053985U)))) + (arr_14 [i_18]))));
                    arr_65 [i_18] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -1)))) ? (((/* implicit */long long int) ((991995832) ^ (-1059396833)))) : ((-(-8804797599512267826LL)))));
                }
            } 
        } 
        arr_66 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + ((~(((/* implicit */int) arr_39 [i_4] [i_4] [i_4]))))));
    }
    var_40 = ((((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) (_Bool)0)) : (2047))) | (((/* implicit */int) var_16)));
}
