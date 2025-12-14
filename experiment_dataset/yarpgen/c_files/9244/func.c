/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9244
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [12LL] = ((/* implicit */unsigned short) (~(min((3307114156U), (((/* implicit */unsigned int) (_Bool)1))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */int) (~(max((((/* implicit */unsigned int) (_Bool)1)), (1654571854U)))));
                        var_19 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2640395442U)) ? ((~(3038494387U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [9LL] [9LL] [i_2] [9LL])) ? (((/* implicit */int) var_5)) : (arr_1 [i_3]))))))), (((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_0]))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) != (max(((~(arr_4 [i_1] [i_2]))), (((/* implicit */long long int) 2640395442U))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) arr_7 [9LL]);
        /* LoopSeq 1 */
        for (long long int i_4 = 2; i_4 < 12; i_4 += 1) 
        {
            var_22 = ((/* implicit */int) (~(max((18446744073709551602ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
            var_23 = ((/* implicit */unsigned char) ((var_12) == (((/* implicit */long long int) (((~(arr_1 [i_4 - 2]))) & ((~(((/* implicit */int) arr_7 [i_0])))))))));
            var_24 = max((((/* implicit */int) (unsigned char)0)), (((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned char)0)))));
            arr_15 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) var_4);
        }
    }
    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned char) 134152192U);
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_5])) < (((/* implicit */int) (!(((/* implicit */_Bool) 2640395442U))))))))));
    }
    var_26 += ((/* implicit */signed char) var_0);
    var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2115647119U)) ? (18446744073709551585ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) & (((/* implicit */unsigned long long int) max((((var_8) << (((var_14) - (9831269216714191538ULL))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_6)) >= (var_2)))))))));
    var_28 = ((/* implicit */unsigned int) var_12);
    var_29 = ((/* implicit */unsigned short) ((var_3) ? ((~(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) var_9))));
}
