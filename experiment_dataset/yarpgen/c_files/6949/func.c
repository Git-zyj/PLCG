/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6949
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)149)) + (((/* implicit */int) (_Bool)1))))), (min((3815398748269455143ULL), (((/* implicit */unsigned long long int) var_4)))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_6 [i_0] [i_0] [i_0] [i_0])))) ^ (((/* implicit */int) var_1)))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) ^ (((/* implicit */int) max((((/* implicit */unsigned char) var_15)), (arr_0 [i_0])))))) & (((((/* implicit */_Bool) ((short) (short)-27410))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0])))))))));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) var_8))), (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (3576218571U)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (short)-32760))))) * (max((((/* implicit */unsigned long long int) var_0)), (var_13))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-4))))))))));
}
