/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99282
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
    var_18 = ((/* implicit */short) var_16);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 6449407091830211632LL))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (var_9)))) ? (arr_2 [i_0]) : (((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (_Bool)1))))))));
                    arr_10 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_13))))) ? ((+(((/* implicit */int) (signed char)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -6449407091830211642LL))))))) ^ (((/* implicit */int) var_13))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_2] [i_2])) + ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)49719)) > (((/* implicit */int) (_Bool)1))))))))))));
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned char) min((arr_6 [i_4] [i_1]), ((-(((/* implicit */int) arr_0 [i_0] [i_4]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = var_17;
}
