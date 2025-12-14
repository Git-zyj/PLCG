/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63485
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (short)32470))));
        var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) (short)-607)) ? (0U) : (4294967295U)));
    }
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) min((((unsigned long long int) (-(((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)35175)) < (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_2)))))))));
        var_20 = ((/* implicit */unsigned short) (signed char)13);
        var_21 = ((/* implicit */int) (signed char)13);
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_22 = (-(min((((/* implicit */int) arr_7 [i_1])), (2147483647))));
            /* LoopSeq 2 */
            for (short i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    arr_13 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3822627433667677552ULL))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-1466599492) : (((/* implicit */int) (_Bool)1))));
                        var_24 = ((/* implicit */signed char) ((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    arr_16 [i_1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */unsigned long long int) var_6)) : (var_18)));
                }
                var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? ((+(((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (9223372036854775807LL) : (((/* implicit */long long int) (-2147483647 - 1))))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_1 - 1] [i_3 - 1] [i_3]), (((((/* implicit */_Bool) (unsigned short)30361)) && (((/* implicit */_Bool) (short)12))))))))));
            }
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                var_26 = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_1] [i_1]) << (((arr_10 [i_1 - 1] [i_1]) - (222140994)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_1] [i_1 - 1] [i_6])) >= (((/* implicit */int) (unsigned short)35165)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)13)) >> (((6504145524083745870LL) - (6504145524083745845LL)))))) ? (((/* implicit */unsigned int) (~(-1466599494)))) : (var_6)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_1] [i_1]) << (((((arr_10 [i_1 - 1] [i_1]) - (222140994))) - (790483118)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_1] [i_1 - 1] [i_6])) >= (((/* implicit */int) (unsigned short)35165)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)13)) >> (((6504145524083745870LL) - (6504145524083745845LL)))))) ? (((/* implicit */unsigned int) (~(-1466599494)))) : (var_6))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 23; i_7 += 1) 
                {
                    for (unsigned char i_8 = 3; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_27 |= ((/* implicit */signed char) arr_22 [i_6] [22ULL] [i_6] [i_2] [i_8 + 1]);
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 6712159201116409579LL))));
                        }
                    } 
                } 
                arr_24 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6712159201116409570LL)) ? (((((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1] [(unsigned char)19])))))) ? (min((6712159201116409554LL), (((/* implicit */long long int) var_12)))) : (((((/* implicit */long long int) arr_19 [i_1] [i_1] [i_2] [i_2] [i_1])) - (-6712159201116409554LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) arr_7 [(unsigned char)5]))))) : (((/* implicit */int) ((short) (unsigned short)35170))))))));
            }
            var_29 = ((/* implicit */unsigned short) min((6712159201116409554LL), (((/* implicit */long long int) -173771773))));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 22; i_9 += 1) 
        {
            var_30 = var_1;
            arr_28 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_1] [i_1]))));
        }
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            var_31 = ((/* implicit */unsigned char) min((arr_23 [i_10] [i_10] [(_Bool)1] [i_10] [i_1 + 1] [11U]), (((/* implicit */long long int) min(((unsigned short)46298), (((/* implicit */unsigned short) var_16)))))));
            var_32 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-119))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)137))))) ? (6712159201116409588LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (max((((/* implicit */long long int) (short)32767)), (6712159201116409554LL)))));
        }
        for (short i_11 = 3; i_11 < 21; i_11 += 1) 
        {
            var_33 ^= ((/* implicit */unsigned long long int) min((-6712159201116409564LL), (((/* implicit */long long int) min(((-(var_15))), (arr_20 [i_1] [i_1 + 1] [i_1] [(_Bool)1]))))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_42 [i_1] [i_13] [i_12] [i_12] [i_11 + 3] [i_1] = ((/* implicit */int) var_13);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            arr_46 [i_1] [i_1] [i_11] [(unsigned short)18] [14U] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-14))));
                            var_34 = ((/* implicit */_Bool) (unsigned char)127);
                            arr_47 [i_1] [i_11] [4] [(unsigned short)6] [i_1] = ((/* implicit */signed char) 10578286579448856316ULL);
                        }
                    }
                } 
            } 
        }
    }
    var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)43))));
}
