/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95534
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
    var_11 = ((/* implicit */signed char) (-(var_4)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_2] [i_1] = arr_9 [i_0] [i_0] [i_0] [(unsigned short)18];
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)1962)) << (((((/* implicit */int) ((unsigned short) var_6))) - (40717))))))))));
                        }
                    } 
                } 
                arr_15 [i_1] = max(((~(((/* implicit */int) ((var_1) > (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-222821855)))))));
                arr_16 [i_1] [i_1 - 1] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) arr_4 [i_1] [i_1 - 2])), (var_8))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 + 1])))));
            }
        } 
    } 
}
