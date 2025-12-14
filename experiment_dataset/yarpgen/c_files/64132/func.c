/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64132
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((2251795518717952ULL) - (18444492278190833658ULL))))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_6))));
                    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) -7124862004103519595LL)) % (11323167304340934731ULL))))), (((((/* implicit */_Bool) 18444492278190833664ULL)) ? (((/* implicit */int) arr_4 [i_0] [1U] [1U])) : (((/* implicit */int) ((((/* implicit */_Bool) 8U)) && (((/* implicit */_Bool) 10812712399652784429ULL)))))))));
                    var_21 -= ((/* implicit */unsigned int) ((unsigned long long int) max((var_11), (((/* implicit */int) arr_2 [i_0])))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_7 [7U] [(unsigned short)16] [13ULL] [i_0])) : (((/* implicit */int) (unsigned short)3003))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 10; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_3 + 1])) && (((/* implicit */_Bool) arr_17 [i_3 + 2])))))));
                        arr_21 [i_3] [i_3] [(signed char)5] [i_3] [i_3] = ((((/* implicit */_Bool) arr_18 [i_3 + 1] [i_3 + 1])) ? (arr_18 [i_3 + 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))));
                    }
                } 
            } 
        } 
        var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3 + 2])) ? (((6889806907938052607ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4294967281U))))));
        var_25 = ((/* implicit */unsigned int) ((arr_15 [i_3 + 2]) != (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 + 2] [i_3])))));
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                var_26 = ((/* implicit */int) ((unsigned long long int) arr_16 [i_3 + 2] [11U] [i_3 + 1] [i_3]));
                /* LoopSeq 4 */
                for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    var_27 += ((/* implicit */signed char) (-(arr_16 [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_9])));
                    var_28 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) -1413428449041089286LL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_3]))))));
                    arr_28 [i_3] [i_3 + 2] [i_8] [i_9] [i_8] = (!(((/* implicit */_Bool) arr_18 [i_3 + 1] [i_3 - 1])));
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((signed char) arr_18 [i_3 + 1] [i_3 - 2])))));
                }
                for (signed char i_10 = 3; i_10 < 11; i_10 += 2) 
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_10 - 1] [i_10 + 1] [i_10 - 1]))) > (arr_18 [i_3] [i_8])));
                    var_31 = ((/* implicit */unsigned int) ((var_3) ^ (var_12)));
                }
                for (unsigned long long int i_11 = 3; i_11 < 10; i_11 += 4) 
                {
                    var_32 -= ((/* implicit */signed char) ((unsigned short) (short)(-32767 - 1)));
                    arr_34 [i_3] [i_11] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28300))) >= (arr_32 [i_11] [i_11 - 2] [i_8] [i_3 + 1] [i_11])));
                    var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_3 + 2] [(_Bool)1]))));
                    /* LoopSeq 3 */
                    for (int i_12 = 1; i_12 < 11; i_12 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)58)) ? (arr_20 [i_3 + 2] [i_11 - 3] [i_12 + 1] [i_11]) : (((/* implicit */unsigned long long int) arr_30 [i_11 + 1]))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_11 - 3] [i_3 - 2])) ? (((/* implicit */int) arr_3 [i_11 + 2] [i_3 - 2])) : (((/* implicit */int) arr_3 [i_11 + 1] [i_3 - 1]))));
                        var_36 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_17 [i_12 - 1])) ? (var_13) : (((/* implicit */unsigned long long int) 1748671019U)))));
                        var_37 = ((/* implicit */unsigned int) ((arr_6 [i_8] [i_3 + 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_11 - 2] [(unsigned short)1] [i_11 - 1] [i_11 - 3])))));
                        var_38 = ((signed char) (unsigned short)20);
                    }
                    for (int i_13 = 1; i_13 < 11; i_13 += 1) /* same iter space */
                    {
                        arr_41 [i_11] [i_11] [i_8] [i_7] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) arr_27 [i_3 + 1] [i_3] [6ULL] [i_3])))));
                        var_39 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) 3395718832U)) ? (var_7) : (((/* implicit */unsigned long long int) 349114860)))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)16384)))))));
                        var_40 = ((/* implicit */_Bool) var_5);
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_13 - 1] [i_11 - 2] [i_3 - 2])) & (((/* implicit */int) (short)16377))));
                    }
                    for (long long int i_14 = 2; i_14 < 11; i_14 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_27 [i_11 - 3] [i_11 - 2] [i_11] [i_11 - 1])))) ? (((23ULL) / (((/* implicit */unsigned long long int) arr_15 [i_14])))) : (10285412660257635870ULL)));
                        var_43 = ((/* implicit */int) ((unsigned long long int) arr_40 [i_14 - 1] [i_11 - 3] [i_14 - 1] [2LL] [i_3 + 2]));
                        var_44 = ((/* implicit */unsigned long long int) ((unsigned short) ((11342557323053373056ULL) < (arr_0 [i_3]))));
                        var_45 = ((/* implicit */unsigned int) (~((~(11323167304340934731ULL)))));
                    }
                }
                for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        var_46 &= ((/* implicit */unsigned int) arr_35 [i_16] [i_15] [i_8] [i_7] [i_3]);
                        var_47 = ((/* implicit */signed char) 1779008129599694817ULL);
                        var_48 = ((/* implicit */short) (-(((/* implicit */int) (short)-18002))));
                        var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_8])) < (((/* implicit */int) arr_40 [i_3 + 1] [i_7] [i_7] [i_15] [i_16])))))));
                    }
                    for (int i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-8001))) / (503316480U))) : (((/* implicit */unsigned int) -204084662))));
                        var_51 = ((unsigned long long int) (short)7);
                    }
                    var_52 = ((/* implicit */unsigned short) var_3);
                }
                arr_53 [i_3] [i_8] = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) 12232487415715276459ULL)));
                var_53 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_46 [i_3 - 1] [i_3] [i_3 + 2]))));
                arr_54 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) 2147483647);
            }
            for (short i_18 = 0; i_18 < 12; i_18 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_19 = 0; i_19 < 12; i_19 += 3) 
                {
                    var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) (+(var_16))))));
                    /* LoopSeq 4 */
                    for (signed char i_20 = 1; i_20 < 11; i_20 += 2) /* same iter space */
                    {
                        arr_65 [i_7] &= ((/* implicit */signed char) ((6214256657994275151ULL) > (((/* implicit */unsigned long long int) -2111001411))));
                        var_55 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) > (arr_0 [i_7]))))) >= ((((_Bool)1) ? (((/* implicit */unsigned long long int) -1483328338)) : (0ULL)))));
                    }
                    for (signed char i_21 = 1; i_21 < 11; i_21 += 2) /* same iter space */
                    {
                        arr_68 [0U] [i_21 - 1] [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_47 [i_3] [i_21 - 1]))));
                        var_56 -= ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_3 + 1] [i_3 + 1]));
                        var_57 = ((/* implicit */unsigned long long int) (-(var_16)));
                        var_58 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_47 [i_21] [i_3 + 2])) + (((/* implicit */int) var_15))));
                        arr_69 [i_7] [i_7] [(unsigned short)9] [i_19] [i_19] = ((/* implicit */unsigned long long int) (~(arr_26 [i_3 + 1])));
                    }
                    for (signed char i_22 = 1; i_22 < 11; i_22 += 2) /* same iter space */
                    {
                        arr_72 [i_19] = ((/* implicit */unsigned int) ((short) 1483328343));
                        var_59 = ((/* implicit */_Bool) (~(((int) (_Bool)1))));
                        var_60 = ((unsigned long long int) arr_66 [i_3 - 1] [i_3 + 2] [i_3 - 1]);
                        var_61 = ((/* implicit */long long int) ((unsigned short) 349114871));
                        arr_73 [i_19] [i_22 - 1] = ((/* implicit */unsigned int) ((unsigned long long int) arr_9 [i_3] [i_19]));
                    }
                    for (long long int i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        var_62 = ((((/* implicit */_Bool) arr_70 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_19])) ? (arr_70 [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 + 2] [i_19]) : (((/* implicit */unsigned long long int) 112485850)));
                        var_63 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)128)) ? (var_3) : (5360439780405763641ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65407)))));
                        var_64 = ((/* implicit */unsigned short) 3606212530U);
                    }
                }
                var_65 = ((/* implicit */unsigned int) -804860017);
                var_66 += ((/* implicit */signed char) (-(arr_11 [i_3 + 1])));
            }
            for (int i_24 = 0; i_24 < 12; i_24 += 3) 
            {
                arr_78 [i_3 - 2] [i_3 - 2] [i_3] = ((/* implicit */unsigned char) ((signed char) (short)-16384));
                var_67 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)16))));
            }
            for (int i_25 = 4; i_25 < 11; i_25 += 4) 
            {
                var_68 = ((/* implicit */unsigned int) min((var_68), (((/* implicit */unsigned int) ((int) arr_8 [i_25 - 4] [i_3 + 1] [i_3 - 2])))));
                var_69 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3] [i_25 - 1] [i_3 + 2])) ? (arr_0 [i_3 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_25 - 2] [i_3 + 1])))));
                var_70 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) * (arr_50 [i_25 - 3])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_59 [i_25] [i_7] [i_25]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)113))) - (0ULL)))));
            }
            var_71 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_3 + 1]))) : (2881382317017205517ULL)));
        }
        for (short i_26 = 0; i_26 < 12; i_26 += 2) /* same iter space */
        {
            var_72 = ((/* implicit */unsigned int) ((((var_8) + (2147483647))) >> (((/* implicit */int) ((945034700) > (((/* implicit */int) (unsigned short)65422)))))));
            arr_84 [i_3] [i_26] [i_26] = ((unsigned long long int) arr_36 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 2]);
        }
    }
    /* vectorizable */
    for (unsigned int i_27 = 0; i_27 < 13; i_27 += 4) 
    {
        var_73 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 474917328)) ? (((/* implicit */int) arr_1 [i_27])) : (1353569336)));
        arr_88 [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_27] [i_27])) ? (((/* implicit */int) arr_1 [i_27])) : (2147483647)));
        var_74 = ((/* implicit */short) max((var_74), (((/* implicit */short) (+(1413428449041089287LL))))));
    }
    var_75 = ((/* implicit */int) var_14);
}
