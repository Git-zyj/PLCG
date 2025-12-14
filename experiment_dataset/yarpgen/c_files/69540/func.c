/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69540
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
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_18)), (((((/* implicit */int) ((((/* implicit */long long int) -2147483642)) == (var_0)))) * (((((/* implicit */_Bool) (unsigned short)65533)) ? (2147483642) : (((/* implicit */int) var_17))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_20 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))), (((((_Bool) arr_1 [i_0 + 1] [0ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [18U]), (arr_1 [2] [(unsigned char)4]))))) : (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [18LL])))))))));
        /* LoopSeq 2 */
        for (short i_1 = 4; i_1 < 24; i_1 += 4) 
        {
            var_21 *= ((/* implicit */_Bool) ((unsigned long long int) ((var_11) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_18))))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1799)) && (((/* implicit */_Bool) var_16)))))));
            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-8)) & (var_16)))) ? ((-(18446744073709551596ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))) ? (((((unsigned long long int) var_9)) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))))) : (((unsigned long long int) arr_1 [i_1] [i_1]))));
            var_24 = ((/* implicit */short) max((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_5))) << ((((~(((/* implicit */int) var_1)))) + (244))))))));
            var_25 = ((/* implicit */unsigned char) arr_0 [i_0]);
        }
        for (int i_2 = 1; i_2 < 23; i_2 += 2) 
        {
            var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1012597535)), (9ULL)));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_27 *= ((signed char) var_11);
                            arr_15 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)1799)) >> (((((/* implicit */int) var_9)) - (38587)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (signed char i_8 = 2; i_8 < 22; i_8 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) 2147483622)))));
                            var_29 *= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_2 + 2] [i_8 + 2] [i_8] [i_8] [i_8 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [i_8 + 3] [i_8] [i_8] [i_8]))) : (16ULL))));
                            var_30 = ((/* implicit */unsigned short) min((((/* implicit */int) var_10)), (((((/* implicit */int) var_10)) - (((/* implicit */int) arr_8 [i_2 + 2]))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_10 = 2; i_10 < 22; i_10 += 2) 
                {
                    var_31 = ((/* implicit */_Bool) max((var_31), (var_17)));
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (signed char)29))));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)14587)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)15))));
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((long long int) arr_28 [i_0] [i_11] [i_11])))));
                    var_35 *= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 + 1])) << (((/* implicit */int) arr_2 [i_0 + 1]))));
                }
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
                {
                    arr_37 [i_0] [i_2] [i_0] [i_9] [i_12] = ((unsigned long long int) (!(((/* implicit */_Bool) 9ULL))));
                    var_36 = (+(20ULL));
                }
                var_37 = ((/* implicit */unsigned char) var_17);
            }
            /* vectorizable */
            for (unsigned int i_13 = 2; i_13 < 24; i_13 += 3) 
            {
                var_38 = ((/* implicit */unsigned short) ((long long int) ((2122162507607721774ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                var_39 *= var_18;
                /* LoopSeq 1 */
                for (unsigned int i_14 = 1; i_14 < 23; i_14 += 3) 
                {
                    var_40 *= ((/* implicit */unsigned long long int) (unsigned char)139);
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((arr_29 [i_0 - 1] [(short)0] [6U]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_29 [i_0 - 1] [22] [i_2])))))));
                    arr_42 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((2147483642) - (2147483616)))))) ? (arr_6 [i_0] [i_13 - 1]) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0]))));
                    var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) arr_27 [i_14 + 2] [i_0 + 1] [i_0 - 1]))));
                }
                var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) (-(arr_10 [i_0 + 1] [i_13 - 1]))))));
            }
            for (unsigned char i_15 = 3; i_15 < 22; i_15 += 1) 
            {
                var_44 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((26ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43275))))))) > (((unsigned long long int) 4212916946U)))))) != (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)1799))))) ? (arr_27 [i_15 - 3] [i_2 + 2] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12)))))));
                var_45 = ((/* implicit */unsigned long long int) var_4);
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned int i_17 = 1; i_17 < 22; i_17 += 2) 
                    {
                        {
                            var_46 *= ((/* implicit */int) arr_11 [i_0 - 1] [i_15 + 1] [(_Bool)1] [i_15] [i_15 + 1]);
                            var_47 = ((/* implicit */unsigned short) ((2872727927U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 4) 
            {
                var_48 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) var_4))))));
                var_49 *= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 3279449208680506013LL))))), (((int) (short)32767))));
                var_50 *= ((/* implicit */long long int) min((((((/* implicit */int) (signed char)33)) + (((/* implicit */int) arr_31 [i_18] [i_18] [i_18] [i_2 + 1])))), (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned short)0))))));
                var_51 *= arr_0 [i_18];
            }
            arr_53 [i_0] [i_2] = ((/* implicit */_Bool) ((((unsigned int) 4294967294U)) + (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6))))));
        }
        var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) arr_17 [i_0] [i_0] [i_0 + 1] [i_0]))));
        arr_54 [i_0] = (-(((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (arr_41 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0]))))));
        var_53 = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)78)) >> (((((/* implicit */int) (short)-26498)) + (26512))))) / (((/* implicit */int) ((0LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139)))))))) + (((/* implicit */int) (signed char)33))));
    }
}
