/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9949
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (short i_3 = 4; i_3 < 23; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))) != (-4177857461733345609LL)));
                                var_17 = ((/* implicit */unsigned long long int) 527225002396269231LL);
                                var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((unsigned int) var_14))))) ? ((-(-8067334442765341088LL))) : (((/* implicit */long long int) 1632501408))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (-409908819)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (min((8067334442765341088LL), (var_0)))))), ((+((-(var_2)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (11137789331225236930ULL) : (min((11137789331225236930ULL), (((/* implicit */unsigned long long int) (short)-32766))))));
    var_21 = ((/* implicit */unsigned int) var_2);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5)))))) % (8553839954815116917LL)));
}
