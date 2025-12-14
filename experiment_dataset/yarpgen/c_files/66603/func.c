/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66603
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
    var_11 = (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9892))) + (576460752303423486ULL)))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (signed char)0)))))));
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_5))))) / (((/* implicit */int) var_4)))) / (((/* implicit */int) (unsigned short)26683))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) (~(17870283321406128112ULL)));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_14 = ((/* implicit */short) (((!(((((/* implicit */int) var_0)) > (2147483643))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)9899)) ? (((/* implicit */int) var_4)) : (var_1))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)9899)) : (8191)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (2147483647)))) ? (max((576460752303423503ULL), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)9899)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [i_3] [i_0] [i_3] [(unsigned char)8] [i_0] [(unsigned char)11])) : (((/* implicit */int) arr_8 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */unsigned long long int) -2147483629)) | (576460752303423486ULL))))) > (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [(short)6] [i_1] [(short)6] [(short)6] [i_0] [(unsigned short)9])))))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((((2147483625) - (((/* implicit */int) (unsigned char)8)))), (arr_12 [i_0] [i_1] [(unsigned short)19] [(signed char)19] [i_3])))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_0] [i_0] [i_0])))))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)9899)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2373816))))) : ((+((-(((/* implicit */int) arr_8 [i_1])))))))))));
                            var_18 += ((/* implicit */short) arr_7 [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
