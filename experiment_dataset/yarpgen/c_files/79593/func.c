/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79593
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_18 -= ((/* implicit */long long int) ((((long long int) var_8)) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                    var_19 -= ((/* implicit */unsigned int) var_17);
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((var_14), ((unsigned char)173))))) % (min((var_3), (((/* implicit */long long int) var_1)))))))));
                }
            } 
        } 
    } 
    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19)))))) ? ((~(22694365U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (unsigned char)226)))))))) & (((((/* implicit */_Bool) 2717042461U)) ? (min((-8098171104831010LL), (((/* implicit */long long int) 4272272932U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (4034603708U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))))))))));
    var_22 = ((/* implicit */signed char) var_14);
}
