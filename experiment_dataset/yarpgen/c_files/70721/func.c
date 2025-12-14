/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70721
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
    var_17 = var_16;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_13))) || (((/* implicit */_Bool) var_12))))) > (((/* implicit */int) ((((7976637557518397714ULL) | (((/* implicit */unsigned long long int) 3055867249U)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27132))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_0] [i_2 + 2] [i_3] &= var_15;
                            var_19 = ((/* implicit */short) ((((/* implicit */int) var_11)) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) << (((((/* implicit */int) var_3)) - (50)))))) < (((((/* implicit */unsigned long long int) var_9)) | (var_2))))))));
                            arr_15 [i_0 - 2] [i_1] [i_1] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)29584)) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) var_9))), (min((((/* implicit */unsigned short) (signed char)106)), ((unsigned short)43904)))))) : (((/* implicit */int) var_6))));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)-29585), (((/* implicit */short) (unsigned char)35))))) ? (((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)39)) | (((/* implicit */int) var_16)))), (((((/* implicit */int) var_0)) - (((/* implicit */int) var_11))))))) : (((var_7) * (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
            }
        } 
    } 
}
