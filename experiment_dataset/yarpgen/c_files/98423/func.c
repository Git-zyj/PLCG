/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98423
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
    var_17 *= ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))), (min((max((((/* implicit */long long int) (short)28075)), (5663057527939088129LL))), ((-(-1714199355545344983LL)))))));
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (2460832333U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29705)))))), (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) : ((-9223372036854775807LL - 1LL))))))), (var_15)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)203)))))))) ^ (((int) max((arr_4 [i_0] [i_0] [7ULL] [(unsigned short)2]), (((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0 + 2] [i_0 - 1])))))));
                    var_19 = ((/* implicit */short) arr_3 [5ULL] [i_1] [i_2]);
                }
            } 
        } 
    } 
}
