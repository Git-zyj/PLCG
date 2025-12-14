/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88614
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
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0 - 4] [i_0 - 4] [i_0] [(signed char)3] = ((/* implicit */unsigned int) var_3);
                            var_10 ^= ((((/* implicit */_Bool) (unsigned short)12)) ? (var_2) : (((/* implicit */long long int) (((-(((/* implicit */int) var_7)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                            var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) max((((int) ((short) arr_5 [i_1] [i_3] [i_3]))), (((/* implicit */int) (unsigned char)107)))))));
                        }
                    } 
                } 
                arr_10 [i_0] [(unsigned short)9] = ((signed char) ((((/* implicit */_Bool) max((496), (-496)))) ? (((int) arr_1 [i_0] [i_0])) : (((/* implicit */int) min((var_3), (((/* implicit */short) arr_5 [i_0] [i_0] [i_0])))))));
                var_12 = ((/* implicit */signed char) arr_7 [i_0 + 1] [i_0] [i_0 + 1] [(signed char)5] [i_1]);
            }
        } 
    } 
    var_13 = max((((/* implicit */int) var_4)), (((((496) >= (-497))) ? ((-(((/* implicit */int) (unsigned char)255)))) : ((~(((/* implicit */int) var_4)))))));
}
