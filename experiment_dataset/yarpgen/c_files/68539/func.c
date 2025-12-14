/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68539
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
    var_10 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((max((-1096238118572796555LL), (((/* implicit */long long int) var_0)))) != (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (9223372036854775807LL))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0 + 3])) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_3 [i_1] [i_0] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)9] [i_1 + 2])))))), (var_4))) : (((/* implicit */unsigned long long int) (+(4294967295U))))));
                var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((1096238118572796554LL), (((/* implicit */long long int) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) arr_1 [(unsigned char)4] [i_1])))))))) ? (((((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */unsigned long long int) 1096238118572796554LL))))) ? (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)5] [(unsigned char)5])))));
                var_13 = ((/* implicit */unsigned long long int) (~((((((((~(9223372036854775807LL))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_1 [i_1] [i_0 - 2])) - (35786)))))));
            }
        } 
    } 
}
