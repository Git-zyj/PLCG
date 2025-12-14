/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79309
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_9 [(unsigned short)10] [i_1] [i_2] [i_2 - 1])), (arr_8 [i_3 + 1] [i_1] [i_2 + 2] [i_2 - 1]))))));
                                arr_14 [i_0] [0LL] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (short i_6 = 3; i_6 < 15; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned short) (~(((var_14) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_11 [(unsigned char)3] [i_5] [(short)14])), (arr_10 [(_Bool)1]))))))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)80)), (((arr_4 [i_5] [i_7 - 1]) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_7)), (var_10))), (((/* implicit */unsigned long long int) ((unsigned char) var_10)))))))))));
                                arr_25 [i_0] [i_0] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */short) min((arr_16 [i_0] [i_0] [14LL] [i_6]), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_7] [i_6 - 2] [i_0])) || (((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_5] [i_6] [i_7] [i_7]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 1; i_8 < 14; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        {
                            arr_32 [i_8] [i_1] [i_8 - 1] [i_9] [i_9] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_22 [i_9] [i_8] [i_8 - 1] [i_8] [i_1] [i_0] [i_0])) + (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0])) >= (((/* implicit */int) arr_5 [3U] [i_0]))))))) <= (((/* implicit */int) (unsigned char)241))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_12 [i_9] [i_9]))));
                            arr_33 [i_9] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_15 [i_0] [i_8] [i_8] [i_8 + 2]);
                            arr_34 [i_0] [(unsigned short)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_8 + 1]))))), (((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_24 [i_9] [i_0] [i_1] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)241), (((/* implicit */unsigned char) arr_28 [i_0] [i_1] [i_8] [i_0] [i_9])))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_9] [i_9] [(unsigned char)5] [i_1] [(unsigned char)9]))) | (arr_4 [i_8] [(unsigned short)8])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        {
                            var_20 *= ((unsigned int) max((var_0), (((/* implicit */long long int) arr_5 [i_10] [i_10]))));
                            arr_45 [i_12] [i_13] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_10] [i_10] [i_10] [i_10] [i_10]))));
                            var_21 = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) max((var_8), (var_7)))), (((((/* implicit */_Bool) arr_17 [i_10] [i_11] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10] [i_11]))) : (arr_1 [i_12]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_10] [i_11] [i_12] [i_11] [i_11] [i_12])) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_12] [i_12])) || (((/* implicit */_Bool) arr_7 [i_10]))))))))));
                            var_22 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [(unsigned short)15] [i_10] [i_10] [i_12] [i_13])) ^ (((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [(unsigned char)13] [i_12] [i_10] [i_10])) ^ (((/* implicit */int) arr_7 [8ULL]))))) : (var_11))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        for (long long int i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            {
                                arr_54 [i_10] [i_11] [(unsigned char)4] [i_15] [i_10] = arr_50 [i_10] [i_11] [(unsigned char)1] [i_16];
                                var_23 = (!(((/* implicit */_Bool) max((1742940506492015328ULL), (((/* implicit */unsigned long long int) (short)-23787))))));
                                var_24 = ((((/* implicit */_Bool) 0ULL)) ? (arr_42 [i_10] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) ((short) min((arr_19 [14LL] [(short)8] [i_11] [i_14] [(short)13] [i_16]), (arr_36 [i_15])))))));
                                arr_55 [i_10] [i_11] [i_14] [i_15] [i_16] = ((/* implicit */long long int) var_11);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
