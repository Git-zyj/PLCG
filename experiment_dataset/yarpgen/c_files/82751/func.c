/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82751
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
    var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (min((((/* implicit */int) var_5)), (var_6))) : (((/* implicit */int) (unsigned short)25396)))) / ((-(((/* implicit */int) var_3))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4502423898550347193LL)) ? (4ULL) : (((/* implicit */unsigned long long int) 4502423898550347193LL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (-(var_7)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_3))));
                            var_15 |= (((-(((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 4] [i_0 + 1])))) & (((/* implicit */int) (unsigned short)8064)));
                        }
                    } 
                } 
                arr_11 [18U] [i_0] [i_1] = ((/* implicit */signed char) (+(((arr_7 [i_0 + 4] [i_0 + 3] [i_0] [i_0]) - (((/* implicit */unsigned int) arr_10 [i_0 - 1] [i_0 - 1] [i_0] [(_Bool)1]))))));
            }
        } 
    } 
}
