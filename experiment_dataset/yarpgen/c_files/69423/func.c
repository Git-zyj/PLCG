/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69423
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_4))))) - (((((/* implicit */_Bool) 775573674)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_18)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((0ULL) - (((/* implicit */unsigned long long int) 130691396U)))))));
                    var_22 ^= ((/* implicit */unsigned char) (-(2648450331042157198LL)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_10);
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((unsigned int) var_19))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (unsigned char)160))))) : (((((/* implicit */_Bool) ((unsigned char) var_13))) ? ((-(var_3))) : ((-(((/* implicit */int) var_18))))))));
}
