/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89241
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
    var_15 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) 1578181203)))))) ? (((/* implicit */int) var_0)) : (max((min((var_9), (((/* implicit */int) var_3)))), ((+(((/* implicit */int) (unsigned short)60066))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((var_5) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!((_Bool)0)))))))));
                                arr_15 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned int) (+(2147483647)))) < (1065353216U))) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_7 [10LL] [i_1 + 1]))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1 + 1]);
                arr_16 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) & ((~(var_4)))))));
            }
        } 
    } 
}
