/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77176
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
    var_18 = ((/* implicit */_Bool) var_0);
    var_19 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 2927427194563123559LL)))))) : (((((/* implicit */unsigned long long int) var_12)) - (var_2))))));
    var_20 = ((/* implicit */long long int) ((short) var_16));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_1] [2LL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [(unsigned char)6] [i_1] [(unsigned short)11])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (33554431ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */unsigned short) (short)3)))))) : (arr_1 [i_0])));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1])) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) -36229041))) > (14ULL))))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((_Bool) -36229041))), (min((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1] [i_1]), (arr_2 [i_0] [i_1] [i_1]))))))));
                var_22 = ((/* implicit */unsigned short) ((-36229041) <= (((/* implicit */int) arr_0 [i_1] [i_0]))));
            }
        } 
    } 
}
