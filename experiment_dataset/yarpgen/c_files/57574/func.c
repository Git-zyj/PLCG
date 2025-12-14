/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57574
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
    var_20 *= ((/* implicit */short) var_12);
    var_21 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_15)))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [(signed char)1] [3ULL] [i_3])) != (((/* implicit */int) ((signed char) (_Bool)0))))))) : (67108864ULL)));
                                var_23 = ((/* implicit */long long int) max((var_23), (min((((/* implicit */long long int) arr_7 [i_3] [(short)6] [i_3] [i_3])), ((+(arr_8 [i_0] [i_1] [i_1] [i_3] [i_4])))))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [8ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(67108864ULL)))))))) : (min((((/* implicit */long long int) (unsigned char)11)), (max((((/* implicit */long long int) -1543109703)), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_25 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_11 [i_0] [i_0] [i_2])))) / ((~(((/* implicit */int) arr_11 [i_1] [i_3] [0U]))))));
                                arr_14 [3LL] [(signed char)10] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_19)) << (((3452796825907410370ULL) - (3452796825907410355ULL)))))) ? (((((/* implicit */_Bool) 1543109699)) ? (arr_13 [i_0] [i_1] [i_0] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [5U] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0])))))) < (((((/* implicit */_Bool) 12319421406211532264ULL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)194))))) : (arr_4 [(_Bool)1] [8U])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                            {
                                var_26 = ((/* implicit */long long int) max((var_26), (((long long int) arr_19 [i_1] [i_5] [i_5] [i_5] [i_1] [i_1]))));
                                arr_27 [i_0] [i_5] [i_6] [i_6] [i_0] [6LL] = ((/* implicit */signed char) (+((+(((/* implicit */int) (_Bool)0))))));
                            }
                            for (long long int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                            {
                                arr_30 [i_8] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (~(arr_26 [i_1] [i_1])));
                                arr_31 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_5] [i_6] [i_5] [i_5] [i_1] [(signed char)1])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_5] [i_5] [i_6] [i_8])) ? (arr_9 [(signed char)7] [i_5] [i_1] [i_6] [i_5] [i_8]) : (arr_9 [i_1] [i_1] [i_5] [(unsigned char)3] [i_8] [i_6]))))));
                                arr_32 [i_1] [i_5] [i_5] [10] [i_5] [i_5] |= ((/* implicit */unsigned long long int) var_10);
                                arr_33 [i_5] [(short)9] [i_0] [(short)9] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) min((arr_21 [i_0] [i_1] [i_5] [i_0]), (arr_24 [i_0] [(_Bool)1] [i_5] [11] [i_6] [i_8]))))))) == ((+(arr_18 [i_0])))));
                            }
                            var_27 = ((/* implicit */unsigned short) arr_15 [i_0] [i_1] [(unsigned short)8] [i_0]);
                        }
                    } 
                } 
                var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65515)) || (((/* implicit */_Bool) 9223372036854775808ULL))));
            }
        } 
    } 
}
