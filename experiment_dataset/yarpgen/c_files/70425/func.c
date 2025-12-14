/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70425
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-115)), (1171718399U)));
                    var_17 = ((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)41)) ^ (((/* implicit */int) (signed char)41)))) << (((min((arr_0 [i_1]), (((/* implicit */unsigned int) arr_7 [i_0] [i_1])))) - (60U)))))) | (arr_0 [i_0]));
                    var_18 &= ((/* implicit */long long int) arr_1 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4 + 1] [i_4 + 3] = ((/* implicit */short) max((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (short)27602)) && (((/* implicit */_Bool) arr_2 [i_0])))))), (arr_8 [i_0] [i_4 + 4])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_6);
}
