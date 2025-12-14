/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81646
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) (unsigned short)33236)))));
                                var_19 = ((/* implicit */int) min(((!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))) == (arr_7 [i_0] [i_2] [i_2 + 1] [(unsigned short)7] [i_4] [i_2]))))), (((_Bool) var_13))));
                                var_20 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 3] [i_1 - 3] [i_2 - 1])) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) var_15))))), (((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)(-127 - 1)))))))));
                                var_21 = ((/* implicit */signed char) arr_1 [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) (+(((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U)))));
        var_23 -= ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (188256999967395970ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33236))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((arr_11 [i_5] [i_5]), (arr_11 [i_5] [3LL]))), (((/* implicit */unsigned int) ((unsigned short) arr_12 [i_5])))))) ? (((/* implicit */unsigned long long int) min((arr_12 [i_5]), (arr_11 [i_5] [16LL])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_14)) : (18446744073709551615ULL)))) ? (min((var_0), (var_16))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5])) ? (arr_12 [i_5]) : (var_13))))))));
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 19; i_6 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)171))));
        /* LoopSeq 1 */
        for (int i_7 = 3; i_7 < 18; i_7 += 2) 
        {
            var_26 = ((/* implicit */_Bool) arr_16 [i_6 - 2] [i_6 - 2]);
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((arr_11 [i_6 - 1] [i_7 - 1]) + (((unsigned int) var_12)))))));
        }
        var_28 &= ((/* implicit */unsigned int) ((unsigned short) (unsigned char)171));
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_14 [i_6 - 2])))))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_6 + 1] [i_6 + 1])) ? (((((/* implicit */_Bool) 6563348542433358249ULL)) ? (7972703034421358719ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)84)))))));
                    var_31 = ((/* implicit */long long int) ((arr_19 [1U] [i_6 + 1] [i_9]) ^ (arr_19 [i_6] [i_6 + 1] [i_9])));
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (18446744073709551615ULL))) ? (((((/* implicit */_Bool) 14521888719107556817ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_19 [i_6 - 2] [i_8] [i_9])))))))));
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (14845109780499936160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6 + 1] [i_6 + 1])))));
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_25 [i_11]))));
            var_35 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (short)7255)))));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_29 [16ULL] [i_11]) / (((/* implicit */int) (unsigned char)142))))) ? (14521888719107556817ULL) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                var_37 = ((/* implicit */unsigned short) (+(var_14)));
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */unsigned int) 1756420089)) : (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2)))))));
            }
            /* LoopNest 3 */
            for (unsigned char i_13 = 3; i_13 < 23; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    for (short i_15 = 2; i_15 < 23; i_15 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)12605)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32305)))));
                            var_40 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_36 [i_10] [i_11] [i_13] [i_14] [i_10])) ? (((/* implicit */int) arr_31 [i_11])) : (var_3))));
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_31 [i_15 + 2]))));
                            var_42 = ((/* implicit */long long int) arr_35 [i_13 - 2] [i_15] [i_13 - 2] [i_15 - 1]);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_16 = 2; i_16 < 24; i_16 += 2) /* same iter space */
        {
            var_43 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-7245)) ? (2860523721430388619LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)3953)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_37 [i_10] [i_10] [i_16] [i_16]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_16 - 1] [i_16 + 1] [i_16 - 1]))))))));
        }
        for (unsigned char i_17 = 2; i_17 < 24; i_17 += 2) /* same iter space */
        {
            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) 126976U))));
            var_46 = ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned short)36907)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
            var_47 = 9348099429264838900ULL;
        }
        var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 9098644644444712746ULL))) ? (((/* implicit */int) arr_26 [i_10] [i_10] [i_10])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_38 [i_10]))))))) ? (((((/* implicit */_Bool) arr_40 [i_10])) ? (var_0) : (((/* implicit */unsigned long long int) -1972772684)))) : (((/* implicit */unsigned long long int) var_13))));
    }
}
