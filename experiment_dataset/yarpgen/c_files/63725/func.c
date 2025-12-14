/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63725
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
    var_16 = ((/* implicit */unsigned short) (unsigned char)127);
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)135)) > (((/* implicit */int) (unsigned char)132)))))));
    var_18 = var_11;
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_2 [(_Bool)0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [0ULL] [i_1] [i_2] = ((/* implicit */int) arr_3 [i_1]);
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max(((-(var_3))), (((/* implicit */long long int) (unsigned short)26705)))))));
                    var_20 = ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? ((-(((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) var_1)) + (10482))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_6))))))))))));
}
