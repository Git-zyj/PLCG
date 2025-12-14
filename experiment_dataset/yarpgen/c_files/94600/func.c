/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94600
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
    var_18 ^= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9))))))), ((+(((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1]))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(arr_7 [4] [i_1 + 1] [i_2])))), ((+(((/* implicit */int) min(((short)22780), ((short)-22799))))))));
                    var_19 = ((/* implicit */unsigned int) arr_8 [i_0]);
                    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)22798))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) (-((-(1291050826)))));
                        var_22 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 - 2] [i_1])))))));
                        var_23 = (unsigned char)22;
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 17; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_0]))));
                        arr_16 [i_0] [i_0] = ((/* implicit */short) 1099511627775ULL);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((2418417394U), (((/* implicit */unsigned int) (short)-22800))));
}
