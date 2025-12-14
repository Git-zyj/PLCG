/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59611
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
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (((arr_2 [i_0 - 2] [i_0 - 2] [i_0 + 1]) >> (((11258512667556549417ULL) - (11258512667556549396ULL)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) -693625730)), (var_15))));
                            var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2 - 3] [i_2 - 2])) ? (3427403868038208156ULL) : ((+(3427403868038208159ULL)))))));
                            var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((signed char) ((signed char) 301759962)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (signed char)-77))))), (((((/* implicit */_Bool) (signed char)-73)) ? (3427403868038208156ULL) : (((/* implicit */unsigned long long int) var_10))))))));
                            arr_9 [i_3] [(_Bool)1] [16] [i_3] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) var_14)), (12680440238023727148ULL))), (((/* implicit */unsigned long long int) ((((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) var_12))))) ? (((/* implicit */int) (signed char)-119)) : (1232445111))))));
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */unsigned long long int) var_12);
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_16);
}
