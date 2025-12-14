/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63398
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
    var_19 = ((/* implicit */unsigned char) var_3);
    var_20 = ((/* implicit */unsigned char) ((((unsigned int) (unsigned short)21073)) < ((+(((((/* implicit */_Bool) (unsigned short)21073)) ? (1069547520U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */short) min((((unsigned long long int) arr_0 [i_1 - 1] [i_1 - 1])), (((/* implicit */unsigned long long int) min((arr_0 [i_1 - 1] [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 - 1]))))));
                arr_6 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned short)21073))))))) <= (((((/* implicit */_Bool) var_14)) ? (281406257233920LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (281406257233898LL)))) ? (((/* implicit */int) arr_9 [(unsigned char)15] [i_2 - 1] [8U] [8U])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2 - 1] [i_2 - 1] [(unsigned short)2]))))))))));
                            var_23 *= ((/* implicit */_Bool) var_11);
                        }
                    } 
                } 
                arr_11 [16LL] [4LL] [(signed char)0] |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_10 [9U] [(unsigned short)7] [(unsigned char)13] [9U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44471))) : (4294967295U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12534)))));
            }
        } 
    } 
}
