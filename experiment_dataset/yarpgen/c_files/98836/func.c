/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98836
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (((((/* implicit */_Bool) 3417542735U)) ? (3417542735U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_20 ^= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_1 [i_0] [i_1 + 1]))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 877424558U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) : (877424560U)))) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_0 - 1]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1 + 1] [i_2] [i_4 + 1])) ? (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_4 + 1])) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) (unsigned char)61)))) : (((/* implicit */int) (unsigned char)56))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4 + 2] [i_0 + 1]))) > (9LL)));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (arr_2 [i_4 - 1] [i_1 - 1])));
                        var_25 = ((/* implicit */unsigned char) ((signed char) ((unsigned char) var_6)));
                    }
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_26 = arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1];
                        var_27 ^= ((/* implicit */unsigned char) arr_14 [i_0] [i_3]);
                        var_28 = ((((/* implicit */int) (unsigned char)227)) > (((/* implicit */int) (unsigned char)46)));
                        var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
                    }
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)144))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_0 - 1] [i_1 - 1]))) : (2552572571U)));
                }
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (31LL))))));
                var_32 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_12 [12U] [(unsigned char)8] [12U])) <= (((/* implicit */int) var_10))))));
            }
            var_33 = ((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0 + 1] [i_0]));
            var_34 = ((/* implicit */long long int) ((unsigned char) (unsigned char)20));
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 2])) + ((~(((/* implicit */int) arr_6 [(short)19]))))));
        }
        for (signed char i_6 = 1; i_6 < 19; i_6 += 2) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [3LL] [i_0] [i_0 + 1] [(signed char)7] [i_6] [i_6]))));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                for (unsigned short i_8 = 3; i_8 < 19; i_8 += 3) 
                {
                    {
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_6 - 1] [i_0])) ? (((/* implicit */int) arr_7 [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_6 - 1] [(unsigned char)8] [i_8 - 2]))));
                        var_38 = arr_10 [i_0 - 1] [10LL];
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_39 = ((/* implicit */unsigned int) var_15);
                            var_40 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_1 [(short)10] [i_8 - 2])))) != (((/* implicit */int) var_16))));
                            var_41 |= ((/* implicit */unsigned char) (+((-(((/* implicit */int) (signed char)-74))))));
                        }
                    }
                } 
            } 
            var_42 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)0))))));
            /* LoopSeq 4 */
            for (long long int i_10 = 2; i_10 < 17; i_10 += 4) 
            {
                var_43 = ((/* implicit */signed char) arr_7 [i_0 - 2] [i_6] [i_6 + 1] [i_10 - 1]);
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */long long int) ((unsigned char) arr_22 [i_0 + 1]));
                            var_45 = ((/* implicit */unsigned char) arr_29 [i_10 + 1] [i_6 + 1] [i_6 - 1] [i_0 + 1] [i_0]);
                        }
                    } 
                } 
            }
            for (unsigned char i_13 = 1; i_13 < 19; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    for (unsigned char i_15 = 1; i_15 < 17; i_15 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)117)) ? (((((/* implicit */_Bool) (short)31999)) ? (((/* implicit */int) arr_18 [i_0] [i_6 + 1] [(signed char)10])) : (((/* implicit */int) (short)-32763)))) : (((/* implicit */int) (short)-32740)))))));
                            var_47 &= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)112))));
                            var_48 -= ((/* implicit */long long int) ((unsigned char) arr_39 [i_15] [i_15 + 1] [i_13 - 1] [i_6 - 1] [i_0 - 2]));
                        }
                    } 
                } 
                var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) arr_1 [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) (unsigned char)199)))))));
            }
            for (unsigned char i_16 = 1; i_16 < 17; i_16 += 3) 
            {
                var_50 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (31LL)))));
                /* LoopNest 2 */
                for (unsigned char i_17 = 2; i_17 < 17; i_17 += 2) 
                {
                    for (signed char i_18 = 3; i_18 < 18; i_18 += 3) 
                    {
                        {
                            var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7177874345836952028LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_16 [i_16 + 1] [i_6])));
                            var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) ((unsigned char) arr_40 [i_17] [i_0] [i_6] [i_6] [i_16 + 1] [(unsigned char)18] [(unsigned char)2])))));
                            var_53 = ((/* implicit */long long int) var_1);
                            var_54 = ((/* implicit */signed char) (unsigned char)192);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    for (unsigned short i_20 = 2; i_20 < 17; i_20 += 2) 
                    {
                        {
                            var_55 = ((/* implicit */unsigned char) arr_26 [i_6] [(unsigned char)11] [i_6]);
                            var_56 ^= ((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_4)))));
                            var_57 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_10 [i_20] [i_0 - 1])) ? (4967643844166456496LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_20] [(short)0] [i_20])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_21 = 0; i_21 < 20; i_21 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_22 = 3; i_22 < 19; i_22 += 2) 
                    {
                        var_58 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)101))))) != (((/* implicit */int) ((unsigned short) arr_18 [i_6] [i_16] [i_16])))));
                        var_59 = ((/* implicit */long long int) ((var_3) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)101)) + (((/* implicit */int) (unsigned char)131)))))));
                        var_60 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)195))));
                    }
                    var_61 = ((/* implicit */short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32742))) : (4967643844166456496LL)));
                }
                for (unsigned char i_23 = 0; i_23 < 20; i_23 += 3) 
                {
                    var_62 = ((/* implicit */short) max((var_62), (((/* implicit */short) (unsigned char)154))));
                    var_63 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [i_0] [i_6 + 1] [i_0]))));
                }
            }
            for (long long int i_24 = 2; i_24 < 18; i_24 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_25 = 0; i_25 < 20; i_25 += 1) 
                {
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_64 = (unsigned char)192;
                            var_65 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130))) : (((((/* implicit */_Bool) var_5)) ? (778692307878844454LL) : (arr_45 [i_6]))));
                            var_66 += ((unsigned char) arr_28 [i_0 - 1] [i_6 - 1] [i_6 - 1]);
                        }
                    } 
                } 
                var_67 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_6])) ? (arr_16 [i_0] [i_6]) : (arr_16 [12U] [i_6])));
                var_68 = ((/* implicit */signed char) arr_20 [i_0 - 2] [(_Bool)1] [i_24] [i_24 - 2] [(unsigned char)12] [i_24]);
            }
        }
        var_69 = ((/* implicit */long long int) ((unsigned char) (unsigned char)192));
    }
    var_70 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)157))));
}
