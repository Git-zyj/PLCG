/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56200
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
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned short) (short)1))) ? (((-7898709861225166671LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)210)))))), (((/* implicit */long long int) min((((/* implicit */int) var_2)), ((-(((/* implicit */int) (unsigned char)161)))))))));
                            var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64213)) || (((/* implicit */_Bool) ((-557566296) + (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (unsigned short)41827)) : (((/* implicit */int) (short)26837)))))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))), (960227938U)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((unsigned int) 9713617992749726436ULL))))), (var_7))))));
}
