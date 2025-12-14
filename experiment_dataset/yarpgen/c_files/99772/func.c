/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99772
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
    var_14 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_1 [i_1 + 1])), (arr_4 [i_1 + 2]))) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1])))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (2594665825U))))));
                var_17 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 486477420655598112ULL)) ? (4575192634471109292LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-22291))))) == (((/* implicit */long long int) max((arr_2 [(unsigned short)14] [i_1 + 2]), (arr_2 [(_Bool)1] [i_1]))))));
                arr_5 [i_1] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_7))))) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (arr_2 [i_1] [i_1 - 1])))));
            }
        } 
    } 
    var_18 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
}
