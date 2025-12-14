/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63392
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
    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((max((var_10), (((/* implicit */int) (short)22693)))) - (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) (unsigned char)2)) ? ((~(((/* implicit */int) (unsigned char)229)))) : (((/* implicit */int) max(((unsigned char)0), (var_9)))))) : (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), (var_13))))));
    var_20 = ((/* implicit */unsigned char) max(((~((~(((/* implicit */int) var_9)))))), ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << ((((((((-2147483647 - 1)) - (-2147483643))) + (28))) - (23)))))));
    var_21 += ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (unsigned char)242)))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    arr_9 [i_2] = ((/* implicit */short) (unsigned char)237);
                    var_22 = max(((+(((/* implicit */int) (short)32767)))), (((((/* implicit */int) arr_8 [i_1])) & (((/* implicit */int) arr_8 [i_1])))));
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) arr_2 [i_0] [1]);
                }
            }
        } 
    } 
}
