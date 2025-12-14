/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95504
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) max((var_9), (var_9))))));
    var_11 = ((/* implicit */int) max((var_11), (1925438348)));
    var_12 = ((((/* implicit */_Bool) (((+(((/* implicit */int) var_8)))) * (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57476))) / (-5639109732792293267LL))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_1] = 4294967294U;
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_2 [i_0] [i_1]))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_1] [i_1] [(unsigned short)1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_14 [(unsigned char)9] [i_1] [(unsigned short)10] [i_3] [i_3] [(unsigned char)12] [i_0 + 2])) ? (((/* implicit */int) arr_5 [i_1] [i_2] [i_4 - 1])) : (((/* implicit */int) (short)-4029)))) : (((int) (unsigned char)100))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0 + 3])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_1]))))) ? (((((var_5) + (2147483647))) >> (((((/* implicit */int) (signed char)-97)) + (113))))) : (((/* implicit */int) (unsigned char)153))))));
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) arr_12 [i_2] [i_1] [4] [4] [i_1]))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_1])) <= (((/* implicit */int) var_2))))))))));
                                var_14 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_4 + 1] [i_1] [i_4 + 1] [i_1])))))) : (274877898752LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (arr_3 [i_0] [i_1]))))) | (arr_9 [i_1] [i_1] [i_1] [i_3] [i_4] [i_0 - 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
