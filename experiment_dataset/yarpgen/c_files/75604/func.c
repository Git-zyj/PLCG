/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75604
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_16 -= ((/* implicit */unsigned short) arr_0 [i_0 - 2]);
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0 - 3]), (arr_0 [i_0 + 1])))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 3]))));
        var_18 = (signed char)-14;
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) << (((((/* implicit */int) arr_1 [i_0 - 2])) - (34606)))))) ? (min((((/* implicit */unsigned int) (unsigned short)28153)), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)15])))));
    }
    for (unsigned short i_1 = 3; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((unsigned short) (signed char)-14)), (((/* implicit */unsigned short) arr_3 [i_1] [13ULL])))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 86261051U))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14)))))) ? (((/* implicit */int) arr_2 [(signed char)2] [i_2])) : (((var_9) ? (((/* implicit */int) arr_4 [i_2] [i_2 - 1])) : (((/* implicit */int) var_14))))));
            var_23 = ((/* implicit */signed char) arr_5 [i_1]);
            var_24 = ((/* implicit */_Bool) arr_6 [i_2 - 1]);
            arr_7 [(_Bool)1] [i_1] = ((/* implicit */signed char) arr_2 [1LL] [i_2]);
            var_25 = ((/* implicit */long long int) ((unsigned char) ((arr_4 [i_2] [i_1]) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_2 [i_1] [i_2 + 1])))));
        }
        for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) /* same iter space */
        {
            arr_11 [i_1] [i_3] = ((/* implicit */int) ((signed char) var_3));
            var_26 = ((/* implicit */unsigned short) ((var_4) / (((/* implicit */unsigned long long int) var_11))));
            var_27 = ((/* implicit */short) arr_10 [i_1] [(unsigned short)1]);
            var_28 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) max((arr_3 [i_1] [i_1]), (arr_10 [i_3 + 1] [i_1])))))) % (((/* implicit */int) (unsigned short)65146))));
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (_Bool)1))));
        }
    }
    for (unsigned short i_4 = 3; i_4 < 22; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) arr_12 [23LL]);
        arr_16 [i_4] [i_4 + 1] = ((/* implicit */_Bool) (((_Bool)1) ? (arr_8 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4])))));
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_13 [14ULL]))));
            arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-52))));
            var_31 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-1))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_6 = 1; i_6 < 21; i_6 += 3) 
            {
                var_32 -= ((/* implicit */unsigned int) ((unsigned char) 5476246629380330814LL));
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_6])) ? (((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_4])))) : (((/* implicit */int) (signed char)-79))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_8] = ((/* implicit */long long int) arr_10 [i_5] [i_5]);
                        var_34 = (~(var_0));
                    }
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_4 + 1]))));
                        var_36 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_4 - 2] [(unsigned short)14] [i_6] [(unsigned char)18] [i_9])) && (((/* implicit */_Bool) arr_23 [i_4 + 2] [(_Bool)1] [i_5] [i_7] [i_9]))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                    {
                        var_37 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)98)) ? ((-(((/* implicit */int) (unsigned short)371)))) : ((~(((/* implicit */int) arr_10 [i_4] [i_6]))))));
                        var_38 -= ((/* implicit */unsigned int) var_11);
                    }
                    arr_35 [i_7] [14LL] [14LL] [i_7] [i_6] [i_7] = ((/* implicit */unsigned short) arr_21 [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_6 + 1]);
                }
            }
            for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                arr_39 [i_4] [(unsigned char)5] [i_5] [i_11] = ((/* implicit */unsigned char) ((_Bool) arr_38 [i_11]));
                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_11])) ? (((/* implicit */int) ((unsigned char) arr_23 [i_11] [(signed char)0] [i_5] [i_4 + 1] [i_4]))) : (((/* implicit */int) arr_18 [i_4] [i_5] [i_4])))))));
                /* LoopSeq 2 */
                for (short i_12 = 3; i_12 < 22; i_12 += 4) /* same iter space */
                {
                    arr_44 [i_12] [(unsigned short)10] [i_11] = ((/* implicit */unsigned char) arr_8 [i_11] [i_11] [i_11]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 4) 
                    {
                        var_40 -= ((/* implicit */long long int) (unsigned char)148);
                        arr_47 [i_4] [i_4] [i_5] [i_11] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_13 + 2] [i_13] [i_13 + 1] [i_13 + 3] [i_13])) ? (((/* implicit */int) arr_42 [i_13 + 1] [i_13] [i_12] [i_13 - 1] [i_13] [i_13 + 3])) : (((/* implicit */int) arr_42 [i_13 + 2] [i_13] [i_12] [i_13 - 1] [23ULL] [i_13 + 1]))))) ? ((-(((/* implicit */int) arr_42 [i_13 + 1] [i_13] [i_12] [i_13 - 1] [1U] [i_13 - 1])))) : ((~(((/* implicit */int) arr_42 [i_13 - 1] [i_13 + 1] [i_12] [i_13 + 1] [i_13 + 1] [i_13 + 3]))))));
                    }
                    for (short i_14 = 4; i_14 < 21; i_14 += 1) 
                    {
                        arr_51 [i_4] [i_12] [i_11] [i_11] [i_11] [i_14 - 4] = ((/* implicit */long long int) var_1);
                        arr_52 [i_12] [i_5] [i_12] [i_12] [i_12] [i_14] [i_14 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_5 [i_4 + 1]))) ? ((~(arr_27 [5U] [i_12 + 2] [i_4] [i_14 + 3] [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned short) max(((unsigned char)139), ((unsigned char)113))))))))));
                    }
                }
                /* vectorizable */
                for (short i_15 = 3; i_15 < 22; i_15 += 4) /* same iter space */
                {
                    var_41 = arr_5 [i_4];
                    var_42 = ((/* implicit */short) arr_5 [i_11]);
                    var_43 = ((/* implicit */signed char) arr_41 [i_4] [i_5] [i_4] [(signed char)17] [i_15 - 2]);
                }
                var_44 = ((/* implicit */unsigned short) arr_13 [(_Bool)1]);
            }
            for (long long int i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                var_45 -= ((/* implicit */long long int) arr_14 [(unsigned char)6]);
                var_46 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (10494485697885644506ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766)))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_16] [i_16] [i_16] [i_16] [i_4 + 2] [i_4 + 2]))))))));
                var_47 = ((/* implicit */short) (unsigned char)253);
                var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_4 - 3] [13LL] [i_4 - 3] [i_5] [i_5] [i_5] [i_16])) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) arr_14 [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4U)))))));
                var_49 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1266227411U))));
            }
        }
        for (signed char i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_18 = 0; i_18 < 24; i_18 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_19 = 1; i_19 < 21; i_19 += 1) /* same iter space */
                {
                    var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) (+(((/* implicit */int) var_8)))))));
                    var_51 = ((/* implicit */signed char) ((unsigned char) min((((((/* implicit */_Bool) var_12)) ? (arr_34 [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19770))))), (((/* implicit */unsigned int) ((_Bool) (_Bool)1))))));
                }
                for (unsigned char i_20 = 1; i_20 < 21; i_20 += 1) /* same iter space */
                {
                    arr_68 [i_17] [i_18] [i_20] = ((/* implicit */unsigned char) arr_18 [i_4 + 1] [i_4] [i_4 - 1]);
                    arr_69 [i_20 + 1] [i_20] [i_18] [i_17] [i_4] [i_4] = ((/* implicit */signed char) arr_30 [i_17] [i_17] [(unsigned char)6] [(_Bool)1] [i_17] [i_17] [i_17]);
                }
                /* vectorizable */
                for (unsigned char i_21 = 1; i_21 < 21; i_21 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_22 = 0; i_22 < 24; i_22 += 3) 
                    {
                        arr_74 [i_21] [i_21] [i_22] [i_18] = ((/* implicit */unsigned short) arr_8 [(_Bool)1] [(unsigned char)7] [(unsigned char)7]);
                        var_52 = ((/* implicit */short) var_10);
                    }
                    for (unsigned int i_23 = 0; i_23 < 24; i_23 += 1) 
                    {
                        arr_78 [(_Bool)1] [i_21] [i_18] [i_21 - 1] [22ULL] = ((/* implicit */unsigned char) ((_Bool) (unsigned short)0));
                        var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8))) | (var_3)))) ? (((/* implicit */unsigned long long int) arr_67 [i_23] [11U] [i_18] [i_18] [i_17] [i_4])) : (((arr_4 [(unsigned short)20] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [(signed char)2]))) : (arr_48 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 3])))));
                        var_54 = ((unsigned char) 275614800943486621LL);
                    }
                    arr_79 [(_Bool)1] [(_Bool)1] [i_21] [0ULL] [i_21] [i_18] = ((/* implicit */signed char) arr_17 [i_4 - 3]);
                }
                arr_80 [i_17] = ((/* implicit */unsigned short) var_12);
            }
            var_55 = ((/* implicit */int) min((((/* implicit */long long int) arr_21 [i_4] [15LL] [i_4] [15LL])), (((long long int) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [19LL]))) : (arr_70 [i_4] [(_Bool)0] [i_17] [(_Bool)1] [i_4] [i_4]))))));
            var_56 = ((/* implicit */short) var_0);
        }
        for (signed char i_24 = 0; i_24 < 24; i_24 += 1) /* same iter space */
        {
            arr_83 [i_24] = ((/* implicit */int) arr_17 [(signed char)14]);
            var_57 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_4] [i_24] [i_24] [i_4] [i_24])))))) ? (((/* implicit */int) arr_3 [i_4 - 1] [i_4])) : (((/* implicit */int) arr_66 [i_24] [i_4 + 2] [i_24] [(short)9])))), (((/* implicit */int) var_6))));
            arr_84 [i_24] [i_24] [i_4 + 1] = ((/* implicit */short) (-((+(((/* implicit */int) var_6))))));
        }
    }
    var_58 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_3))))));
    var_59 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
}
