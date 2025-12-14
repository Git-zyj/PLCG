/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60809
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))) ^ (arr_0 [i_1 - 4])));
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((8258715153346710865LL) & (((/* implicit */long long int) (~(4080U))))))) ? (((max((arr_0 [i_0]), (((/* implicit */long long int) (unsigned char)96)))) | (((/* implicit */long long int) max((var_5), (var_0)))))) : (((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_3 [i_0] [0LL])), (2542774873U))) & (min((4294963215U), (((/* implicit */unsigned int) arr_3 [2LL] [2LL]))))))))))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294963216U)) ? (((/* implicit */int) arr_3 [2] [2U])) : (((/* implicit */int) var_1))))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned long long int) var_3))));
    var_15 = ((/* implicit */long long int) var_8);
}
