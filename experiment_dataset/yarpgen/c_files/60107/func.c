/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60107
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
    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) ((int) var_12)));
    var_17 = ((/* implicit */_Bool) var_12);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_0 [i_1]) : (arr_0 [i_1])))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) arr_2 [i_0] [i_2])) : (var_1))) : (((/* implicit */long long int) 1883849883U))));
                    var_19 += ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_2]) : (((/* implicit */int) var_4))))), (((1290311130U) | (((/* implicit */unsigned int) arr_0 [i_0]))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 3004656162U)) ? (((((/* implicit */_Bool) 1883849904U)) ? (((/* implicit */unsigned int) -699932310)) : (3004656165U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (-981640778) : (((/* implicit */int) arr_3 [i_0]))))) ? (((var_2) ? (((/* implicit */int) arr_3 [i_0])) : (arr_2 [i_0] [i_1]))) : (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])))))))))));
                }
            } 
        } 
    } 
}
