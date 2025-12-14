/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69088
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
    var_19 ^= ((/* implicit */unsigned int) ((int) var_1));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_20 = ((/* implicit */short) (~((~(arr_0 [i_0])))));
        var_21 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned int) (unsigned char)107)), (2786111079U))));
        var_22 |= ((/* implicit */int) 1277433913U);
        arr_4 [3U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1277433913U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) : (((((/* implicit */_Bool) (unsigned char)76)) ? (2629270045U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
        {
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2] [i_2])) ? (arr_8 [i_2 - 1] [i_2] [i_2]) : (arr_8 [i_2 - 1] [i_2] [i_2])))) ? (arr_7 [i_1 - 1]) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)103)), (2629270061U))))));
            arr_10 [i_1] [i_1] = ((/* implicit */short) ((_Bool) arr_7 [i_2 - 1]));
        }
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_6 [i_1]))));
        arr_11 [(signed char)1] [(signed char)1] = (~(((/* implicit */int) (unsigned char)85)));
        var_24 = ((/* implicit */long long int) (+((~(arr_7 [i_1 + 1])))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        arr_15 [(unsigned char)10] = ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)169)))))))) : ((-((~(2150434252U))))));
        var_25 &= ((/* implicit */unsigned int) arr_0 [9LL]);
        arr_16 [i_3] = arr_1 [i_3];
        arr_17 [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_3]))));
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        arr_20 [i_4] = ((/* implicit */_Bool) arr_19 [i_4] [i_4]);
        var_26 ^= ((/* implicit */unsigned short) (+(-1586790718)));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) 1586790717)) ? (arr_7 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5])))));
        arr_24 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8322385084544254972LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_21 [i_5])))) ? (((/* implicit */unsigned long long int) arr_21 [i_5])) : (((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */unsigned long long int) arr_21 [i_5])) : (arr_7 [i_5])))));
    }
}
