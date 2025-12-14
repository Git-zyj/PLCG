/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77382
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [(short)9] [i_2] = (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))), ((+(((/* implicit */int) arr_2 [i_1]))))))));
                    arr_8 [5ULL] [i_1] [i_1] [5ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_5)) : (arr_4 [i_1]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-23857)) ? (((/* implicit */int) (short)-23838)) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)15469)))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)234)))), (((/* implicit */int) (unsigned short)34382))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3885971374U)));
    var_16 = ((/* implicit */unsigned int) 673821217);
}
