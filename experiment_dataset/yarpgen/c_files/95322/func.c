/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95322
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_10 -= ((/* implicit */long long int) (((+(((/* implicit */int) arr_4 [i_1 - 1])))) <= (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)0))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_11 ^= ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_8 [i_1 - 1] [i_2 - 1] [i_2 - 1])))));
                            var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((var_8) / (arr_9 [i_0] [i_2] [i_2 - 1] [i_1 - 1])))), (((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1804207839U)))));
                            var_13 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_2)))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_8))));
                var_15 = ((/* implicit */unsigned long long int) min((arr_11 [i_1 - 2] [i_0] [i_1 + 1] [i_1] [i_0] [i_1 - 2]), (((arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))));
                var_16 *= ((/* implicit */_Bool) (~((~(var_7)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3570496040996090664ULL))) < (((/* implicit */unsigned long long int) var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) (_Bool)0)))))) : (var_8))))));
    var_18 = ((/* implicit */signed char) ((((_Bool) ((unsigned long long int) var_1))) ? ((+((-(var_8))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (var_5))))));
}
