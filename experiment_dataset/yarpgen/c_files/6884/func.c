/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6884
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) arr_3 [i_0])))))))));
                    var_20 = ((/* implicit */unsigned char) var_12);
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (signed char)21)))) != (((/* implicit */int) (signed char)111))))) ^ (((-1110884543) + (var_1))));
    var_22 &= ((/* implicit */int) var_7);
    var_23 *= ((((/* implicit */long long int) ((/* implicit */int) ((((1655831446) * (((/* implicit */int) var_0)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))))) >= (((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_18))))) ? (3714561893148017530LL) : (((/* implicit */long long int) var_2)))));
}
