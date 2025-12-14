/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95769
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_11 = ((/* implicit */signed char) var_9);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned char) ((var_9) >= (var_6)));
                        arr_13 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */short) var_4);
                    }
                }
                for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    var_13 = ((/* implicit */long long int) ((((((/* implicit */int) var_4)) - (((/* implicit */int) var_3)))) - (((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                    var_14 |= ((/* implicit */signed char) var_7);
                    var_15 &= ((/* implicit */short) ((((/* implicit */int) ((1958370526U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)7231)))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_3) && (((/* implicit */_Bool) var_9)))))) >= (((1958370513U) ^ (31U))))))));
                    arr_16 [16] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-28609)) ^ (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                    var_16 *= ((/* implicit */short) var_6);
                }
                arr_17 [i_0] = ((/* implicit */unsigned int) var_2);
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_5);
    var_18 -= ((/* implicit */unsigned short) ((var_10) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_3)))))));
    var_19 = var_6;
    var_20 = ((/* implicit */long long int) ((var_9) >> (((((((/* implicit */int) var_5)) % (((/* implicit */int) var_8)))) - (87)))));
}
