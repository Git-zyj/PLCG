/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88228
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
    var_13 = ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_11))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 = ((long long int) ((((/* implicit */_Bool) (-(arr_8 [i_0] [(signed char)7] [8LL] [(signed char)9])))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9)));
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned char) (!((!(var_8)))));
                    var_15 = ((/* implicit */long long int) max((3289731174856384427ULL), (15157012898853167188ULL)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) ((signed char) 15157012898853167188ULL)))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((_Bool) 3289731174856384425ULL)))))) : (max((min((((/* implicit */long long int) var_0)), (var_6))), ((+(var_6)))))));
    var_18 = ((/* implicit */signed char) var_10);
}
