/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5899
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
    var_20 = ((/* implicit */unsigned char) 2905788281U);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) (short)7898)))));
                    arr_8 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_1]))) ? (((/* implicit */long long int) arr_6 [i_2] [i_1] [i_2])) : (max((((/* implicit */long long int) arr_6 [i_2] [i_1] [i_2])), (2269814212194729984LL))))))));
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) (~(min((337951815U), (((/* implicit */unsigned int) ((signed char) arr_1 [i_1])))))));
                    var_21 = ((/* implicit */unsigned int) arr_1 [i_0]);
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) arr_3 [i_0]);
    }
    var_23 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) 2147483647))))) && (((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_11)))))) && (((/* implicit */_Bool) var_13))));
}
