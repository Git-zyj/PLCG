/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94774
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 ^= ((/* implicit */signed char) ((((18160162702652948607ULL) & (8331952241237850636ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))));
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((((arr_16 [i_4 - 1] [15ULL]) >> (((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_3))))) - (59))))), (((/* implicit */int) ((short) (~(((/* implicit */int) (_Bool)1))))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)59)) < (((/* implicit */int) (unsigned short)36742))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)96)) >= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 286581371056602993ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_15 [i_3] [i_3]), (((/* implicit */short) arr_17 [i_3])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (8331952241237850614ULL)))))));
            }
        } 
    } 
}
