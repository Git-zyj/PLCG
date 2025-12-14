/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76412
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
    var_11 = ((((/* implicit */_Bool) ((unsigned int) 4439893213731025559ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4439893213731025577ULL)))))) : (10090742533920954192ULL));
    var_12 = ((/* implicit */int) (((~(((((/* implicit */_Bool) var_9)) ? (var_10) : (var_4))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1))))) && (((_Bool) var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_13 *= ((/* implicit */long long int) min((((unsigned short) ((_Bool) var_9))), (((/* implicit */unsigned short) var_1))));
                var_14 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (min((((/* implicit */long long int) var_0)), (var_9)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (((~(var_7))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (var_3))))));
                var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((_Bool) var_10)))));
            }
        } 
    } 
}
