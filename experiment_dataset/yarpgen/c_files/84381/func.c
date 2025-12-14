/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84381
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
    var_18 = ((/* implicit */short) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((-8330908962968730068LL) < (((/* implicit */long long int) var_1))))));
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((12648007820999959389ULL) <= (12648007820999959380ULL))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) 5798736252709592221ULL)))))));
            var_20 = ((/* implicit */unsigned int) 5798736252709592242ULL);
            var_21 |= ((/* implicit */unsigned long long int) var_16);
        }
        for (unsigned short i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            var_22 = ((/* implicit */short) 12648007820999959389ULL);
            var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
            var_24 = ((/* implicit */unsigned short) ((12648007820999959389ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (358267355U))))));
        }
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */short) (_Bool)0);
            var_26 = ((/* implicit */int) var_3);
        }
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_5 = 2; i_5 < 12; i_5 += 1) 
            {
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~(arr_11 [i_0] [i_5]))))));
                var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_5] [i_5 + 2] [i_5 + 2]))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    arr_20 [(unsigned char)6] [i_0] [(unsigned char)6] [i_6] [i_6] = ((/* implicit */unsigned int) var_3);
                    arr_21 [i_0] [i_0] [i_0] [0LL] = ((/* implicit */unsigned short) var_14);
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (arr_7 [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                    arr_22 [i_6] [i_4] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0])))))));
                    var_30 = ((/* implicit */short) arr_9 [i_7] [i_0]);
                }
                for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    arr_25 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) ((1837218955U) >> (((((/* implicit */int) (unsigned short)26341)) - (26315)))));
                    var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3293050668U)))))));
                    var_32 &= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) arr_13 [8] [8] [i_6])))) / ((-(var_6)))));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(_Bool)1] [i_4] [i_4] [i_4]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_8]))) % (1285032613534990095ULL)))));
                    var_34 = ((/* implicit */unsigned char) arr_16 [i_0] [i_0] [i_0]);
                }
                arr_26 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) (-(arr_24 [i_0] [i_0] [i_0] [i_0])));
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        var_35 = ((/* implicit */int) 1837218955U);
                        var_36 &= ((/* implicit */unsigned short) ((5798736252709592228ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2785855647822685161LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32852))))))));
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)31689))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))) : (17161711460174561520ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    }
                    for (unsigned int i_11 = 1; i_11 < 11; i_11 += 2) 
                    {
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (short)32256)) : (((/* implicit */int) var_13))));
                        var_39 = ((/* implicit */int) (unsigned char)128);
                        arr_36 [i_9] [i_0] [i_11] [i_0] [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1473138481)) == (2820414932640378628ULL)));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 3; i_12 < 13; i_12 += 1) 
                    {
                        var_40 = var_16;
                        var_41 &= ((/* implicit */unsigned int) ((var_14) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114)))));
                        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)145)) >= (((/* implicit */int) arr_18 [i_0] [i_12 + 2] [(unsigned char)1] [i_6]))));
                        var_43 = ((/* implicit */int) 2457748340U);
                        var_44 = (_Bool)0;
                    }
                    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_6] [i_9] [i_9] = ((/* implicit */unsigned short) (~(-8286554882471545047LL)));
                        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((5088158478115615857ULL) >> (((((/* implicit */int) var_5)) - (5324))))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) /* same iter space */
                    {
                        var_46 = ((/* implicit */unsigned char) var_5);
                        var_47 = ((/* implicit */_Bool) (+(var_17)));
                        arr_47 [i_4] [i_4] [i_6] [i_6] [i_0] [i_4] = ((/* implicit */unsigned int) var_9);
                    }
                    arr_48 [i_0] [i_0] [i_4] [i_4] [4ULL] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_12))))));
                }
                for (int i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    var_48 = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                    var_49 += ((/* implicit */_Bool) arr_30 [i_0] [i_6]);
                    arr_51 [i_0] [i_0] [i_0] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))));
                }
                var_50 = ((/* implicit */unsigned short) max((var_50), ((unsigned short)15656)));
                var_51 += ((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_38 [i_0] [i_0] [i_6] [i_4] [i_4] [i_0] [i_0]))));
            }
        }
        arr_52 [i_0] [i_0] = ((/* implicit */unsigned short) var_17);
        /* LoopSeq 2 */
        for (unsigned int i_16 = 4; i_16 < 14; i_16 += 3) 
        {
            var_52 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_35 [i_0] [(unsigned char)7] [(short)6] [i_0] [i_0])) ? (0) : (((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0])))) < ((~(-563809034)))));
            var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((arr_46 [i_0] [i_0] [i_16]) * (arr_0 [(unsigned short)6]))))));
            arr_57 [i_0] = ((var_1) - (((/* implicit */unsigned int) (+(var_6)))));
            var_54 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_13)) * (((/* implicit */int) var_2))))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_18 = 3; i_18 < 12; i_18 += 4) 
            {
                var_55 = ((/* implicit */_Bool) (unsigned char)57);
                var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) (((+(5798736252709592234ULL))) + (((/* implicit */unsigned long long int) var_17)))))));
            }
            for (unsigned int i_19 = 2; i_19 < 13; i_19 += 1) 
            {
                var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) <= (var_14))) ? (var_16) : (358905934))))));
                var_58 -= ((/* implicit */unsigned short) var_11);
                arr_65 [i_0] [i_0] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_33 [i_0] [i_17] [i_19] [i_0] [i_0])) : (var_16)));
            }
            /* LoopSeq 1 */
            for (unsigned int i_20 = 0; i_20 < 15; i_20 += 1) 
            {
                var_59 = ((/* implicit */unsigned short) 3936699940U);
                var_60 = ((/* implicit */unsigned char) var_11);
                var_61 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)6))))) < (((0ULL) >> (((((/* implicit */int) arr_31 [i_0] [0U] [i_0] [i_0] [i_0])) - (41148)))))));
                arr_68 [i_0] [i_0] [i_20] [(short)6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_0] [i_0] [i_20]))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_59 [(unsigned char)10] [i_17]))) - (4294967295U)))));
            }
            var_62 = ((/* implicit */short) ((2147483647) >= (((/* implicit */int) var_12))));
        }
        var_63 = ((/* implicit */short) max((var_63), (((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [(unsigned short)7] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_32 [i_0] [i_0] [(signed char)6] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))))));
    }
}
