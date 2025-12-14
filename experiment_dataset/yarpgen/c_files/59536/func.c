/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59536
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
    var_17 = ((/* implicit */signed char) (~((-(var_9)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) (-(4171271773329252927ULL))))), ((-(((/* implicit */int) ((_Bool) (unsigned char)0)))))));
                var_18 = ((arr_2 [i_0]) ? ((~(((-2356874755689811727LL) ^ (((/* implicit */long long int) arr_0 [i_1] [14LL])))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))))));
                var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((arr_0 [i_1] [i_0]) + (((/* implicit */int) (short)16024))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37750)))))) < (((arr_2 [(unsigned short)10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (17716189635882787905ULL)))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) -274982123724258906LL)) <= (var_4)))))));
                arr_5 [(_Bool)1] = (!(((/* implicit */_Bool) (unsigned char)7)));
            }
        } 
    } 
}
