/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78272
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
    var_15 = ((/* implicit */int) var_13);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) max((-1LL), (((/* implicit */long long int) arr_3 [i_1] [i_1] [i_0]))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((min((((/* implicit */int) arr_3 [7LL] [i_1] [7LL])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_0 - 1])))))) < (((/* implicit */int) var_14))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((4294967295U), (4294967295U)))) || (((/* implicit */_Bool) ((int) 4294967295U))))))) - (min((10U), (1U))))))));
                                var_19 = ((/* implicit */long long int) arr_12 [i_4] [(unsigned char)5] [i_2] [i_3]);
                                arr_13 [2U] [6U] [2U] [i_4] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_4] [i_3])), (4294967295U)))) ? (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0]))) : (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) ((unsigned char) arr_7 [i_3] [i_3] [i_3] [i_3]))))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                                var_20 = ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((3716945601U) % (3088141724U))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
