/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63487
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) ((11687884943552241966ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)0), ((short)0)))))))) == ((+(((/* implicit */int) (unsigned char)143)))))))));
                var_16 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) + (arr_0 [8LL]))))))) == ((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))));
                var_17 = ((/* implicit */unsigned short) min((max((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_0])))), (((arr_0 [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [6U] [6U] [12U]))) == (arr_0 [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) 35180077121536LL)) > (2199023255551ULL)))), (((short) var_14)))))));
    var_19 = ((/* implicit */long long int) max((((/* implicit */int) var_7)), (((((/* implicit */int) ((unsigned short) var_10))) ^ (((/* implicit */int) var_9))))));
}
