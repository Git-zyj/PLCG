/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89358
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) var_2)), (((var_9) | (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) ((_Bool) arr_5 [i_0] [i_2]))))));
                    var_22 = ((/* implicit */unsigned int) arr_4 [i_2] [(signed char)1] [i_2]);
                    var_23 = ((/* implicit */int) ((unsigned int) -1217801790));
                    arr_8 [i_1] [i_1] [i_2 - 1] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_3 [i_2 + 2])))))));
                }
            } 
        } 
    } 
}
