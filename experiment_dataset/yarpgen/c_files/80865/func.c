/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80865
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((var_0), (((/* implicit */long long int) 0)))), (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */int) var_6)) / (var_2)))))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */long long int) 1288792293)) : (6917529027641081856LL))) : (((/* implicit */long long int) 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [4LL])) ? (((/* implicit */long long int) (+(((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_5))))))) : (((((0LL) != (((/* implicit */long long int) 3476011258U)))) ? (max((-12LL), (((/* implicit */long long int) (unsigned char)7)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22472)))))));
                arr_6 [(_Bool)1] [i_1] = ((/* implicit */signed char) var_6);
                arr_7 [1LL] [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (var_1)))) ? (((/* implicit */long long int) (~(var_3)))) : ((~(3749072229090584184LL)))));
                arr_8 [i_0] = ((/* implicit */long long int) ((((arr_4 [i_1]) / (arr_4 [i_0]))) < (min((arr_4 [i_1]), (arr_4 [i_0])))));
            }
        } 
    } 
}
