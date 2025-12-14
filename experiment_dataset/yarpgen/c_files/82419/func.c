/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82419
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) var_3);
                var_13 = ((/* implicit */short) -478559478);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) var_6);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((arr_6 [i_3] [i_2] [i_1 - 2] [i_0]) != (((/* implicit */int) var_0)))) || (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_6 [i_4] [i_3] [i_0] [i_0]))))));
                                arr_15 [i_4] [i_1 + 1] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */short) var_8);
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 - 1] [i_2 + 1])) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_3]))))));
                            }
                            var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((arr_10 [i_3] [(unsigned short)15] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [(unsigned char)10] [i_0] [i_0] [(short)3])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)110), ((signed char)-109))))))) : (((/* implicit */int) var_5))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) var_6))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)35659)) >> (0U)))) * (((((/* implicit */_Bool) (unsigned short)37440)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12130))) : (15139372206245101487ULL)))))));
}
