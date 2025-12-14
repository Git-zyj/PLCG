/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63092
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
    var_20 = ((/* implicit */unsigned short) var_6);
    var_21 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24549)))))) ? (((/* implicit */int) ((short) var_8))) : (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_19))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */_Bool) arr_1 [i_0]);
            var_22 = ((/* implicit */short) (((+((-9223372036854775807LL - 1LL)))) / (((/* implicit */long long int) var_13))));
        }
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))))) ? (arr_9 [i_0] [i_2]) : (((arr_9 [i_0] [i_2]) - (var_5)))));
            arr_10 [i_2] = arr_1 [i_2];
        }
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) (unsigned char)49);
            /* LoopSeq 3 */
            for (short i_4 = 3; i_4 < 9; i_4 += 3) 
            {
                var_25 = ((/* implicit */unsigned char) var_0);
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    var_26 += ((/* implicit */long long int) var_11);
                    var_27 -= ((/* implicit */unsigned int) var_1);
                    arr_19 [i_3] [i_4] = ((/* implicit */int) var_19);
                    var_28 ^= ((/* implicit */long long int) arr_13 [i_0] [i_3]);
                }
                for (long long int i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_4] [i_0])) / (((/* implicit */int) var_19))))) / (arr_8 [i_6 - 1] [i_0])));
                    arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_1)) * (((unsigned long long int) var_17))));
                }
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (signed char)55))));
            }
            for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 3) /* same iter space */
            {
                var_31 = ((((/* implicit */unsigned long long int) ((unsigned int) arr_16 [i_7] [i_3] [i_0] [i_0]))) + (arr_14 [i_7 - 3] [i_7 - 3]));
                var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_7 - 3]))));
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) & (((var_15) | (((/* implicit */long long int) var_13))))));
            }
            for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 3) /* same iter space */
            {
                var_34 = ((/* implicit */short) ((arr_20 [i_8 - 3] [i_8 - 2] [i_8] [i_8] [i_3]) + (arr_20 [i_8 - 3] [i_8 - 2] [i_8 - 3] [i_8] [i_0])));
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_8 - 2])) && (((/* implicit */_Bool) arr_27 [i_0] [i_3] [i_8 - 2]))));
                arr_30 [i_8] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */long long int) 1448272406U)) : (-1LL))))));
                var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8 - 1] [i_8] [(unsigned char)9]))) : (arr_15 [i_8] [i_8] [i_8] [i_8 - 1] [i_8 - 3] [i_8 + 1])));
            }
        }
    }
}
