/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8866
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
    var_10 &= ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) * (((((((min((((/* implicit */long long int) var_9)), ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_7)) - (72)))))));
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (-(((((/* implicit */int) var_9)) / (var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((int) (unsigned char)95))), (((unsigned long long int) arr_3 [i_0] [i_1] [i_1]))));
                arr_4 [i_0] [i_0] [12LL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (288537429U)))) ? (((/* implicit */long long int) var_2)) : (max((((/* implicit */long long int) var_9)), (9223372036854775807LL))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])) % (18446744073709551591ULL)))))))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (9223372036854775807LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [(unsigned char)12])) % (var_3)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1208650638)) ? (var_5) : (((/* implicit */int) (unsigned char)0))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -1711628909)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((var_8), (((/* implicit */int) (unsigned char)0)))) | (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775797LL)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)111)), (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_3]))))) : (((/* implicit */int) var_6))))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))) | (var_4)))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) max((arr_6 [i_3]), ((-2147483647 - 1))))) + (((long long int) arr_6 [i_3]))));
            }
        } 
    } 
}
