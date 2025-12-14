/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5967
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
    var_11 ^= ((/* implicit */int) var_4);
    var_12 = min((((var_3) << (((var_3) - (3416723))))), ((-2147483647 - 1)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_13 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_2 [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((max((((/* implicit */unsigned long long int) 2918226485U)), (((unsigned long long int) (unsigned char)188)))), (((/* implicit */unsigned long long int) (((~(arr_9 [i_0] [i_0] [(signed char)1] [i_4]))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188)))))))))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -21567971)) ? (((((((/* implicit */int) var_6)) >> (((((/* implicit */int) (unsigned char)188)) - (168))))) >> ((((~(((/* implicit */int) var_7)))) + (9555))))) : (((/* implicit */int) var_2))));
                                var_16 *= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_5] [7U] [12] [7U])) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 21567961))))) % ((-(((/* implicit */int) var_8)))))) : (((/* implicit */int) ((signed char) 18446744073709551615ULL)))));
                    arr_22 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) arr_21 [(signed char)7] [i_5] [i_5] [i_5])))))))));
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))));
        var_18 += ((/* implicit */short) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) <= (((/* implicit */int) (unsigned char)125))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((arr_1 [i_7]) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_7] [(short)10] [i_7])) && (((/* implicit */_Bool) var_9))))))));
        arr_27 [5ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (arr_1 [i_7])));
    }
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!((_Bool)0)))) - (((/* implicit */int) min((arr_6 [i_8]), (arr_6 [i_8]))))));
        arr_31 [i_8] = ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_11 [i_8] [i_8] [i_8] [(unsigned char)1] [i_8] [i_8])), (((arr_26 [i_8]) * (((/* implicit */unsigned int) arr_30 [i_8])))))) % (((/* implicit */unsigned int) arr_7 [(unsigned char)12] [i_8] [(unsigned char)4] [i_8]))));
        arr_32 [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1870229719U)) || (((/* implicit */_Bool) (short)5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_0)) >> (((/* implicit */int) var_2))))))) : (max(((+(arr_8 [(_Bool)1] [10] [(_Bool)1] [i_8]))), (((/* implicit */long long int) var_3))))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_25 [i_8]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        for (int i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            {
                                arr_43 [i_12] [i_9] [i_9] [i_9] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)126), ((unsigned char)151)))) ? (2147483647) : (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_7)))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) (_Bool)1))))))));
                                var_22 = ((/* implicit */short) (+((-(arr_28 [i_8])))));
                                var_23 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    arr_44 [i_8] [i_8] = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
    }
    for (long long int i_13 = 3; i_13 < 10; i_13 += 3) 
    {
        var_24 = ((/* implicit */int) ((min(((~(1338055675))), (((/* implicit */int) arr_34 [i_13])))) <= ((-((+(((/* implicit */int) (_Bool)1))))))));
        var_25 ^= ((/* implicit */_Bool) 1291059772);
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */int) max(((short)0), (((/* implicit */short) var_0))))) == (((/* implicit */int) (short)32765)))) ? (((/* implicit */int) ((_Bool) 1291059772))) : ((+(((/* implicit */int) (short)0)))))))));
        arr_49 [i_13] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)0)), (((unsigned long long int) 2147483647))));
        arr_50 [i_13] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11)) ? (620891390662891875ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 25)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))))))));
    }
    var_27 = ((/* implicit */short) var_6);
}
