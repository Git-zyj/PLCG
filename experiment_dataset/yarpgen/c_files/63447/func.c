/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63447
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((((int) var_11)) >> (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) + (0U))))) : (((/* implicit */int) (signed char)0))));
                var_14 = ((/* implicit */int) min((var_14), ((~(((/* implicit */int) min(((unsigned char)131), (((/* implicit */unsigned char) ((867891344U) > (arr_3 [i_0] [i_1])))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))))));
                            arr_11 [(_Bool)1] = ((/* implicit */_Bool) ((((unsigned int) arr_7 [i_0] [i_0] [i_2] [i_3])) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2] [i_3])) ? (arr_7 [i_3] [i_2] [i_1] [i_0]) : (var_11))))));
                            var_16 = var_12;
                            var_17 = ((/* implicit */_Bool) arr_2 [i_0]);
                        }
                    } 
                } 
                var_18 &= ((/* implicit */int) (((~(min((var_1), (((/* implicit */unsigned int) var_11)))))) * (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_6)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) (-(((unsigned int) (signed char)0))));
    var_20 = ((/* implicit */unsigned short) var_6);
}
