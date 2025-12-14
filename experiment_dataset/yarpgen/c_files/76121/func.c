/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76121
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_13)), (max((min((((/* implicit */unsigned long long int) arr_0 [i_0] [(unsigned char)4])), (var_12))), (((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)0)))))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) arr_0 [i_1] [i_0]))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                arr_9 [i_1] |= ((/* implicit */unsigned char) max((((max((var_0), (((/* implicit */unsigned long long int) var_6)))) << (((max((arr_8 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_7 [9LL] [(unsigned char)0] [i_2] [(unsigned char)0])))) - (2059873915846750165ULL))))), (max((arr_8 [i_0] [(_Bool)1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                /* LoopNest 2 */
                for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) arr_14 [(unsigned char)16] [1LL] [12U] [i_4] [i_4] [i_0] [i_3]);
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)53091)));
                        }
                    } 
                } 
            }
            for (unsigned short i_5 = 2; i_5 < 15; i_5 += 1) 
            {
                arr_21 [i_0] = ((/* implicit */long long int) min((max((min((var_9), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) arr_4 [i_5 + 2] [i_1])))), (((/* implicit */unsigned long long int) (+(arr_12 [i_0]))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((arr_14 [i_5] [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5 + 1]), (arr_14 [i_5] [i_5 - 2] [7LL] [i_5 + 2] [4] [i_5] [i_5 - 2]))))) / (((8094496581235354221LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53114)))))));
                arr_22 [i_5] [i_0] [i_0] = min((((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5 + 2] [i_5 + 2]))))), (((/* implicit */unsigned long long int) max((arr_5 [i_5 - 1] [i_5]), (((/* implicit */unsigned char) arr_10 [i_0] [i_5 - 2] [i_5 - 1]))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            var_17 = ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7])))))) == (arr_11 [i_0] [i_1] [i_5 + 2] [i_5 - 2]))) ? (((((/* implicit */_Bool) (+(var_14)))) ? (max((var_10), (((/* implicit */unsigned long long int) arr_7 [i_7] [i_6] [i_5] [i_0])))) : (max((var_0), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) max((1197877333), (((/* implicit */int) (unsigned char)50))))));
                            arr_28 [i_7] [i_5] [i_7] [i_7] [(short)16] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12445)) * (((/* implicit */int) (short)-10089))))) * (max((4424921674554883748ULL), (((/* implicit */unsigned long long int) (unsigned short)53114))))))));
                        }
                    } 
                } 
            }
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(957878360)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1]))) : (((var_7) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_4 [i_0] [i_0]))))))))));
        }
        for (unsigned short i_8 = 1; i_8 < 16; i_8 += 1) 
        {
            arr_31 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_15 [i_0] [i_8 + 1]))))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (var_1) : (((/* implicit */long long int) arr_2 [i_8])))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_8 - 1])))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_8 - 1] [(short)2])) ? (arr_8 [i_8 + 1] [i_8]) : (var_10)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_4 [i_8 - 1] [i_8])))))))));
            /* LoopNest 3 */
            for (unsigned char i_9 = 2; i_9 < 16; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        {
                            arr_38 [i_9] [i_8] [i_8] &= ((/* implicit */unsigned char) ((unsigned int) var_14));
                            arr_39 [i_8] [(short)5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) ((var_12) != (((/* implicit */unsigned long long int) var_8))))), (arr_1 [i_8 + 1] [(unsigned char)6]))))));
                            arr_40 [i_8] [11ULL] [(unsigned char)0] [(unsigned short)1] [i_11] = ((/* implicit */long long int) max((max((arr_33 [2LL] [i_8 + 1] [i_9 - 2] [(unsigned char)0]), (arr_33 [i_0] [i_8 + 1] [i_9 - 1] [i_8 + 1]))), (((/* implicit */unsigned int) arr_37 [16LL]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    for (short i_15 = 2; i_15 < 16; i_15 += 4) 
                    {
                        {
                            arr_51 [i_12] = ((/* implicit */long long int) ((((_Bool) ((arr_10 [i_12] [i_13] [i_15]) ? (var_0) : (((/* implicit */unsigned long long int) arr_35 [i_15] [i_0]))))) || ((!(((/* implicit */_Bool) arr_24 [i_15 - 2]))))));
                            arr_52 [i_0] [i_0] [i_12] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_46 [i_12])) && (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) arr_25 [i_15 - 2] [i_15 + 1] [i_15 - 2] [i_15 - 2] [i_15 + 1] [i_15]))))) != ((+(((/* implicit */int) arr_48 [i_12] [i_12] [i_13] [i_13] [i_15 + 1]))))));
                            arr_53 [i_0] [i_0] [i_12] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)12445)))), ((+(var_8)))));
                            var_20 = (-(((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_11))))) ? ((-(((/* implicit */int) var_6)))) : ((+(((/* implicit */int) arr_30 [i_12] [i_14] [i_14])))))));
                        }
                    } 
                } 
            } 
            arr_54 [i_12] [i_12] = ((/* implicit */unsigned char) ((((arr_18 [i_12] [i_12]) < (arr_18 [i_0] [i_0]))) ? (((/* implicit */unsigned int) min((arr_18 [i_12] [i_0]), (arr_18 [i_0] [i_0])))) : (((unsigned int) (-9223372036854775807LL - 1LL)))));
            arr_55 [i_12] [i_12] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_24 [i_12])) * (((/* implicit */int) arr_24 [i_12]))))));
            var_21 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (unsigned short)12445)), (33554428U)))));
            var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((arr_43 [i_0] [i_0] [(unsigned short)6]), (arr_50 [i_0] [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) arr_35 [i_0] [i_0])), ((~(17ULL)))))));
        }
        for (unsigned char i_16 = 0; i_16 < 17; i_16 += 1) 
        {
            arr_58 [i_16] [9ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_32 [i_0] [i_0] [i_0] [i_16]), (arr_32 [i_16] [i_0] [i_16] [i_0])))) >= (((/* implicit */int) ((short) arr_10 [i_0] [i_16] [i_16])))));
            arr_59 [2ULL] [i_16] [i_16] = ((/* implicit */short) ((unsigned char) max((arr_12 [i_16]), (arr_12 [i_0]))));
            var_23 += ((/* implicit */unsigned char) min((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_12 [i_16]), (((/* implicit */int) arr_4 [i_16] [i_16]))))) ? ((-(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
            var_24 = ((/* implicit */unsigned long long int) max((((int) arr_41 [i_16] [i_0] [i_0])), (((/* implicit */int) var_11))));
        }
    }
    var_25 = ((/* implicit */unsigned short) min((var_0), (((/* implicit */unsigned long long int) var_8))));
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_14)))) * (var_0)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
    var_27 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (((unsigned long long int) var_8)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_14)), (var_1))))))) ? (max((((/* implicit */unsigned long long int) (-(var_3)))), (max((((/* implicit */unsigned long long int) -8257284760257041380LL)), (0ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_14)))))))))));
}
