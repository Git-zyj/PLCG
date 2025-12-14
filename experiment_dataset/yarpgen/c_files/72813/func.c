/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72813
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 - 2] [i_1] = ((/* implicit */_Bool) (unsigned short)65535);
                arr_6 [(_Bool)1] [i_0] [i_1 - 3] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)4))) & (arr_1 [i_0]));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_7))));
                arr_7 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_4 [i_0]) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)22)) : (((/* implicit */int) (unsigned short)65514)))) : (((/* implicit */int) arr_2 [(signed char)0] [i_1 - 3]))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (((-(var_4))) + (((unsigned long long int) ((int) (_Bool)0))))))));
    var_15 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17829334574721804379ULL)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (unsigned short)22))))) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned short)0)) : (var_12))) : (((/* implicit */int) max(((unsigned char)10), (((/* implicit */unsigned char) (signed char)-75)))))))), ((+(((unsigned long long int) (_Bool)1)))));
    var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) min((-3408203218247814787LL), (((/* implicit */long long int) var_2)))))) ? (var_2) : (((/* implicit */int) ((_Bool) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29)))))))));
}
