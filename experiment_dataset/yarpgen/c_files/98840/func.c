/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98840
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        arr_2 [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3742973126599990462ULL)) ? (14703770947109561184ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))))))) : (min((9223372036854775807LL), (((/* implicit */long long int) arr_0 [i_0 - 1]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_7);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_15 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) (unsigned short)34168)))));
            arr_9 [(unsigned char)10] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
        }
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))), (((long long int) (!(((/* implicit */_Bool) (signed char)0)))))));
        arr_10 [i_1] [(unsigned short)9] = ((((/* implicit */unsigned int) (-(((/* implicit */int) max((var_12), (arr_8 [(signed char)5] [i_1] [i_1]))))))) >= (((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-19))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_1] [i_1] [i_1]), (arr_5 [i_1] [i_1]))))) : (max((((/* implicit */unsigned int) arr_7 [i_1] [(unsigned short)10])), (var_2))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */long long int) arr_12 [(unsigned short)10] [i_3]);
        var_17 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_12 [(signed char)5] [i_3])) && (((/* implicit */_Bool) 8629578147471946460LL))))));
        arr_14 [(unsigned char)8] = ((/* implicit */short) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-9)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        arr_19 [i_4 - 1] = ((/* implicit */short) (unsigned char)253);
        /* LoopSeq 3 */
        for (unsigned char i_5 = 2; i_5 < 15; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_6 = 2; i_6 < 17; i_6 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_5] [i_5 - 2])) ? (((/* implicit */int) arr_23 [i_6] [i_5 + 2] [i_5] [i_6])) : (((/* implicit */int) var_6))));
                var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
            var_20 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (short)23697))))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_4 - 1])) ? (((/* implicit */int) arr_16 [i_4 - 1])) : (((/* implicit */int) arr_20 [i_5] [i_4]))));
        }
        for (unsigned char i_7 = 2; i_7 < 16; i_7 += 3) 
        {
            arr_28 [i_7] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_9)) : (arr_25 [i_4 + 1] [i_4 - 1] [i_7 - 1])));
            arr_29 [i_7] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((((/* implicit */int) (short)-23698)) & (((/* implicit */int) (signed char)-1)))) + (23709)))));
            /* LoopSeq 1 */
            for (long long int i_8 = 2; i_8 < 17; i_8 += 1) 
            {
                arr_33 [i_4] [i_4] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) arr_17 [(unsigned short)16] [i_8])) : (((/* implicit */int) arr_27 [7U]))))) ? (((/* implicit */int) ((_Bool) (short)-1))) : (((/* implicit */int) arr_20 [i_7] [i_8]))));
                var_22 = ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)8))))) <= (((((/* implicit */_Bool) arr_30 [i_8] [i_8 - 1] [(unsigned short)2] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-12))) : (var_3))));
                arr_34 [i_7] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)94))) : (26996466266978727LL)));
                arr_35 [(unsigned short)12] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((arr_24 [i_7] [i_7 - 2] [i_7 - 1]) ? (((/* implicit */int) arr_20 [i_7] [i_7])) : (((/* implicit */int) arr_32 [(_Bool)1] [i_7] [i_8 + 1] [i_8 - 1]))));
            }
            var_23 = ((/* implicit */unsigned char) (short)22);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((_Bool) arr_17 [i_4] [i_9])) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_37 [i_4 + 1]))))));
            arr_38 [i_4] [i_4] [i_9] = ((/* implicit */signed char) ((arr_25 [i_4 + 1] [i_4 - 1] [i_4]) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))));
            var_25 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)4862)) : (((/* implicit */int) ((unsigned char) (unsigned char)240)))));
        }
    }
    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_20 [i_10] [i_10])), (var_4)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_23 [8LL] [8LL] [i_10] [8LL]))))) : (((arr_25 [i_10] [i_10] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10] [i_10]))))))) * (max((((((/* implicit */_Bool) arr_41 [(unsigned char)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10] [i_10]))) : (var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_10] [i_10])))))))));
        /* LoopSeq 3 */
        for (long long int i_11 = 1; i_11 < 12; i_11 += 1) 
        {
            arr_45 [i_10] [i_10] = ((/* implicit */_Bool) -8796093022208LL);
            arr_46 [i_10] [i_10] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) ((((/* implicit */int) arr_11 [i_10])) >= (((/* implicit */int) (_Bool)1)))))))));
        }
        for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            arr_49 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) 9223372036854775807LL))) ^ (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_27 [(unsigned char)16])) << (((arr_22 [i_10]) + (675624733478161676LL)))))))));
            arr_50 [i_10] [i_10] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_27 [i_10])))) <= ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) arr_27 [i_10]))))));
        }
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)103)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                var_28 = ((/* implicit */unsigned long long int) var_12);
                /* LoopSeq 1 */
                for (long long int i_15 = 4; i_15 < 12; i_15 += 2) 
                {
                    var_29 = ((/* implicit */unsigned short) arr_48 [i_13 + 1]);
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_7 [3LL] [i_15]))) ? (arr_57 [i_15 - 1] [i_15] [i_15 - 1] [i_15]) : (2100472436607560485LL)));
                }
                arr_60 [i_10] [i_13 + 1] [i_14] = ((/* implicit */unsigned short) (~((~(8796093022219LL)))));
                arr_61 [i_10] [i_10] [i_10] = ((/* implicit */signed char) (!(arr_51 [i_13] [i_13 + 1] [i_13])));
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) (-(arr_25 [i_13] [i_13 + 1] [i_13 + 1])));
                            var_32 = ((/* implicit */long long int) arr_69 [i_10] [i_10] [i_10] [i_10] [(signed char)5] [i_10]);
                            var_33 = arr_58 [i_13] [i_13 + 1] [i_13 + 1] [i_13];
                        }
                    } 
                } 
            }
            var_34 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 6811071941026367253LL)), (8737298503723291046ULL)))) || (((/* implicit */_Bool) ((arr_37 [i_10]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)28)))))))), (max(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10] [i_13]))) : (285787742238680913LL))), (((/* implicit */long long int) arr_67 [(_Bool)1] [(unsigned char)7] [i_10] [i_10] [i_10] [i_10] [i_10]))))));
            arr_70 [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24)) ? (((/* implicit */int) arr_15 [i_10] [i_13])) : (((/* implicit */int) arr_4 [i_10]))))) ? (((arr_51 [(unsigned char)3] [i_13 + 1] [i_13 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_10] [i_10] [i_10] [i_10] [i_13]))) : (arr_25 [(unsigned short)3] [i_10] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_43 [i_10])), ((unsigned short)0))))))) / (((/* implicit */long long int) (+(var_7))))));
        }
    }
    for (unsigned short i_18 = 0; i_18 < 13; i_18 += 2) /* same iter space */
    {
        arr_73 [(unsigned short)4] = arr_8 [i_18] [i_18] [i_18];
        var_35 = (unsigned char)230;
        arr_74 [i_18] = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
        var_36 = ((/* implicit */_Bool) (~((~(((arr_37 [i_18]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_62 [i_18] [i_18] [i_18] [i_18]))))))));
    }
    var_37 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) : (2532684192U)));
}
