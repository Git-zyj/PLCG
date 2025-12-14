/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82550
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
    var_16 = min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((~(var_14))));
    var_17 -= var_5;
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) -7392507657256203355LL))));
        var_19 *= ((/* implicit */int) ((6956937524439278012LL) > (((/* implicit */long long int) var_14))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_12)))) : (var_1))));
                    var_21 ^= ((/* implicit */short) ((((min((((/* implicit */int) (unsigned short)63204)), (var_12))) == (((/* implicit */int) min((arr_1 [(short)2]), (((/* implicit */unsigned short) arr_4 [i_2]))))))) ? (((/* implicit */long long int) ((((var_12) + (2147483647))) >> (((arr_5 [i_0] [i_0]) - (2836823238U)))))) : (((long long int) min((((/* implicit */unsigned short) var_5)), (arr_0 [i_0] [(_Bool)1]))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7392507657256203355LL)) ? (((/* implicit */int) (short)20830)) : ((+(((/* implicit */int) (short)26924))))));
        arr_9 [2] = ((/* implicit */_Bool) (-(min(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 1] [(short)9] [i_0 - 1]))))));
    }
}
