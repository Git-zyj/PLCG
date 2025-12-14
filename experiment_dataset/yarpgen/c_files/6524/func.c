/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6524
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 131071U)))))))) ? ((~((-(16374084198504715865ULL))))) : ((-(var_11)))));
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
    var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9521)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned char)132)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)54894))))));
                                var_24 = ((/* implicit */long long int) (-((-(131065U)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
