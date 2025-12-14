/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7300
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
    var_11 = ((/* implicit */unsigned int) min((var_9), (((/* implicit */short) var_10))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) var_1)), ((((_Bool)1) ? ((-(((/* implicit */int) (signed char)-4)))) : (((/* implicit */int) arr_0 [i_0]))))));
                    arr_8 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((11ULL) ^ (((/* implicit */unsigned long long int) 8210189058407471739LL)))) < ((+(arr_2 [i_0])))))) < (min((((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (_Bool)1)) : (851988763))), (((/* implicit */int) (_Bool)1))))));
                    var_12 = ((/* implicit */int) arr_6 [i_0] [(short)12] [i_0]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) 5918177189358982562ULL);
}
