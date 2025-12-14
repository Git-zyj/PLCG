/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75844
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
    var_17 += ((/* implicit */unsigned int) min((var_14), (((/* implicit */long long int) (!(min((var_12), ((_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_1 [i_0]))))))), (((((/* implicit */_Bool) max(((signed char)74), (arr_2 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_1 [i_0]))) & (var_6))), (((/* implicit */unsigned long long int) min((max((var_4), (arr_4 [i_0] [i_0]))), (min((arr_5 [(_Bool)1] [i_1] [i_1] [(unsigned short)16]), (((/* implicit */unsigned int) (_Bool)1)))))))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((unsigned long long int) max((((/* implicit */unsigned int) var_9)), (arr_4 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
}
