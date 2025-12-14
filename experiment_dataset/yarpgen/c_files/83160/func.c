/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83160
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_4)))))) ? ((~(((/* implicit */int) max((((/* implicit */short) var_7)), (var_5)))))) : (((/* implicit */int) ((short) ((int) var_11))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_4 - 1] [(short)5] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) var_6);
                                arr_14 [i_0] [(short)3] [i_2] [9ULL] [(unsigned char)9] [(unsigned short)18] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((short) 2706811703U))) + (2147483647))) << (((((((/* implicit */int) var_3)) + (87))) - (3)))));
                                var_13 = ((/* implicit */unsigned char) (-(((unsigned int) var_12))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)237)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)46441)), (var_11)))))) || (((/* implicit */_Bool) ((35184372088831LL) ^ (max((((/* implicit */long long int) var_10)), (35184372088841LL))))))));
                arr_16 [15LL] = ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) var_12))));
}
