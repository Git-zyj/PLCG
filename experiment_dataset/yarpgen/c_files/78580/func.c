/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78580
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_18 = ((((((var_17) | (((/* implicit */long long int) (-(1006632960)))))) + (9223372036854775807LL))) << ((((+(((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_3])) : (((/* implicit */int) var_7)))))) - (2973))));
                            arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) ((int) (~(var_10))));
                            arr_11 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)220)), ((unsigned short)22322))))) & (((long long int) arr_3 [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) ((unsigned int) arr_0 [i_0]));
            }
        } 
    } 
    var_20 -= ((/* implicit */signed char) max(((~(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned short)22312))))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_15)))))) >= (max((((/* implicit */long long int) -1742664179)), (-4501238460641028300LL))))))));
}
