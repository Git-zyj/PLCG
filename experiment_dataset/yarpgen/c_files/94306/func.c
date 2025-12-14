/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94306
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
    var_16 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (min((var_5), (((/* implicit */long long int) var_8)))) : (((((/* implicit */_Bool) var_14)) ? (281474842492928LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 = var_6;
                var_18 = ((/* implicit */short) var_2);
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_9))))))));
                            arr_10 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_9 [i_1 - 3] [(unsigned char)6] [(unsigned char)6] [(signed char)2] [i_1]);
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_20 &= ((/* implicit */unsigned char) var_4);
                                var_21 = ((/* implicit */unsigned int) max((var_21), (max((((/* implicit */unsigned int) ((unsigned char) var_13))), ((-(var_7)))))));
                            }
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned char) ((((_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
