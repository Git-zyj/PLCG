/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80528
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
    var_12 += ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_0)) : (var_9))) : (((((/* implicit */unsigned long long int) var_5)) % (var_1))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [2LL] [6LL] [i_2] = ((max((max((((/* implicit */unsigned long long int) var_4)), (var_9))), (((/* implicit */unsigned long long int) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) * (var_1));
                    arr_8 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1)))))))));
                    arr_9 [0ULL] [i_1] [i_1] [i_1] = (((~(var_5))) & (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (var_8) : (var_0))) & (((/* implicit */int) var_4))))));
                    arr_10 [8U] [8U] [(short)9] = ((/* implicit */unsigned int) (((+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) == (var_10)))))) == ((-(var_0)))));
                }
            } 
        } 
    } 
}
