/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85840
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
    var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)16376)) ? (var_3) : (min((((/* implicit */long long int) (unsigned short)16360)), (260096LL))))), (((/* implicit */long long int) (unsigned short)37965))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((((/* implicit */int) arr_9 [i_0] [i_1])) + (((/* implicit */int) arr_9 [i_0] [i_1]))))))) - (((var_10) + (min((-2673975877575566617LL), (((/* implicit */long long int) (unsigned short)16350))))))));
                            var_14 |= ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_8 [i_0])))));
                            var_15 = ((/* implicit */_Bool) 9223372036854775807LL);
                            var_16 |= ((/* implicit */unsigned short) var_11);
                            var_17 = ((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) (((((~(arr_11 [i_0] [i_0] [i_1] [i_0]))) % (var_5))) > (min((6253164325673424444LL), (((/* implicit */long long int) arr_0 [i_0 - 1]))))));
            }
        } 
    } 
}
