/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57379
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) && (var_18)))) >> (12)));
    var_20 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) min((min((arr_0 [i_0]), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_4)), (arr_3 [i_0] [i_0])))))), (var_14)));
                var_21 = ((/* implicit */long long int) (~((+(((/* implicit */int) max((((/* implicit */short) var_11)), (arr_1 [i_0]))))))));
                arr_5 [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_7)) <= ((-(((/* implicit */int) var_11)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_22 = var_2;
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_3 + 1] [i_3 - 2] [(_Bool)1]))))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) (unsigned short)12);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_11);
}
