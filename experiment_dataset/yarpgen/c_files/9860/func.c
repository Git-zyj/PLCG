/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9860
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
        arr_3 [i_0] [i_0] = ((max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) 2147483647)) : (18446744073709551612ULL))), (((/* implicit */unsigned long long int) (signed char)127)))) == (3ULL));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(((/* implicit */int) (unsigned short)65535)))))));
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        arr_6 [i_1 - 1] = max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (6ULL));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 18; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_20 += ((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_2 + 1]));
                arr_14 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551602ULL)));
                arr_15 [i_1] [i_2] [6U] [i_2] = ((/* implicit */unsigned short) var_10);
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_22 [i_1] [i_2] [i_2] [i_4 + 4] [i_5] = ((/* implicit */signed char) (-(2147483625)));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((short) arr_18 [i_2] [i_2])))));
                        }
                    } 
                } 
            }
            arr_23 [i_1] [i_2] = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_21 [i_1] [i_2] [i_2] [i_2 - 1])));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 + 1] [i_2 + 1] [i_2] [i_2]))) <= (var_11))))));
        }
        /* vectorizable */
        for (long long int i_6 = 2; i_6 < 18; i_6 += 1) /* same iter space */
        {
            var_23 += ((((/* implicit */_Bool) 9223372036854775807LL)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((signed char) var_14)))))));
        }
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_15))));
        arr_26 [i_1] = ((/* implicit */short) ((((unsigned long long int) arr_18 [i_1 + 2] [i_1 + 2])) - (((((/* implicit */_Bool) -25)) ? (((/* implicit */unsigned long long int) 0U)) : (18446744073709551602ULL)))));
    }
    /* LoopSeq 1 */
    for (signed char i_7 = 2; i_7 < 17; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned short i_10 = 1; i_10 < 15; i_10 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_7 - 1]))) : (((((/* implicit */_Bool) var_1)) ? (var_6) : (var_11))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_5))) << (((var_1) - (614364156)))))))))));
                        arr_38 [i_7] [i_10] [i_7] = ((/* implicit */short) ((2ULL) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (unsigned short)22))))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)255))));
    }
}
