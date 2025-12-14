/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80984
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
    var_16 = max((((/* implicit */long long int) var_14)), (var_3));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_8))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_13))) ? (((/* implicit */unsigned long long int) (-(var_3)))) : (max((var_11), (((/* implicit */unsigned long long int) var_14))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(var_5))))));
                    var_20 = var_8;
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) var_1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) : (((unsigned long long int) var_13))))));
                        arr_14 [i_0] [i_0 - 3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((max((var_13), (var_1))), (((/* implicit */short) max(((_Bool)1), ((_Bool)0))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 1914045050864642025ULL)) ? (((/* implicit */int) (short)7055)) : (((/* implicit */int) (short)-7050)))), (((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_18 [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_2))));
                        arr_19 [i_6] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_7);
                    }
                }
            } 
        } 
    } 
}
