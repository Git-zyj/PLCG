/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83523
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((max((((/* implicit */int) (short)32767)), (-133676995))) >> (((/* implicit */int) var_9))))) - (((((/* implicit */_Bool) ((133676995) >> (((/* implicit */int) var_5))))) ? (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-8140145859043189193LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)62544))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_0 [i_0 - 4])))), (max((((((/* implicit */int) var_5)) + (((/* implicit */int) arr_2 [2U] [i_1])))), (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (((-(arr_7 [i_3] [i_3 - 1] [i_2 - 1] [i_1]))) | ((~(arr_7 [i_3] [i_3 + 1] [i_2 - 1] [i_0]))))))));
                            arr_10 [i_0] [i_0] [i_2] [i_2] [i_1] = ((max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3])))), (((/* implicit */int) min((arr_0 [i_0]), (arr_5 [(short)8] [(short)8] [i_2 - 1] [i_2 - 1])))))) % ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1209)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-((~(((/* implicit */int) arr_1 [i_0 - 1])))))))));
            }
        } 
    } 
}
