/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7682
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)5141)) * (((/* implicit */int) arr_7 [i_0] [(short)3] [20U] [20U]))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)11281)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))) : (-1LL))))))));
                            var_15 -= ((/* implicit */unsigned short) ((long long int) 8LL));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 14943190946834034319ULL)) ? (min((-1152921504606846976LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-3269)))))));
                arr_9 [i_1] = ((/* implicit */short) -1LL);
                var_17 &= ((/* implicit */short) -812242755162534378LL);
            }
        } 
    } 
    var_18 = ((/* implicit */short) (~(-8LL)));
    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 1LL)) ? (-2737083617387942067LL) : (9LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (~(1363776711)))), (((4294967295U) & (3946498235U))))))));
}
