/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92921
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((max((min((((/* implicit */long long int) 2093333177U)), (-6839581787082282338LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2287552963U)) ? (1616548239U) : (1811089518U)))))), (((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned long long int) var_2)), (var_13))))))))));
                var_19 = ((/* implicit */signed char) arr_0 [(unsigned short)13]);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 4; i_2 < 15; i_2 += 3) /* same iter space */
    {
        var_20 -= var_2;
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        arr_18 [i_2 - 2] [i_4] = ((unsigned short) var_1);
                        var_21 = ((/* implicit */signed char) var_4);
                    }
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)79)))))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2 - 1] [i_2])) ? (((arr_21 [i_2] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (2287552963U)))));
                    }
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3])) ? ((+(((/* implicit */int) arr_24 [i_2] [i_2] [(unsigned short)7] [(unsigned short)13])))) : (((/* implicit */int) arr_14 [i_2 - 4] [i_2 - 4] [2LL] [i_2 - 4]))));
                        var_25 -= ((/* implicit */unsigned int) 6839581787082282337LL);
                        arr_25 [i_2] [i_3] [i_4] [i_7] = ((/* implicit */short) ((unsigned long long int) (signed char)-93));
                        var_26 = ((/* implicit */_Bool) 2287552963U);
                        var_27 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) == (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-96))))));
                    }
                    arr_26 [i_2] [(unsigned short)0] [i_4] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_2 - 1] [i_2] [i_2 - 3] [i_2] [i_2 + 2] [i_2 - 1]))));
                    arr_27 [i_2 + 1] [i_2 + 1] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)43294))))) ? (((/* implicit */int) (unsigned short)43297)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_3])) && (((/* implicit */_Bool) var_12)))))));
                    arr_28 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (short)15466)) ? (((/* implicit */long long int) -2147483626)) : (-6839581787082282342LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-52)) + (87)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 3] [i_2 - 3]))));
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        {
                            arr_42 [i_2] [i_2] [i_2] [(short)5] [11U] [i_11] = ((/* implicit */short) (-(var_13)));
                            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) arr_32 [i_2] [i_2 - 1] [i_2 + 2]))));
                            arr_43 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 - 1]))) : (arr_23 [i_11] [i_8] [i_2 - 2] [i_2 + 1])));
                        }
                    } 
                } 
            } 
            arr_44 [i_8] = ((/* implicit */unsigned short) var_6);
        }
    }
    /* vectorizable */
    for (long long int i_12 = 4; i_12 < 15; i_12 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 1; i_13 < 16; i_13 += 2) 
        {
            for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                {
                    arr_54 [i_12] [i_12] [(unsigned short)9] = ((/* implicit */signed char) arr_11 [i_12 + 1]);
                    arr_55 [(signed char)7] [i_13] [(signed char)7] = ((((((/* implicit */_Bool) 140737488355327LL)) || (((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_12] [i_13] [i_14]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))));
                    var_30 |= ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_12 + 1] [i_13] [i_13 - 1] [i_13]))));
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_47 [i_12 + 1]))));
        var_32 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_12] [i_12] [i_12 - 4] [i_12]))));
        arr_56 [i_12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_12 - 1])) ? (((/* implicit */int) arr_31 [i_12 + 1])) : (((/* implicit */int) var_16))));
    }
    /* LoopNest 2 */
    for (unsigned char i_15 = 0; i_15 < 25; i_15 += 2) 
    {
        for (signed char i_16 = 0; i_16 < 25; i_16 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    arr_66 [i_15] [i_16] [i_17] = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_10))))));
                    var_33 *= ((/* implicit */short) (+((+(((/* implicit */int) var_0))))));
                    arr_67 [i_16] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_15])) ? (var_3) : (((/* implicit */int) var_1))))) && ((!(((/* implicit */_Bool) (unsigned short)65513)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_17]))))) : (((/* implicit */int) max((arr_63 [i_15]), (arr_58 [i_17]))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    for (short i_19 = 0; i_19 < 25; i_19 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) (+(2007414330U)));
                            arr_76 [i_16] [i_15] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)15469)) | (((/* implicit */int) arr_68 [i_15] [i_16] [i_18])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_68 [i_15] [i_15] [i_19])) || (((/* implicit */_Bool) arr_68 [(unsigned short)23] [i_15] [i_15])))))));
                            var_35 = ((/* implicit */unsigned int) var_8);
                            var_36 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((short) arr_60 [i_15] [i_16]))) : (((/* implicit */int) var_10))))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) (unsigned short)6337))))) ? (((/* implicit */int) (signed char)26)) : (-2147483626)))) ? (((/* implicit */int) max((arr_63 [i_16]), (arr_63 [i_15])))) : (((((/* implicit */int) arr_68 [i_15] [i_15] [i_15])) + (((/* implicit */int) var_9)))))))));
            }
        } 
    } 
}
