/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60929
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
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) 1436894366U)) : (var_13))))), (((/* implicit */long long int) ((((371817919) << (((((/* implicit */int) (unsigned short)29162)) - (29162))))) <= (((/* implicit */int) (unsigned short)1432))))))))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)89))))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)252))))) ? (17179836416LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51471)))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            var_21 ^= ((/* implicit */long long int) (unsigned char)202);
            var_22 = ((/* implicit */unsigned long long int) (unsigned char)238);
            arr_10 [i_1 + 1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((arr_9 [i_1] [i_1 - 1] [i_2 + 1]) + (2147483647))) >> (((/* implicit */int) (unsigned char)29))))) : (((/* implicit */unsigned int) ((((((arr_9 [i_1] [i_1 - 1] [i_2 + 1]) - (2147483647))) + (2147483647))) >> (((/* implicit */int) (unsigned char)29)))));
        }
    }
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (max((((((/* implicit */_Bool) (unsigned short)26345)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) var_16)))))))));
    var_24 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 8872185623283448788ULL)))) <= (var_7))));
}
