/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91667
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
    var_13 = min((((/* implicit */short) var_8)), (var_11));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)-76)))))), (((((/* implicit */int) (signed char)-40)) + (((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3]))))));
                            var_15 = max((((/* implicit */short) (signed char)24)), (min((var_0), (var_0))));
                        }
                    } 
                } 
                var_16 ^= ((/* implicit */short) ((((/* implicit */int) (signed char)7)) - (((/* implicit */int) (signed char)-23))));
            }
        } 
    } 
    var_17 ^= min(((short)32760), (((/* implicit */short) (signed char)116)));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((/* implicit */int) max(((short)31284), (((/* implicit */short) min((var_9), ((signed char)7))))))))))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((-(((/* implicit */int) min((var_6), (var_5)))))) << (((((/* implicit */int) var_1)) - (16824))))))));
}
