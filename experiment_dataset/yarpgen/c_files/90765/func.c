/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90765
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
    var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) 341001716)) ? (((((/* implicit */int) (short)26482)) / (((/* implicit */int) (signed char)-54)))) : (((((/* implicit */_Bool) var_14)) ? (var_3) : (-341001711)))));
    var_18 &= ((/* implicit */_Bool) var_9);
    var_19 = ((/* implicit */unsigned short) ((var_2) || (((/* implicit */_Bool) (~((~(((/* implicit */int) var_14)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (~(2448166680U)));
                var_21 = ((/* implicit */unsigned short) arr_0 [i_0]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0 - 1]);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-509563685)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3328894471U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_2);
}
