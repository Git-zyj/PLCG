/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70401
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
    var_10 += ((/* implicit */long long int) var_9);
    var_11 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) min((((/* implicit */int) ((268402688LL) > (6548364550755223603LL)))), (((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_9)) - (8749)))))));
                arr_5 [i_1 - 4] [(unsigned short)7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)63477)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29465)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (min((((/* implicit */long long int) arr_4 [11LL] [i_0])), (arr_0 [i_0] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) (unsigned short)0)))))))));
                var_13 = -7994178016561665495LL;
                var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((((/* implicit */int) arr_4 [i_0] [i_1 - 2])) ^ (((/* implicit */int) (unsigned short)59356))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)43501)) : (((/* implicit */int) arr_3 [13LL] [4LL] [8LL]))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62843))) : (arr_0 [i_1] [i_1 - 2])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned short)65530))))))) : (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned short)36305))))))));
}
