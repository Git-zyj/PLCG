/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88438
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
    var_15 = ((/* implicit */int) var_3);
    var_16 |= ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -767674570843776038LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (767674570843776037LL)))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)610)) : (((/* implicit */int) var_9)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32)) | (((/* implicit */int) ((short) arr_2 [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_18 = var_4;
            var_19 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1]);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 2])) || (((/* implicit */_Bool) var_6))));
        }
        var_20 = ((/* implicit */long long int) arr_1 [i_0] [i_0 - 1]);
        arr_7 [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 100760390)) ? (1884355933U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39803))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)127)), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) : (min((((/* implicit */unsigned int) arr_2 [i_0 - 3])), (var_7)))))));
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2147483647))));
    }
    for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)147)))));
        var_22 = ((/* implicit */int) (~(min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) arr_9 [(signed char)18] [i_2])) ? (((/* implicit */long long int) 1448729562U)) : (32640LL)))))));
        var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_9 [i_2 + 2] [i_2])) ? (((/* implicit */long long int) arr_9 [i_2 - 2] [i_2 - 1])) : (((long long int) (unsigned short)65535)))), (((long long int) 538019021U))));
    }
    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_24 ^= ((/* implicit */short) ((arr_10 [i_3 + 1]) / (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)597)) : (((((/* implicit */_Bool) 1006091707)) ? (((/* implicit */int) var_1)) : (arr_10 [i_3])))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (538019021U)));
    }
    var_26 = ((/* implicit */unsigned int) var_11);
}
