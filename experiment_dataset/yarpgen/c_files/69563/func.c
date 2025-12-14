/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69563
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
    var_16 = ((/* implicit */int) var_14);
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((-4) >= (((/* implicit */int) var_12))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (min(((short)-31647), (((/* implicit */short) arr_1 [i_0])))))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4119730590U)) < (min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_1] [i_0])), (4119730609U))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) (~(1299404159U)));
                            var_21 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_3] [i_2])) ? (((/* implicit */int) arr_2 [i_3] [i_1] [i_2])) : (((/* implicit */int) arr_2 [i_1] [i_1] [i_1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
