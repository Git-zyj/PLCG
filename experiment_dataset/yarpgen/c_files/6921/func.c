/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6921
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) var_7)), (((var_15) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) var_10))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) (short)-1)), (((unsigned int) (~(((/* implicit */int) arr_6 [i_2] [i_2] [i_1] [i_0])))))));
                    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
                    arr_7 [i_2 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)5243)) && (((/* implicit */_Bool) var_13))))), (min((arr_0 [i_0] [i_0]), (arr_3 [i_1]))))))));
                }
            } 
        } 
    } 
}
