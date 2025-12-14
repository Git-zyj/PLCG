/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87530
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
    var_19 |= ((/* implicit */long long int) 12074879196188662372ULL);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) ((2281712676U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 += ((/* implicit */signed char) min((((/* implicit */long long int) var_15)), ((~(arr_7 [i_0] [i_0 + 2] [i_2 - 4])))));
                    arr_9 [i_0] [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1608939249U)))))) : (max((2381326258U), (((/* implicit */unsigned int) arr_6 [19LL]))))))) | (6371864877520889241ULL));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 4; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) var_11);
        arr_12 [i_3] [i_3] = ((/* implicit */short) arr_0 [i_3 + 1]);
        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)52)) ? (-2291546179595104867LL) : (((/* implicit */long long int) 1U)))) & (2291546179595104867LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3 - 2])) << (((((/* implicit */int) arr_5 [i_3 - 2])) - (87)))))) : (1003359911U)));
    }
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) var_7);
        var_24 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) arr_6 [i_4]))));
        var_25 = ((/* implicit */unsigned int) 8652015927607253089LL);
        arr_15 [i_4] [(short)16] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) var_5)), (arr_4 [i_4] [i_4] [i_4]))), (((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) ? (arr_14 [i_4] [i_4]) : (arr_4 [i_4] [i_4] [i_4])))));
    }
    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) 
    {
        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_5 + 1]))));
        arr_18 [(unsigned char)6] = ((/* implicit */unsigned short) -1726689607594967815LL);
        var_27 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (unsigned short)35777)))), (((/* implicit */int) max((arr_1 [i_5 + 1]), (arr_1 [i_5 - 1]))))));
        arr_19 [16LL] = ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned long long int) (signed char)-81)), (arr_14 [i_5 + 1] [i_5 - 1]))));
        var_28 = ((/* implicit */unsigned int) arr_17 [i_5] [i_5]);
    }
}
