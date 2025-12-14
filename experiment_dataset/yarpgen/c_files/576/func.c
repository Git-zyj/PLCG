/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/576
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))) | (((((/* implicit */_Bool) ((unsigned short) var_3))) ? (var_11) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))))));
    var_20 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (min((var_11), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0]))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((_Bool) min((var_5), (((/* implicit */int) (short)32766))))))));
                    var_22 |= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))) / (16327975384818917669ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 20; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_23 = var_18;
                arr_12 [i_3] [13ULL] [i_3] = ((/* implicit */unsigned short) ((unsigned int) (short)27865));
            }
        } 
    } 
    var_24 = var_3;
}
