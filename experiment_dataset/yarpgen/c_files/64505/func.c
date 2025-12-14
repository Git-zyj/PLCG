/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64505
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) >= ((((+(var_14))) ^ (((((/* implicit */int) (short)6344)) % (((/* implicit */int) var_7))))))));
    var_16 -= min((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-29667))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (_Bool)1))))));
                arr_8 [i_0] [i_1] [16LL] |= ((/* implicit */long long int) arr_3 [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-32759), (((/* implicit */short) (_Bool)1)))))) : (max((((/* implicit */long long int) arr_0 [i_0])), (var_10)))))) ? (max((arr_2 [i_0] [i_0]), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) >= (arr_1 [i_3])))))) : (((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) var_7)), (var_13)))) <= (6070549663312191832LL))))));
                            var_19 = ((/* implicit */unsigned short) 390027153711618474LL);
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0]);
                                arr_18 [i_0] [i_1] [i_4] [i_3] [i_1] = ((/* implicit */signed char) arr_15 [i_0] [i_1] [i_1] [i_0] [i_4] [i_4]);
                                var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_1]) % (((/* implicit */unsigned int) max((arr_14 [i_2]), (var_14))))))) ? (((2097144U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_0])))) ? (min((arr_2 [i_4] [i_0]), (((/* implicit */int) var_9)))) : ((~(var_13))))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned short) ((signed char) (-(var_1))));
                                var_22 -= ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned short)11698)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_3]))) & (arr_11 [i_0] [i_1] [i_2] [i_2] [i_5])))));
                                var_23 ^= ((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2]);
                                var_24 = ((/* implicit */long long int) 660204462U);
                            }
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) max((var_25), (arr_7 [i_0] [15LL] [i_0])));
                arr_22 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((_Bool) (~(((-9223372036854775804LL) % (var_11))))));
            }
        } 
    } 
}
