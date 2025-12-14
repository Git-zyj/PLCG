/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82765
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((_Bool) ((arr_9 [i_0] [i_0] [i_1] [i_2 + 1] [14LL] [i_2]) >> (((((((-11LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-27)) + (44))) - (17))))) - (9223372036854775787LL))))));
                            var_15 = ((/* implicit */unsigned short) ((((unsigned long long int) (~(arr_0 [i_0] [i_0])))) / (((/* implicit */unsigned long long int) (+(3631258116U))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_1])) : (663709157U)))), ((~(5LL)))))) ? ((~((~(((/* implicit */int) (signed char)-34)))))) : ((~(arr_0 [i_1] [i_0 + 1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) -20LL);
}
