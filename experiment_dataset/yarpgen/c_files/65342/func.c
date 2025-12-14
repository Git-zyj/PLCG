/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65342
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)48458)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (signed char)-123))))))));
                            arr_11 [9U] [i_2] [i_2] [(unsigned char)7] [3U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [0LL]) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) == (arr_9 [i_0] [(short)0] [i_2] [3U]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [11U] [i_2])))))) : (((((/* implicit */_Bool) 1940486478U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_3 [(_Bool)1])))))));
                            var_19 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_3 + 1]);
                            var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (signed char)122))))), (((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_2] [i_1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))) : (arr_7 [i_3 - 4] [i_1] [i_3 - 4] [(unsigned short)3])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_6] [i_6] [i_4] = (unsigned char)5;
                                arr_23 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_0] [11] [i_0])) ? (1611332157U) : (((/* implicit */unsigned int) 1716222321))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_0 [i_1])))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) : (arr_21 [i_0] [i_1] [i_4] [i_5] [i_6] [i_4]))) : (min((arr_14 [i_4]), (((/* implicit */unsigned long long int) var_16))))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (-2147483647 - 1)))));
                                var_22 = ((/* implicit */_Bool) ((unsigned int) ((arr_2 [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_1] [i_1] [i_1] [(unsigned short)4]) == (((/* implicit */unsigned long long int) var_12)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) arr_18 [i_8] [(short)9] [i_8] [(short)9])) || (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (1716222321))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(unsigned char)3])))))))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (arr_27 [7] [i_1] [i_1] [7]))), (((/* implicit */unsigned long long int) (signed char)-123)))))));
                            arr_31 [i_8] [i_8] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_2 [(unsigned char)9] [i_1])) == (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)26)), ((unsigned short)511)))) ? (arr_14 [i_0]) : (arr_3 [i_1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_9 = 2; i_9 < 8; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 9; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            {
                                var_24 += ((/* implicit */int) arr_18 [i_9 + 1] [i_10] [i_10 - 1] [i_10 - 1]);
                                var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_0] [i_0] [i_0]))))) ? ((~(-7269801694763271074LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_18 [i_11] [i_10] [i_1] [i_0])))))) : (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_10 + 1]))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))) + (arr_33 [i_9] [(unsigned short)11] [i_9])))))) + (min((((arr_1 [i_0]) - (((/* implicit */unsigned long long int) arr_36 [i_0] [i_9] [1LL] [5ULL] [i_0])))), (((/* implicit */unsigned long long int) arr_20 [(short)3] [i_9] [i_10 + 1]))))));
                                arr_39 [i_9] = ((/* implicit */unsigned int) (+(var_6)));
                                var_27 = arr_16 [i_9] [i_9 + 2] [i_10 - 1] [i_10 + 2];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_12 = 1; i_12 < 17; i_12 += 2) 
    {
        for (unsigned short i_13 = 1; i_13 < 17; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 1; i_15 < 16; i_15 += 1) 
                    {
                        for (short i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            {
                                arr_54 [i_13] [i_15 + 2] [8LL] [i_13] [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_13])) ? (arr_51 [(unsigned char)17] [i_15] [i_14]) : (arr_41 [(short)3])))), (arr_44 [i_14 + 1])))) ? ((~(((/* implicit */int) var_16)))) : (((((/* implicit */int) (unsigned short)65526)) * (((((/* implicit */_Bool) -610045270)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)123))))))));
                                arr_55 [i_13] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [10LL] [10LL] [i_14 + 1] [i_14])))))) : (min((((/* implicit */long long int) 292223258)), (arr_51 [i_14] [i_15] [i_16])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 15; i_17 += 2) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_12 + 1] [i_13] [10] [i_14 + 1] [i_17 + 1])) ? (var_0) : (arr_58 [i_12 - 1] [i_13] [i_12] [i_14 + 1] [i_17 + 2]))))));
                                var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_15)))));
                                arr_62 [i_12] [(unsigned char)13] [10LL] [(unsigned char)11] [i_13] = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) var_15)) ? (arr_56 [i_13]) : (((/* implicit */long long int) arr_61 [i_12 + 1] [i_14] [i_17]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 1) 
                    {
                        for (short i_20 = 4; i_20 < 16; i_20 += 3) 
                        {
                            {
                                arr_70 [i_13] [i_13] = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_43 [i_12])), (((((/* implicit */long long int) ((/* implicit */int) arr_69 [i_12 + 1]))) ^ (var_17)))));
                                var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned long long int) var_6)) : (var_11)))) ? (((unsigned long long int) var_10)) : (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) != (((unsigned long long int) var_10))));
                                var_31 = min((((/* implicit */unsigned long long int) var_3)), (134217727ULL));
                                arr_71 [i_14] [i_14] [i_14] [i_14] [i_13] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_67 [i_14] [i_13] [5ULL])) || (((/* implicit */_Bool) (~((+(arr_42 [i_12] [(short)17] [i_12]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
