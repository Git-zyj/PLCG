/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66866
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) + (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((-312334198) + (312334224))))))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_17)))) ? (var_12) : (-5)))) || (((/* implicit */_Bool) -612537336))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = (-(((((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (arr_3 [i_2] [i_1]) : (((/* implicit */int) (_Bool)1)))) >> (((var_6) - (2453832668U))))));
                    var_20 = ((/* implicit */long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))))));
                    var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_12)) ? (arr_7 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 312334197)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_16))))))));
                }
            } 
        } 
    } 
}
