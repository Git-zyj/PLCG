/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7585
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
    var_16 |= ((/* implicit */_Bool) var_7);
    var_17 *= ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] = ((/* implicit */short) max((arr_4 [i_2] [i_0]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
                            var_18 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_0 [i_0])), ((-(arr_8 [i_2] [i_1 + 2] [(unsigned short)7]))))), (((/* implicit */unsigned int) ((unsigned short) arr_1 [i_0] [i_0])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) max((var_19), ((-(((/* implicit */int) ((((/* implicit */int) max((var_10), (var_9)))) > (((/* implicit */int) max((((/* implicit */short) var_4)), (arr_1 [i_0] [(_Bool)1])))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned int) ((((/* implicit */int) (signed char)90)) | ((-(1549802580)))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_0)))), (((int) var_15))))) ? (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))), ((-(((/* implicit */int) var_13)))))) : (((/* implicit */int) var_14))));
}
