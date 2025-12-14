/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86959
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-92))));
                var_19 *= ((/* implicit */short) arr_2 [i_0] [i_1]);
                arr_4 [i_0] &= ((((/* implicit */_Bool) (+(18446744073709551605ULL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (arr_0 [(unsigned char)12] [(unsigned char)12])))), (((((/* implicit */_Bool) 4464671571613846940ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))))))) : (min((((((/* implicit */_Bool) 703002191U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_0 [i_1] [i_1]))), (((arr_2 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                var_20 = min((((/* implicit */unsigned long long int) (_Bool)1)), (10826424863867647885ULL));
                arr_5 [i_0 - 1] [i_1] = ((/* implicit */long long int) (((~(arr_0 [i_0 - 1] [i_0 - 1]))) ^ (((arr_0 [i_0 + 1] [i_0 + 1]) << (((/* implicit */int) (unsigned char)24))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_6))));
}
