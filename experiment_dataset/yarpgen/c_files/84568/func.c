/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84568
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
    var_18 = ((/* implicit */unsigned char) 3431367421U);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */unsigned char) ((((unsigned long long int) max((((/* implicit */long long int) arr_1 [i_1])), (arr_2 [i_0] [i_0])))) - (((/* implicit */unsigned long long int) ((long long int) ((4245678710225291082ULL) + (((/* implicit */unsigned long long int) 863599875U))))))));
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_2 [i_1 + 2] [i_1 + 2]))))));
                arr_4 [(unsigned short)0] [(unsigned short)0] &= ((/* implicit */short) (~((~(((arr_0 [i_0]) ? (arr_3 [i_0] [2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201)))))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)57898)) ? (((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [3ULL]))))) : (((/* implicit */unsigned long long int) max((var_9), (var_4)))))) : (((((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */unsigned long long int) -6378396213074961258LL)) : (18446744073709551589ULL))) / (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [13U])) + (2147483647))) << (((/* implicit */int) var_5)))))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_15) : (arr_3 [i_1] [i_0]))), (((/* implicit */unsigned long long int) (-(3431367411U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3431367393U))))));
            }
        } 
    } 
}
