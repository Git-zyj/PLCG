/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56888
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
    var_12 = ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_9))))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_8)));
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */long long int) var_2)) ^ (((((/* implicit */_Bool) 1424626870)) ? ((~(5705668765135009277LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)36703))))))))))));
    var_14 += ((/* implicit */unsigned short) (((((~(((/* implicit */int) var_10)))) == ((~(-983899716))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 8711168377728132074LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))));
    var_15 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) var_5)), (((((-3110180730549160060LL) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [10ULL])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-96)))))))));
                    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)70)) ^ (((/* implicit */int) ((((/* implicit */_Bool) 17ULL)) || (((/* implicit */_Bool) arr_6 [i_0])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */int) ((((((/* implicit */int) var_3)) - (((/* implicit */int) var_8)))) < (((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3658522753U)))))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((357868464U) == (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)36698))))))))) == (481036337152ULL)));
                                var_20 |= ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
