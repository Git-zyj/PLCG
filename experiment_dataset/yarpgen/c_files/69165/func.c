/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69165
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
    var_19 -= ((((/* implicit */int) var_18)) ^ (((/* implicit */int) (unsigned char)192)));
    var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(14695372677621944276ULL)))) ? (((unsigned long long int) var_16)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) arr_3 [i_0 - 1]);
                var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) arr_4 [i_0]))))))) ? ((-(var_11))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (3751371396087607340ULL)))) ? (((((/* implicit */_Bool) 17642296688452494156ULL)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) : (((/* implicit */unsigned long long int) 2094064121))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_18))))) * (((/* implicit */int) var_10))));
}
