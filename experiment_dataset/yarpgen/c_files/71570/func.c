/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71570
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
    var_19 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_7)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) (-(min((((/* implicit */int) (unsigned short)65535)), (arr_3 [i_0 + 3] [i_0 + 2])))));
                    var_21 = ((/* implicit */unsigned int) arr_2 [i_0]);
                    arr_7 [i_0 + 4] [i_0] [i_0 + 4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-1)), (arr_4 [i_0] [i_0])))) ? (1257137723713792712LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [3])) ? (((/* implicit */int) (short)-1)) : (arr_3 [i_2] [i_2]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)4095)))))))) : (((/* implicit */int) (unsigned short)19))));
                    var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_0 + 4] [i_0 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_4 [i_0 + 2] [i_0 + 1])))));
                }
            } 
        } 
    } 
}
