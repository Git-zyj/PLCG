/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62810
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_1] [i_0] [i_0])))) ? (min((arr_3 [i_0] [i_0] [i_0]), ((-(258048U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) var_2)))))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max(((+((-(arr_3 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) (+(((((/* implicit */int) var_1)) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((var_13) ^ (((/* implicit */unsigned int) ((((/* implicit */int) ((9223372036854775793LL) >= (((/* implicit */long long int) var_4))))) % (((/* implicit */int) var_1)))))));
    var_20 = ((/* implicit */long long int) var_4);
}
