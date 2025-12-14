/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81833
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
    var_12 = ((/* implicit */int) var_5);
    var_13 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), (4161536ULL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 ^= ((/* implicit */unsigned char) var_3);
                            arr_10 [i_2] = ((/* implicit */unsigned int) min(((~(2291370572343374490ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) == (arr_1 [i_2 - 1]))))));
                            var_15 = min(((+(((((/* implicit */unsigned long long int) var_6)) | (18446744073705390068ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_2 - 3])) : (var_11)))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */unsigned int) ((_Bool) max((arr_6 [i_0] [i_1] [i_1]), (var_6))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_2);
}
