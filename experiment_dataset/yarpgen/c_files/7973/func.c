/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7973
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_1]))));
                    arr_6 [i_2] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_4 [i_2])))) < (((/* implicit */int) min((arr_4 [i_2]), (arr_4 [i_2]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((unsigned int) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_12)) : (var_15)))) : (((((/* implicit */_Bool) 2220972062U)) ? (2220972062U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))))))));
}
