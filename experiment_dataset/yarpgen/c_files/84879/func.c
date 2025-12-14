/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84879
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_12 ^= ((/* implicit */int) arr_8 [i_0] [i_3] [i_2 + 2] [i_2 - 2] [(unsigned short)14]);
                                arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(min((arr_1 [i_0]), (((/* implicit */long long int) arr_3 [i_0] [i_0]))))));
                                var_13 -= ((/* implicit */short) min((arr_1 [i_3]), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [(unsigned short)6] [i_0]))));
                                var_14 = ((/* implicit */long long int) arr_2 [i_0]);
                                arr_12 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) var_4);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (int i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        {
                            arr_19 [i_1] = max(((-(((/* implicit */int) arr_3 [i_6 + 2] [i_6 + 1])))), (((/* implicit */int) arr_3 [i_6 + 2] [i_6 + 2])));
                            arr_20 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) var_0);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_30 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_8])), ((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_7] [i_8] [i_9]))))));
                                var_16 += ((/* implicit */int) min((((/* implicit */signed char) min((arr_24 [i_0] [i_0] [i_7] [i_7] [18LL] [i_9]), (arr_24 [i_0] [i_1] [i_8] [i_8] [i_9] [i_9])))), (arr_5 [i_0] [i_8] [i_7] [i_8])));
                                var_17 = ((/* implicit */short) arr_16 [i_1] [i_1]);
                                var_18 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0] [i_1] [i_7] [i_8] [i_1]))))) ? ((+(((/* implicit */int) arr_14 [i_7] [i_1] [i_1])))) : (((/* implicit */int) var_11)));
                                arr_31 [i_8] [i_8] [i_7] [12LL] [i_7] &= var_5;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
    {
        for (signed char i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            {
                arr_38 [i_10] &= (!(((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_18 [i_10] [i_10] [i_10] [i_11])))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        {
                            arr_43 [i_10] [i_10] [(signed char)14] &= ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_13] [i_10]))))), ((~(((/* implicit */int) arr_39 [i_12] [i_10]))))));
                            /* LoopSeq 1 */
                            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                            {
                                var_19 = ((/* implicit */short) arr_35 [i_12] [i_13]);
                                arr_46 [i_10] [i_11] [i_10] [i_10] [i_10] = ((/* implicit */int) (~(max((arr_28 [i_10] [i_11] [i_12] [i_13] [i_11] [i_11]), (((/* implicit */unsigned int) var_2))))));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_15 = 0; i_15 < 18; i_15 += 3) 
                            {
                                arr_50 [i_11] = ((/* implicit */unsigned int) var_6);
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+((+(((/* implicit */int) arr_5 [i_15] [i_13] [i_12] [i_10]))))))) + (var_3)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 ^= min((var_5), (((/* implicit */long long int) var_8)));
}
