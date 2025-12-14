/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76683
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))) / (((/* implicit */int) var_16))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) var_14)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (((/* implicit */int) var_7))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) arr_3 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) max((var_7), (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) != (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1 - 1] [i_3] = ((/* implicit */long long int) var_13);
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3736382331U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11270)))));
                                arr_17 [(short)16] [i_0] [i_1] [i_2] [i_3] [i_4 - 3] = max((((((/* implicit */int) arr_0 [i_1 + 1])) >> (((((/* implicit */int) arr_11 [i_4 - 3] [i_1 + 1] [i_0])) - (47))))), ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) arr_11 [15LL] [15LL] [15LL])))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 1] [i_2])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2])) : (((/* implicit */int) (unsigned char)255)))));
                }
            } 
        } 
        var_21 -= ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_0]));
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_14 [i_0] [i_5 + 3] [(short)14] [i_7] [i_8] [i_0])));
                            arr_29 [i_6] = ((/* implicit */signed char) ((min((((/* implicit */long long int) (+(arr_21 [(_Bool)1] [i_5] [i_5])))), (max((((/* implicit */long long int) var_16)), (arr_9 [i_0] [i_5] [i_6]))))) != (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned char) var_1);
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        {
                            arr_36 [(unsigned char)12] [i_5] [(unsigned char)12] [i_5] [i_5 + 1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 533632999)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : ((+(((/* implicit */int) arr_10 [12U] [12U] [12U]))))))), (max((((unsigned int) var_15)), (((/* implicit */unsigned int) (short)(-32767 - 1)))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((max((var_14), (((/* implicit */int) (short)32767)))) != (((/* implicit */int) arr_20 [i_11]))))) / (((/* implicit */int) ((unsigned char) var_4)))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_12] [i_0] [i_0] [i_12])) > (var_8)));
            var_26 = ((/* implicit */unsigned short) max((min((((long long int) var_6)), (((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23761))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)91)), (15600125250196657968ULL)))))))));
            arr_41 [i_0] [i_12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (var_0) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_12] [i_0] [(unsigned char)10])) ? (arr_12 [i_12] [i_12] [i_0] [i_0] [i_0] [i_0]) : (var_12)))));
            arr_42 [i_12] [(short)13] = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned int) arr_37 [(unsigned short)4] [i_12])), (var_15))));
            var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((8342311571636091212ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))));
        }
        for (int i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            var_28 *= ((/* implicit */unsigned long long int) 1140662378U);
            arr_45 [i_13] [i_13] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [(unsigned short)8] [i_0] [i_0]))) : (arr_39 [i_13])))))))));
        }
        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            arr_49 [i_0] [(unsigned char)8] [i_14] = ((((int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)95))) / ((-9223372036854775807LL - 1LL))))) << (((((unsigned long long int) arr_15 [i_0] [4] [i_0] [i_0] [i_14] [i_0] [i_0])) - (1040314486ULL))));
            var_29 = ((/* implicit */signed char) var_1);
            arr_50 [i_14] = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) % (((/* implicit */long long int) (-(((/* implicit */int) (short)32767)))))));
        }
    }
}
