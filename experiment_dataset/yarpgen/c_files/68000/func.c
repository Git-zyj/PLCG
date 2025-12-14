/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68000
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_11 = (+(arr_0 [i_0]));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                    {
                        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((signed char) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)15])))))))));
                        var_13 ^= ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1] [16U] [i_3]);
                    }
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_2]))))) * ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(signed char)8] [i_1] [i_1] [i_2] [i_4]))) : (arr_3 [i_1] [i_1] [i_1])))))));
                        var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_4])) ? (((/* implicit */int) arr_4 [i_4] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_2] [(unsigned short)13] [(unsigned short)13])))), ((~(1698644204)))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 24; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (-(1743238572)));
                                var_17 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_18 = ((/* implicit */unsigned char) arr_1 [i_6]);
                                var_19 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [2U] [i_1] [(unsigned short)16] [i_5])) ? (arr_12 [i_5] [i_1] [i_1] [i_5] [20] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [(unsigned char)4] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_5)) ? (16383) : ((-2147483647 - 1)))) : (((/* implicit */int) arr_1 [i_0]))))) ? (max((((((/* implicit */int) arr_17 [i_0] [20U] [i_0] [i_0])) << (((var_3) - (738934438763501793LL))))), (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [(short)5] [i_0])))))))));
        var_21 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_17 [i_0] [(signed char)18] [(signed char)18] [i_0])))) ^ (arr_13 [i_0] [(_Bool)1])));
    }
    for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16387)) ? (((/* implicit */int) (unsigned short)1028)) : (((/* implicit */int) (signed char)-57))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_10), (arr_5 [i_7] [i_7] [i_7]))))) : (min((2251799813685247LL), (((/* implicit */long long int) (unsigned short)64068))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_7 [4] [i_8] [i_9] [0LL] [i_7])))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [i_7] [(signed char)3] [20] [i_7])))))) ? (((/* implicit */unsigned int) (~(16383)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (~(-1679824391)))) : (((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */unsigned int) var_6)) : (1486059232U)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    var_26 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_26 [i_7] [i_11 - 1] [i_11 - 1])) ? (((/* implicit */unsigned long long int) arr_29 [i_7] [i_7])) : (0ULL)))));
                    var_27 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [i_11] [i_11]))))), (arr_9 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [19] [i_11 - 1])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
    {
        var_28 += ((/* implicit */int) var_3);
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_12] [9U] [i_12])) ? (-1679824404) : (((/* implicit */int) arr_2 [i_12]))));
    }
    var_30 += ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_9))))))));
    var_31 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)57)) && (((/* implicit */_Bool) (unsigned short)9))))) : (((/* implicit */int) (unsigned short)38472))));
    var_32 = ((/* implicit */int) ((1679824390) == (((/* implicit */int) (signed char)-125))));
    /* LoopSeq 1 */
    for (int i_13 = 0; i_13 < 22; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_14 = 1; i_14 < 20; i_14 += 4) 
        {
            for (signed char i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_16 = 1; i_16 < 21; i_16 += 3) 
                    {
                        var_33 = ((/* implicit */int) min((144115188075855871LL), (((/* implicit */long long int) (short)-4755))));
                        var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (signed char)32))) ? (((((/* implicit */_Bool) max((arr_39 [i_13]), (((/* implicit */int) arr_10 [(_Bool)1] [i_13] [(unsigned char)4] [i_15] [(unsigned short)2] [i_16]))))) ? (((/* implicit */int) arr_40 [21] [i_16 - 1] [i_16] [i_16 - 1])) : (((/* implicit */int) arr_6 [11U] [i_16 + 1] [i_16] [i_16] [i_16] [5])))) : ((+((~(((/* implicit */int) arr_1 [i_16]))))))));
                        var_35 = ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)127)))) ? (((((/* implicit */_Bool) -1679824389)) ? (1486059213U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_13] [i_14 - 1] [i_16 + 1] [i_16] [10LL] [i_16]))))))));
                        var_36 += ((((/* implicit */_Bool) arr_10 [i_13] [i_14 + 2] [i_15] [i_13] [i_13] [i_15])) ? (((((/* implicit */_Bool) arr_11 [i_16 + 1] [i_14 + 2] [i_14 - 1])) ? (((((/* implicit */_Bool) 2147483634)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_13] [i_14 + 1] [i_15] [i_15] [i_16]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_16 + 1]))))) : (((/* implicit */unsigned long long int) (+(min((1679824375), (((/* implicit */int) (unsigned char)12))))))));
                        var_37 = ((/* implicit */int) ((((((/* implicit */_Bool) min((-8932924816346788368LL), (((/* implicit */long long int) (signed char)(-127 - 1)))))) || (((((/* implicit */_Bool) (signed char)-79)) || (((/* implicit */_Bool) 22U)))))) && ((((!(((/* implicit */_Bool) arr_42 [i_16])))) && (((/* implicit */_Bool) arr_5 [i_14 + 1] [i_14 + 1] [i_14 + 1]))))));
                    }
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        var_38 = ((/* implicit */long long int) arr_40 [(unsigned short)18] [i_14] [i_14 + 1] [(unsigned char)19]);
                        var_39 = ((/* implicit */signed char) ((1099527279) == (32767)));
                        var_40 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)41135)), (-763820769)));
                        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_14] [i_14])) ? (((((/* implicit */_Bool) arr_45 [i_13] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_13] [(signed char)9] [i_15]))) : (var_1))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127)))))))) ? (((((/* implicit */_Bool) arr_9 [i_13] [i_14 - 1] [24U] [i_15] [i_15] [i_14 + 1])) ? (arr_9 [i_15] [i_17] [i_17] [i_17] [i_15] [i_14 + 1]) : (arr_9 [i_13] [i_13] [i_15] [(unsigned short)0] [i_13] [i_14 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_16 [i_13] [i_14 + 2] [i_13] [i_14] [i_14] [i_15] [i_14]))))));
                        var_42 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_3 [i_13] [i_14] [i_13])))) ? (((((/* implicit */int) (signed char)5)) % (763820768))) : (((((/* implicit */_Bool) var_5)) ? (arr_33 [i_14 - 1]) : (((/* implicit */int) arr_42 [i_17]))))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) 1053755826)) ? (-1743238573) : (((/* implicit */int) (unsigned short)16)))));
                    }
                    for (unsigned long long int i_18 = 3; i_18 < 20; i_18 += 2) 
                    {
                        var_43 = ((/* implicit */unsigned int) var_2);
                        var_44 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((arr_36 [i_14]), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_41 [i_18 - 2] [i_14] [i_14] [i_13])) : (arr_15 [4] [i_14] [i_14] [4] [19] [4] [8LL])))))), (((long long int) ((var_8) + (((/* implicit */unsigned long long int) arr_13 [(unsigned short)22] [i_14])))))));
                        var_45 = ((/* implicit */signed char) min((((((arr_8 [i_13] [(signed char)1] [i_14] [i_15] [i_18]) | (((/* implicit */int) arr_40 [i_18] [i_15] [i_14] [5U])))) | (((/* implicit */int) arr_37 [i_14])))), (((((/* implicit */_Bool) arr_8 [i_13] [6U] [i_14] [2U] [i_14])) ? ((~(arr_51 [i_18]))) : (((/* implicit */int) var_10))))));
                        var_46 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_1 [i_18 + 1])) / (((/* implicit */int) arr_2 [i_18 + 1]))))));
                    }
                    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_41 [i_14 - 1] [i_14] [i_14] [i_13]))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_17 [i_13] [i_14] [i_14] [i_15])), (var_7))))))));
                }
            } 
        } 
        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) -1679824376))));
        var_49 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_13] [2ULL]))));
    }
}
