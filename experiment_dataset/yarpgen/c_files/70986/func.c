/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70986
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) var_11);
                    var_13 |= ((/* implicit */short) (signed char)44);
                    var_14 += ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) (signed char)44)))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) arr_6 [(_Bool)1] [i_1] [i_1] [i_2 - 1]))))))));
                    var_16 = max(((-(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (-7376153353461879555LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((/* implicit */long long int) (((-(((/* implicit */int) (signed char)30)))) != (((/* implicit */int) (signed char)-37))))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */short) ((((/* implicit */int) min((((((/* implicit */int) var_9)) != (var_2))), (((((/* implicit */_Bool) (signed char)36)) || (((/* implicit */_Bool) (unsigned short)29199))))))) << (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) < (((/* implicit */int) ((_Bool) var_1))))))));
}
