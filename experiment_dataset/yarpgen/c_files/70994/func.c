/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70994
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
    var_18 = ((/* implicit */long long int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (var_3))) >> (((var_9) + (2255177404618248676LL))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) != (1ULL));
            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0]))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_21 = ((/* implicit */short) arr_3 [i_2]);
                var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) & (((/* implicit */int) var_13))))));
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (arr_8 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_2]))))))));
                var_24 *= ((/* implicit */signed char) ((2977785853959338872LL) / (arr_8 [i_0] [i_1] [i_2])));
            }
            for (long long int i_3 = 4; i_3 < 18; i_3 += 2) 
            {
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_10 [(unsigned short)15] [i_3]))));
                var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_3 + 2] [(signed char)6])) ? (arr_8 [i_3] [i_3 + 4] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44)))));
            }
            var_27 = ((/* implicit */short) 12ULL);
        }
        var_28 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_12)))) ? (max(((+(5750991096228689929LL))), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0])))))));
        var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max(((short)22286), (((/* implicit */short) arr_9 [i_0] [i_0] [i_0]))))), (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0]))))));
        var_30 = ((/* implicit */short) (+((+(arr_8 [i_0] [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            var_31 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 18446744073709551600ULL)) || (((/* implicit */_Bool) (unsigned short)6692))))));
            var_32 = ((/* implicit */short) (-(arr_0 [i_4 + 2] [i_0])));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned long long int) var_17);
        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) min(((signed char)121), (((/* implicit */signed char) (_Bool)0)))))));
        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_15 [i_5])))), (((((/* implicit */_Bool) 8776537237600523538LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)3)))))))));
        var_36 = (short)32741;
    }
}
