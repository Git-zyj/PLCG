/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95538
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
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)25674)) << (((((/* implicit */int) (unsigned short)65535)) - (65529))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((((arr_5 [i_0 - 3] [i_1]) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_2])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1] [i_2])), ((unsigned short)65534))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0]))) : (((((/* implicit */long long int) 1295935691)) + (6291735635417096643LL)))))) ? (((/* implicit */int) (!(arr_2 [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) max((2835939759607650006ULL), (var_6)))) && (((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2]))))))))));
                    var_22 = ((/* implicit */long long int) (~((-(arr_3 [i_0 - 1] [i_0 - 3])))));
                }
            } 
        } 
    } 
}
