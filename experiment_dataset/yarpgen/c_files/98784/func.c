/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98784
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
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)64134))));
    var_17 = ((/* implicit */unsigned long long int) var_15);
    var_18 += ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */short) var_4)), (var_0)))), ((unsigned short)1391)))), (var_3)));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) (unsigned short)1412)) ? (((/* implicit */int) (unsigned short)1402)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (unsigned short)64134)))) != (var_10)));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (min((((((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64136))) : (15209434656971528756ULL))) / (((/* implicit */unsigned long long int) min((732256557), (((/* implicit */int) (unsigned short)64140))))))), (((/* implicit */unsigned long long int) var_4))))));
                                arr_14 [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)1421)))), (((/* implicit */int) (unsigned short)64134))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */short) (-((+(((/* implicit */int) (unsigned short)65534))))));
                }
            } 
        } 
    } 
}
