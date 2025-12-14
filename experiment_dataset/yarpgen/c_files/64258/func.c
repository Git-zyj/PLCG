/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64258
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
    var_13 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)163))));
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1288524376))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((1288524375), (((/* implicit */int) (unsigned char)0))))) ? ((-(((/* implicit */int) (unsigned char)145)))) : (((/* implicit */int) (short)3864))));
                arr_5 [i_0] = ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0 + 1] [i_0 - 1]))) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) + (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)27315), ((unsigned short)25708)))) ? ((~(((/* implicit */int) (unsigned short)27323)))) : (((((/* implicit */int) var_3)) & (((/* implicit */int) var_3))))));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((var_10) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((arr_8 [i_2] [i_2] [0U] [i_2]) == (var_8)))) : (((((/* implicit */_Bool) arr_1 [i_3] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)252))))))))));
                            var_17 = ((/* implicit */unsigned short) (-(2475279382718033762LL)));
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */long long int) var_7);
                var_18 = ((/* implicit */unsigned short) (-((~(var_5)))));
            }
        } 
    } 
    var_19 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((unsigned char) var_7)))));
}
