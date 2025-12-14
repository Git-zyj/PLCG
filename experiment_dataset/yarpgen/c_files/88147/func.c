/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88147
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_11 += ((/* implicit */unsigned short) (+(((arr_13 [i_4] [i_4 + 3] [i_3] [i_3] [i_4 - 1] [i_3]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [16U] [i_4])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0])))))))));
                                var_12 = ((/* implicit */signed char) arr_10 [i_2] [i_2 - 1] [i_2 + 1] [i_4 + 2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 16; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_2 + 1] [i_5 - 1] [i_5] [i_5] [i_5 + 2]))) != (arr_7 [i_1] [i_1] [i_2 + 1] [i_5 - 1]))) ? (((/* implicit */int) ((signed char) 175024204U))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)7474)))))));
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_5 - 2] [i_5 + 2] [i_5] [i_5 + 1]) / (arr_7 [i_5 + 2] [i_5 - 2] [i_5] [i_5 - 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9030144940793177755LL)) ? (((/* implicit */int) (short)29445)) : (((/* implicit */int) (signed char)-70))))) ? (((/* implicit */int) arr_4 [i_5 - 2] [i_5 - 1])) : (((/* implicit */int) arr_9 [i_5] [i_5 + 2] [i_5] [i_5 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1] [i_2] [i_5 - 1])) || (((/* implicit */_Bool) ((unsigned char) arr_18 [i_0] [i_5] [i_2] [i_0] [i_6] [i_2] [i_2]))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_16 [i_1] [i_2 + 1] [i_2 + 1] [i_1] [i_2]) ? (((/* implicit */int) ((signed char) (signed char)92))) : (((/* implicit */int) arr_16 [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2]))))) ? (((((/* implicit */_Bool) arr_10 [i_2] [(_Bool)1] [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_0] [i_2] [9LL])) : (((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_0])))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_17 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0] [i_2] [i_2 + 1]))))));
                }
                arr_19 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)29445))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_1] [i_1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_12 [i_1] [13ULL] [i_1] [i_0] [i_0] [i_0])) ? ((+(arr_0 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0])))))));
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? ((-(arr_0 [i_0] [i_1]))) : ((+(arr_0 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            {
                var_16 = ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (unsigned short)65535)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_9 = 1; i_9 < 17; i_9 += 1) /* same iter space */
                {
                    arr_30 [i_7] = ((/* implicit */unsigned char) arr_10 [i_7] [i_8] [i_7 - 1] [i_7]);
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        for (short i_11 = 3; i_11 < 16; i_11 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) (~(((/* implicit */int) (signed char)69))));
                                arr_36 [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_11 - 1] [i_10] [i_7] [i_7] [i_10] [i_9]))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned int) ((unsigned char) arr_6 [i_7 - 1]));
                }
                for (unsigned char i_12 = 1; i_12 < 17; i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                        {
                            {
                                arr_47 [i_7] [i_8] [i_13] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_26 [i_8] [i_12 + 1] [i_7])))));
                                var_19 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_44 [i_12 - 1] [i_12] [i_12 + 1] [i_12 + 1])))) - (((/* implicit */int) ((_Bool) arr_44 [1ULL] [i_12 + 1] [i_12 - 1] [i_12])))));
                                arr_48 [i_7] [i_14] [i_7] [11] [7LL] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((arr_14 [i_7] [i_12] [i_14]) - (arr_29 [i_7])))) ? (((unsigned long long int) arr_3 [(unsigned char)3])) : (((/* implicit */unsigned long long int) arr_39 [i_12 - 1] [i_12 - 1] [i_13] [i_13])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_7 - 1])))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)81)) | (((/* implicit */int) (unsigned short)21358)))))));
                }
            }
        } 
    } 
    var_22 = var_8;
    var_23 &= ((/* implicit */unsigned char) ((int) ((_Bool) var_10)));
    var_24 = ((/* implicit */_Bool) var_9);
}
