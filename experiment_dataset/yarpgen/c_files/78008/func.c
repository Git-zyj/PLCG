/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78008
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_10 *= ((/* implicit */unsigned long long int) var_6);
                var_11 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))), (max((0ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0])))))) : (min((-1711025589), (((/* implicit */int) ((short) arr_1 [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_12 = ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0])) > (((/* implicit */int) arr_4 [i_2])))))));
                    var_13 = (+(min((((/* implicit */int) var_0)), (arr_0 [i_1 + 1] [i_1 - 2]))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */int) var_1)) == ((~(((/* implicit */int) var_0))))));
}
