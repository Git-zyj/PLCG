/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56556
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned short) min((min((((/* implicit */short) (_Bool)0)), (var_4))), (((/* implicit */short) arr_10 [i_1] [16ULL] [i_0] [i_1]))))), (((unsigned short) (unsigned short)13725))));
                            arr_13 [i_0] [(unsigned char)16] [14] [i_1 + 1] [i_0] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51811))) < (max((max((var_5), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                            arr_14 [6U] [(unsigned short)14] [i_2] [i_2] [11ULL] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_6 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((short) var_9)))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_0] [4LL])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_0);
}
