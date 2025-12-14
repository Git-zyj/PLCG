/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71287
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_15 -= ((/* implicit */unsigned long long int) var_9);
        var_16 = ((/* implicit */signed char) var_12);
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned long long int) -1360317543)))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) min(((~(min((((/* implicit */unsigned long long int) -1360317561)), (14097457523687459494ULL))))), (((9177218630397912256ULL) >> (((1691996090049501383ULL) - (1691996090049501322ULL)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
        {
            arr_7 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((((/* implicit */_Bool) 1360317542)) || (((/* implicit */_Bool) 16754747983660050225ULL))))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_1 [i_0] [i_1]))));
            arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_5 [i_0] [i_0])) - (9388))))) / (max((1360317543), (1360317546)))));
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_1))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
        {
            var_20 += ((/* implicit */unsigned long long int) (!(arr_12 [i_2])));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                arr_16 [i_3] [i_2] [i_0] = ((/* implicit */signed char) (!((_Bool)0)));
                var_21 = ((/* implicit */int) (-(arr_6 [i_0] [i_0])));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned char) ((unsigned char) arr_1 [i_3] [i_2]))))));
            }
            for (unsigned char i_4 = 3; i_4 < 24; i_4 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) (!(arr_18 [i_4] [i_4 - 2] [i_4])));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_4] [i_2] [i_4] [i_4 - 3])) >= (((/* implicit */int) arr_15 [i_0] [i_2] [i_4 - 2] [i_4 - 3]))));
                var_25 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [12ULL]))) <= (((16754747983660050225ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_21 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15715832178976509568ULL)) && (((/* implicit */_Bool) arr_13 [i_0] [(unsigned short)14]))));
                var_26 *= ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                arr_22 [i_5] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_5] [i_2]));
                var_27 += ((/* implicit */short) arr_18 [i_0] [i_2] [i_0]);
            }
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        {
                            arr_33 [i_2] [(short)10] [(_Bool)1] [i_7] [0U] [(unsigned char)13] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (12268873538077859762ULL)));
                            var_28 = ((/* implicit */unsigned long long int) arr_10 [i_6 - 1]);
                            arr_34 [(unsigned char)6] [(short)9] [(short)1] [i_0] [i_8] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_6 + 2]))));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_6] [i_7] [i_8])) ? (((/* implicit */int) arr_15 [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6 + 2])) : ((-(((/* implicit */int) arr_2 [i_0])))))))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0] [2ULL]))))));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        arr_38 [i_9] = ((/* implicit */unsigned short) var_8);
        var_31 -= ((/* implicit */unsigned long long int) arr_14 [i_9] [i_9] [i_9]);
    }
    var_32 *= ((/* implicit */unsigned char) ((signed char) var_2));
}
