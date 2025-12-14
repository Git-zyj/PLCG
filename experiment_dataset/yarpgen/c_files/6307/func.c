/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6307
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) 7901495949871384733LL)) ? (((/* implicit */unsigned long long int) 111715780)) : (15052689465265329670ULL)))))) ? ((-(((/* implicit */int) var_9)))) : ((~((-(((/* implicit */int) var_3))))))));
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((int) ((unsigned long long int) var_5))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (min((arr_4 [2U] [i_1] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) * (var_2)))));
                    var_13 = ((/* implicit */short) arr_5 [i_0 + 1] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) var_5);
}
