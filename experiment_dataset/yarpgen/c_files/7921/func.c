/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7921
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((-6801240) * (((/* implicit */int) (_Bool)0))))) + (((((/* implicit */_Bool) 17364281945938017205ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3575105075U)))))) / (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    var_14 = ((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) 719862221U))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_1))) * ((~(((/* implicit */int) (unsigned short)22969))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min(((~(var_8))), (var_8)))) > (var_6)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned short i_3 = 2; i_3 < 11; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) (-(3575105074U))))) & (((((/* implicit */long long int) 31)) - (min((((/* implicit */long long int) var_11)), (3459621506554892048LL))))))))));
                var_18 = ((/* implicit */unsigned long long int) var_4);
                arr_13 [i_2] [i_3 - 1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (var_12))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (0LL)))))));
            }
        } 
    } 
}
