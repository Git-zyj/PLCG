/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73065
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
    var_19 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_11))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (+((((_Bool)0) ? (max((arr_10 [i_0 - 2] [i_1] [i_2] [i_3] [i_4]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [9LL] [16U] [4U] [i_0] [i_0 - 3]))))))))));
                                arr_12 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) -1037746143333038459LL);
                                arr_13 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned int) var_3))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((arr_8 [i_0 - 3] [i_0 - 3] [i_1] [21LL] [(unsigned short)20]), (var_2))))));
                    arr_14 [i_0] [17U] = ((/* implicit */long long int) var_17);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_10);
}
