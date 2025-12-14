/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72904
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */long long int) var_2);
                    var_11 = ((/* implicit */unsigned char) max((max((arr_10 [i_0 + 2]), (arr_10 [i_0 + 2]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1 - 1])))))));
                    var_12 *= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)0)), (arr_10 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [0LL]), (arr_6 [i_0 + 2] [i_2]))))) : (((unsigned long long int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (unsigned char)0)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (var_0) : (var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((((/* implicit */unsigned int) 1068421433)), (var_4)))))));
}
