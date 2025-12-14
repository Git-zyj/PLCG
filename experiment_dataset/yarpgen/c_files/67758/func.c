/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67758
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) max((2147483647), (((/* implicit */int) (short)11270))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_2 - 1] [8ULL] [i_0] = var_13;
                            var_15 += ((/* implicit */short) min((max((((/* implicit */unsigned long long int) var_4)), (var_14))), (((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_13))))));
                            arr_13 [i_0] [i_0] [7ULL] [i_2] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0] [i_1]), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) var_11))))), (min((var_13), (((/* implicit */unsigned long long int) arr_5 [i_0]))))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_8)))))) << ((((+(((/* implicit */int) (short)-11286)))) + (11304)))));
            }
        } 
    } 
    var_16 = var_14;
    var_17 = ((/* implicit */unsigned char) (+(min((min((((/* implicit */unsigned long long int) var_2)), (var_0))), (((/* implicit */unsigned long long int) ((unsigned char) var_11)))))));
}
