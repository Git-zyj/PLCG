/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71140
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13482658984307095028ULL)) ? (4964085089402456587ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [4LL] [i_3] [i_3] [i_3] |= ((/* implicit */int) max((((((/* implicit */_Bool) var_5)) ? (((long long int) var_7)) : (((/* implicit */long long int) (-(((/* implicit */int) var_12))))))), (((/* implicit */long long int) var_11))));
                                arr_15 [i_0] [i_0] [i_2] [5LL] [i_4] = arr_9 [i_0] [i_0] [i_0] [i_0];
                                arr_16 [i_3] [0ULL] [i_2] [i_1] [i_3] &= ((/* implicit */long long int) 13482658984307095028ULL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 *= ((/* implicit */_Bool) max(((-(((13482658984307095028ULL) - (18446744073709551601ULL))))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)6394)))) + (((/* implicit */int) var_8)))))));
}
