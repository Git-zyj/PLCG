/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62126
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(signed char)16] [i_0] = ((((/* implicit */_Bool) (-((-(var_4)))))) ? (730782854177496566LL) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned short) (unsigned char)248)), ((unsigned short)10155))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_3)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (unsigned short i_3 = 3; i_3 < 16; i_3 += 1) 
        {
            {
                var_14 ^= ((/* implicit */signed char) ((short) min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9))))), ((+(((/* implicit */int) var_7)))))));
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_18 [i_2] [i_4] [2ULL] [i_2] = ((/* implicit */short) (_Bool)0);
                            arr_19 [i_2] [(signed char)12] [(signed char)12] [i_5] [i_4 + 2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((-(3819888269U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4))))));
                            var_15 = ((/* implicit */short) var_2);
                            var_16 ^= ((/* implicit */long long int) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 *= (!(((/* implicit */_Bool) min((((/* implicit */int) (short)-19662)), (117440512)))));
}
