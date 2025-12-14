/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72114
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [(signed char)4] [i_1] = ((/* implicit */int) var_9);
                var_10 = ((/* implicit */_Bool) ((((3487759266013089349LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))))) + (((((/* implicit */_Bool) min(((unsigned short)1), ((unsigned short)2)))) ? (min((3487759266013089354LL), (((/* implicit */long long int) (signed char)106)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6070576100243570321ULL)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) var_5)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) ((var_3) ^ (((/* implicit */int) var_2))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)15393)) - (((/* implicit */int) var_2))))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50143))) - (-922996718822906530LL)))))) ? (min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) 1485611036)) ? (var_3) : (((/* implicit */int) (signed char)51)))))) : (((((/* implicit */int) (unsigned short)2)) - (((/* implicit */int) var_7))))));
}
