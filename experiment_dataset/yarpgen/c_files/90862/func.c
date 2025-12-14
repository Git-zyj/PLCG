/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90862
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (-6544136220648751475LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)38719)) | (((/* implicit */int) (unsigned char)255)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) (short)-7870);
                    var_14 = ((/* implicit */long long int) max((var_14), (max((var_11), (arr_4 [i_1] [i_1] [i_1 + 1])))));
                    var_15 += ((/* implicit */long long int) var_3);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) (short)-7870);
    }
    var_17 = ((/* implicit */short) ((max((((((/* implicit */long long int) ((/* implicit */int) var_12))) / (-2LL))), (((/* implicit */long long int) ((unsigned char) (short)7869))))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-100)))));
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            arr_13 [i_3] = ((/* implicit */_Bool) ((-929972497) ^ (((/* implicit */int) arr_10 [i_3] [i_3]))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((signed char) (short)-7870)))));
            arr_14 [i_3] [i_3] = ((var_4) << ((((((~(((/* implicit */int) (short)7859)))) + (7891))) - (31))));
            var_19 = ((/* implicit */signed char) ((short) var_0));
        }
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)59))))))) ? (((((/* implicit */int) (unsigned char)249)) % (((/* implicit */int) max(((unsigned short)255), (((/* implicit */unsigned short) (short)12804))))))) : (((/* implicit */int) var_10))));
    }
    /* LoopSeq 2 */
    for (long long int i_5 = 4; i_5 < 22; i_5 += 2) 
    {
        arr_18 [i_5 - 1] [i_5] = ((/* implicit */short) 1615612426);
        var_21 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)7861))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-7870))) <= (4294967280U)))) : (arr_16 [i_5 + 1]))), (((/* implicit */int) max(((unsigned short)3535), (((/* implicit */unsigned short) (signed char)-77))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((arr_19 [i_5 - 3] [i_5 + 3] [i_5 - 4]) != (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
            var_24 ^= ((/* implicit */int) 9022450986389893867LL);
            var_25 = ((/* implicit */int) 0ULL);
            var_26 = ((/* implicit */signed char) arr_15 [i_5 + 2] [i_6]);
        }
        /* vectorizable */
        for (unsigned int i_7 = 1; i_7 < 24; i_7 += 3) 
        {
            var_27 = ((/* implicit */unsigned short) -1LL);
            /* LoopNest 2 */
            for (short i_8 = 1; i_8 < 23; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    {
                        arr_31 [i_7 + 1] [i_7 + 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_8])) < (((/* implicit */int) ((1166543350) != (((/* implicit */int) (_Bool)1)))))));
                        arr_32 [i_8] = ((/* implicit */unsigned int) var_11);
                        var_28 = (unsigned short)65514;
                    }
                } 
            } 
        }
    }
    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (short)-7862)) ? (((/* implicit */long long int) -2147483631)) : (9223372036854775807LL))))) ? (((/* implicit */int) arr_29 [(signed char)12])) : (((/* implicit */int) ((unsigned char) var_7)))));
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_28 [24U] [24U] [24U] [i_10])))) ? (((unsigned long long int) arr_26 [i_10] [i_10] [i_10])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && ((_Bool)1)))) != (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) arr_15 [i_10] [i_10]))))))))))))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        for (unsigned short i_14 = 3; i_14 < 22; i_14 += 1) 
                        {
                            {
                                arr_46 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_14 - 3])) % (((/* implicit */int) arr_29 [i_11]))))) && (((/* implicit */_Bool) var_0))));
                                var_31 = arr_16 [i_10];
                                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_14 - 2]))) : (0LL))) == (min((((/* implicit */long long int) (short)-7870)), (-7272365888717097821LL))))))));
                                arr_47 [i_10] [i_10] [i_12] [i_12] [0U] [i_14 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_44 [i_10] [i_11] [i_12] [i_13] [i_11] [i_11] [i_14 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) : (arr_30 [i_14 + 2] [i_14 - 2] [i_14 - 3] [i_14] [i_14 - 3])))) || (((/* implicit */_Bool) arr_35 [i_10] [i_11]))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
                    {
                        arr_51 [i_10] [i_11] [i_12] [i_11] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) 1173120714)))), (((((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) == (max((((/* implicit */unsigned long long int) (unsigned short)0)), (var_5)))))));
                        var_33 = ((/* implicit */unsigned int) arr_49 [i_10] [i_10] [i_10] [i_10]);
                    }
                    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 0; i_17 < 24; i_17 += 3) 
                        {
                            arr_57 [i_11] [i_11] [i_11] [i_17] [i_11] [i_11] [i_11] = ((/* implicit */signed char) 1995436112911818466ULL);
                            arr_58 [i_10] [(unsigned char)18] [i_12] [i_16] [i_12] [i_17] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_16]))) % ((~(3341791903U))))) << (((((/* implicit */int) (unsigned short)65535)) - (65520)))));
                            var_34 = ((/* implicit */unsigned short) ((_Bool) arr_24 [i_10] [i_10]));
                        }
                        /* vectorizable */
                        for (long long int i_18 = 1; i_18 < 22; i_18 += 2) 
                        {
                            var_35 += ((/* implicit */signed char) ((arr_40 [i_18 + 2] [i_11]) < (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            arr_62 [i_10] [i_10] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_28 [i_18 + 1] [i_16] [i_16] [i_18 + 2]))));
                            arr_63 [i_10] = ((/* implicit */unsigned short) arr_23 [i_18 + 2] [i_18 + 2] [i_18 - 1]);
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_23 [i_18 + 1] [i_18 + 1] [i_18 + 1]))));
                        }
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) var_8))));
                        var_38 = ((/* implicit */unsigned char) arr_60 [i_10] [i_10] [i_10] [i_12]);
                        arr_64 [i_12] [i_12] [i_11] = ((/* implicit */unsigned long long int) (signed char)-120);
                    }
                    for (unsigned short i_19 = 0; i_19 < 24; i_19 += 4) /* same iter space */
                    {
                        arr_69 [i_10] [i_10] [i_11] [i_12] [(signed char)16] = ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_34 [i_10] [i_10])))));
                        arr_70 [i_11] [i_11] [i_19] = -2091171695;
                    }
                    for (long long int i_20 = 0; i_20 < 24; i_20 += 2) 
                    {
                        var_39 = ((/* implicit */long long int) (short)7870);
                        arr_73 [i_12] [i_11] = ((/* implicit */_Bool) arr_20 [i_12]);
                    }
                }
            } 
        } 
        var_40 = ((/* implicit */int) min((var_40), (((((((/* implicit */int) arr_67 [i_10] [i_10] [i_10] [i_10])) >> (((((/* implicit */int) arr_67 [i_10] [i_10] [i_10] [i_10])) - (4194))))) << (((((((/* implicit */_Bool) arr_15 [7ULL] [i_10])) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_15 [i_10] [i_10])))) - (9223372036854775790LL)))))));
    }
}
