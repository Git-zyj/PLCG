/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96153
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
    var_16 = ((/* implicit */unsigned long long int) -8062180932957498216LL);
    var_17 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) 8062180932957498229LL)))))) && (((/* implicit */_Bool) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 8; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [9ULL] [i_3 + 3]))) >= (-8062180932957498216LL)));
                            arr_16 [i_0] [i_3] [i_0] [i_3] = ((((/* implicit */_Bool) var_10)) ? (-8062180932957498219LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_3 - 1] [i_3 + 2] [i_4]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 10; i_6 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_0] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [2ULL] [i_1] [i_6 - 1] [i_6]))));
                            arr_27 [10] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2375274678U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_6 + 2]))) : (-8062180932957498248LL)));
                            arr_28 [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) (~(-8062180932957498230LL)));
                            arr_29 [i_0] [i_1] [i_0] [i_1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_6 + 1] [i_6 + 1]))) >= (-8062180932957498230LL)));
                        }
                        for (short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_1] [6] [i_8] = ((8062180932957498216LL) / (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6 - 1] [i_6 - 1] [i_6 - 1]))));
                            arr_33 [i_0] [i_1] [i_5] [i_0] [9LL] [(_Bool)1] [i_6] = ((/* implicit */signed char) 8062180932957498229LL);
                        }
                        for (short i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                        {
                            arr_36 [i_0] [i_1] [i_5] [i_0] [i_9] = ((/* implicit */unsigned char) ((unsigned long long int) arr_30 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_9] [i_9] [i_6 + 1]));
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 3033523992U);
                            arr_38 [i_0] [i_6 + 1] [i_5] [i_1] [i_0] = ((/* implicit */signed char) arr_13 [i_0] [i_0] [10]);
                            arr_39 [i_1] [i_1] [i_1] [2] [i_6] [i_6 + 2] [i_9] = ((/* implicit */signed char) -8062180932957498230LL);
                            arr_40 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) -1664897963)) >= (-8062180932957498239LL)));
                        }
                        for (short i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
                        {
                            arr_44 [i_0] [i_0] [i_5] [i_6] [i_10] [i_0] = ((/* implicit */short) (-(((((-8062180932957498230LL) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)35))))));
                            arr_45 [i_0] = ((/* implicit */unsigned short) var_2);
                        }
                        arr_46 [i_1] [i_1] = ((/* implicit */short) (-(8062180932957498219LL)));
                        arr_47 [i_0] [i_1] [(unsigned char)7] [i_0] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-36))));
                        arr_48 [i_0] [2] [i_1] [i_1] [i_0] [i_0] = ((_Bool) arr_21 [i_0] [i_0] [i_5] [i_0] [i_1] [i_6 + 2]);
                        arr_49 [i_0] [2ULL] [i_5] [i_5] = ((/* implicit */unsigned char) ((signed char) 8062180932957498229LL));
                    }
                } 
            } 
            arr_50 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-8062180932957498238LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145)))));
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 11; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 1; i_13 < 11; i_13 += 2) /* same iter space */
                        {
                            arr_59 [i_0] [i_1] [i_11] [i_12] [i_12] [i_12] [i_13] = (~(8062180932957498237LL));
                            arr_60 [(unsigned char)10] [i_0] [(short)4] [i_11] [i_0] [(_Bool)1] [i_13] = ((/* implicit */unsigned short) arr_34 [i_11 - 3] [i_11] [i_11]);
                            arr_61 [i_0] [6] [6] [(unsigned short)4] [i_1] [i_13 + 1] = ((/* implicit */long long int) (unsigned char)123);
                            arr_62 [i_13 - 1] [i_0] [6U] [i_0] [6U] = ((/* implicit */unsigned long long int) var_11);
                        }
                        for (unsigned int i_14 = 1; i_14 < 11; i_14 += 2) /* same iter space */
                        {
                            arr_65 [i_0] [i_1] [(_Bool)1] [i_0] [i_14] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-36))))) == ((-(8062180932957498229LL)))));
                            arr_66 [i_1] [i_1] = ((/* implicit */long long int) 7592593083766614823ULL);
                            arr_67 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_20 [i_11 - 2]);
                            arr_68 [i_14] [i_12] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_11] [i_1] [5LL] [(unsigned char)4]))) >= (((((/* implicit */_Bool) var_1)) ? (var_7) : (-8062180932957498230LL)))));
                            arr_69 [i_0] [i_1] [i_11 - 2] [8] [i_0] = ((/* implicit */signed char) -8062180932957498259LL);
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                        {
                            arr_72 [i_1] [10LL] [i_11] [i_11] [i_11] &= ((/* implicit */short) (+(-8062180932957498220LL)));
                            arr_73 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [(signed char)10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)123)) ? (var_15) : (((/* implicit */int) (signed char)35)))) + (-2058536786)));
                            arr_74 [i_0] [6U] [i_12] = ((/* implicit */int) ((long long int) 10766756409298192868ULL));
                            arr_75 [i_0] [i_0] [i_11 - 3] [i_12] [i_0] = ((/* implicit */_Bool) (unsigned short)17184);
                            arr_76 [i_15] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-38))));
                        }
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
                        {
                            arr_79 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) 3937410739158662058ULL));
                            arr_80 [i_0] = ((/* implicit */short) var_7);
                            arr_81 [i_0] [i_1] [11] [i_12] [i_12] = ((/* implicit */int) (~((+(8860578072927842052LL)))));
                            arr_82 [i_11] [i_1] [i_11] = ((/* implicit */unsigned int) ((unsigned long long int) 3879091589U));
                        }
                        arr_83 [(unsigned char)8] [i_12] [i_11 - 3] [i_0] = ((((/* implicit */int) arr_2 [i_12])) + (((/* implicit */int) arr_2 [i_1])));
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_86 [i_0] [i_1] [(unsigned short)8] [(short)7] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_0] [i_0] [7]))));
                            arr_87 [i_0] = ((/* implicit */unsigned short) (unsigned char)8);
                            arr_88 [i_0] [i_0] [i_0] [7ULL] [i_0] [(unsigned short)9] = ((/* implicit */signed char) 4727043330915600088LL);
                        }
                        for (signed char i_18 = 3; i_18 < 11; i_18 += 4) 
                        {
                            arr_92 [i_0] [i_0] [i_11] [i_12] [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8062180932957498230LL)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) arr_13 [i_18 + 1] [i_18] [i_12]))));
                            arr_93 [i_12] [i_1] [i_12] [8U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)5467)) && (((/* implicit */_Bool) 4727043330915600088LL))));
                            arr_94 [i_18 + 1] [(signed char)2] [i_0] [i_0] [(unsigned char)8] [4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                            arr_95 [4LL] [i_1] [i_11] [i_0] [1LL] = ((/* implicit */short) (unsigned char)132);
                        }
                    }
                } 
            } 
        }
        arr_96 [i_0] [i_0] = -8062180932957498230LL;
    }
}
