/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72415
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
    var_17 -= ((/* implicit */short) min(((-(var_11))), (((long long int) ((var_7) + (var_6))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [16LL] [i_0] = ((/* implicit */unsigned long long int) (~(-1765516923121069936LL)));
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    arr_8 [i_0] [(short)5] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) - (arr_0 [i_0 + 1])));
                    var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) var_5)) % ((~(-1765516923121069935LL)))))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (unsigned char)223))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 3; i_3 < 15; i_3 += 2) 
                {
                    var_20 *= ((/* implicit */signed char) ((unsigned short) var_16));
                    arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
                }
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (short)27582))));
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_4]);
                    arr_17 [i_0] [16LL] &= ((/* implicit */unsigned char) arr_0 [i_1 + 3]);
                }
                var_22 = ((/* implicit */unsigned char) ((unsigned int) (+(arr_2 [i_0]))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_11))));
    var_24 += ((int) (~(-1740965037)));
}
