/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87567
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_0))), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((min(((~((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) arr_2 [(unsigned char)4])))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (2548996550U))))))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (arr_9 [i_1])));
                var_18 &= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_7 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 2063105944U))))))) : (2260331555U)));
                var_19 |= ((/* implicit */int) arr_6 [15U]);
                var_20 += ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 + 1])))))) - (max((arr_8 [i_1 - 2] [i_1 - 2] [i_1]), (arr_6 [i_2])))))));
            }
        } 
    } 
}
