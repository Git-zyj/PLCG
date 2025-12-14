/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79025
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
    var_16 = ((/* implicit */unsigned long long int) min((-1323495432), (((/* implicit */int) (short)-7972))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_17 *= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_0 + 3])) ^ (((/* implicit */int) (short)-7969)))) / (((/* implicit */int) arr_5 [i_0 - 2]))));
                            var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-6307748131219971245LL), (((/* implicit */long long int) arr_11 [i_0 + 1] [i_1 + 2]))))) ? (((/* implicit */int) max(((unsigned char)119), (((/* implicit */unsigned char) ((arr_1 [i_0 - 1]) || (((/* implicit */_Bool) var_3)))))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0 + 1])) < (((/* implicit */int) arr_0 [i_0] [i_0 + 1])))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_1 - 2] [i_2] [i_0 + 1] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) (short)7979)))))) || (((/* implicit */_Bool) ((((390898547U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)11925))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-19346)) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 3] [i_2])) : (var_13)))))))));
                        }
                    } 
                } 
                arr_13 [(unsigned short)5] [i_0] [i_1] = ((/* implicit */long long int) var_2);
            }
        } 
    } 
}
