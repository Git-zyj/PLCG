/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94803
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((((4625128543776003175LL) >= (((/* implicit */long long int) 63)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)15931)) >= (((/* implicit */int) var_9))))))), ((-(((((/* implicit */_Bool) -6471061637482964817LL)) ? (((/* implicit */int) (unsigned short)15943)) : (((/* implicit */int) (unsigned short)49590))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15949))))) ? (((((/* implicit */_Bool) (unsigned short)49593)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49588))) : (-5992802813257634467LL))) : (-6899925456847490040LL)))));
                            var_16 = ((/* implicit */int) (unsigned short)49582);
                            arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (5360755158857902695LL))))))))) < (786432ULL)));
                        }
                    } 
                } 
                arr_11 [i_0] [0ULL] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) (~(((var_13) ^ (((/* implicit */unsigned long long int) var_5))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (((((/* implicit */unsigned long long int) var_2)) - (1048575ULL)))));
                arr_12 [i_0] [i_0] = ((/* implicit */int) (unsigned short)49582);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
}
