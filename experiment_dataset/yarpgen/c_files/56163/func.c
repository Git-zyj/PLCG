/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56163
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
    var_16 = max(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_13))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) (short)30418))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_14)))) : (min((var_14), (var_6)))))));
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_5)))))), (min((((/* implicit */unsigned long long int) var_3)), (max((11217996530562655227ULL), (((/* implicit */unsigned long long int) 2631285143U))))))));
    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1663682153U)) ? (((3285258313118191412LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_3)))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26405)))))) ^ (((long long int) 140737488355327LL))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */short) ((_Bool) max((((/* implicit */long long int) 187241982U)), (-3285258313118191412LL))));
                                var_20 = ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1663682152U)) ^ (max((((/* implicit */long long int) var_15)), (((3551658894295738301LL) << (((((/* implicit */int) (signed char)69)) - (68)))))))));
                    arr_13 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((_Bool) ((arr_3 [i_0 + 2] [(unsigned char)19] [i_0 + 3]) << ((((+(var_13))) - (12195662901514037959ULL))))));
                }
            } 
        } 
    } 
}
