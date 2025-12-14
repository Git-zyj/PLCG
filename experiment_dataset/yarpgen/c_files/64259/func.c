/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64259
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_6 [i_1] [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63703))) : (3097907411U)))) & (-9030167140589892668LL))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 - 1] [i_1] [i_4] [i_3] = ((/* implicit */long long int) arr_7 [i_0] [i_1]);
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (((+(((/* implicit */int) arr_10 [20] [i_0] [i_0] [i_2 - 1] [i_3] [i_4])))) * (min((((/* implicit */int) ((signed char) arr_3 [i_0]))), (((var_9) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_3] [i_4] [8U])) : (((/* implicit */int) arr_10 [i_0] [(signed char)12] [i_0] [i_0] [i_0] [i_0])))))))))));
                                var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) & ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((452854883U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)1647)))))) : (((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
                                arr_15 [i_1] = ((/* implicit */unsigned int) (unsigned short)0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 18; i_5 += 1) 
    {
        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */long long int) 7207970354793225510ULL);
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)188)) - (((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_16)))))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_2 [i_5]))) ? (((int) (_Bool)1)) : ((-(((/* implicit */int) var_16)))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) (_Bool)1))))))));
                var_24 = ((/* implicit */unsigned short) max((11238773718916326106ULL), (((/* implicit */unsigned long long int) 3097907411U))));
            }
        } 
    } 
}
