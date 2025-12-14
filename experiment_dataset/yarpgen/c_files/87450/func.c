/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87450
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)105))))))) ? (((/* implicit */unsigned long long int) (+(arr_2 [i_1] [i_2] [i_3])))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)56))))), (arr_3 [i_0 - 1])))));
                            arr_8 [i_0] = ((((((((/* implicit */int) arr_6 [i_0])) > (((/* implicit */int) (unsigned char)56)))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6))))))) > ((((((~(((/* implicit */int) var_2)))) + (2147483647))) >> ((((~(((/* implicit */int) var_2)))) + (17621))))));
                        }
                    } 
                } 
                var_13 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), (arr_4 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_0] [i_1] [i_0])) | (((/* implicit */int) (unsigned char)181))))) ? ((+(3519347272U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
                var_14 = ((/* implicit */long long int) var_1);
            }
        } 
    } 
    var_15 = ((/* implicit */int) max((((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_11)))))))), (4393784853016414432LL)));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((var_8) << (((((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) : (-4393784853016414411LL))) - (32LL))))))));
}
