/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56073
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) (signed char)21)))) : (max((((/* implicit */int) var_12)), (min((var_13), (((/* implicit */int) (signed char)-21))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (3382910022U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))))))))))));
                var_16 ^= ((/* implicit */short) arr_0 [i_0]);
                arr_4 [i_0 + 3] [i_0] = ((/* implicit */unsigned short) 3317385928064067617LL);
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) min(((-(arr_2 [i_0] [i_1]))), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : ((-(arr_2 [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-48))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_8 [i_3] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (((long long int) arr_14 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 3]))));
                                arr_16 [i_2] [i_2] = (-(3962708760U));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_9 [i_0] [i_0] [i_0 - 1])))) ? (((((/* implicit */_Bool) (short)-20711)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)28672)))))));
                                var_19 = ((/* implicit */signed char) ((min((((/* implicit */long long int) (signed char)93)), (((((/* implicit */_Bool) (unsigned char)128)) ? (-1LL) : (-6387854392665909592LL))))) & (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0 + 4])) - ((-(((/* implicit */int) (unsigned char)170)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
