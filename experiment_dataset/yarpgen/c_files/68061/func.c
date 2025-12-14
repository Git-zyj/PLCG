/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68061
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
    var_20 = ((/* implicit */unsigned char) var_3);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) ((int) var_5)))) : (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [2] [i_2] = ((signed char) ((((/* implicit */_Bool) (unsigned char)62)) ? (17592186044415ULL) : (17592186044415ULL)));
                    var_22 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (var_17) : (((/* implicit */int) var_18)))));
                    arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((signed char) 160794636)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) var_7);
}
