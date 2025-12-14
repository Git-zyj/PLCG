/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94666
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_13))))), (var_14))) != (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) / (var_14))), (((/* implicit */unsigned long long int) var_3)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (arr_9 [i_2] [i_2])));
                                arr_12 [i_1] [i_1] [i_1] [i_3] [i_4] [3] = ((/* implicit */short) max((((/* implicit */int) arr_8 [i_1])), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [10LL])) ? (((/* implicit */int) arr_5 [i_3] [i_1] [i_0])) : (((/* implicit */int) var_9))))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_9 [11U] [11U]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) : (((((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_4 [i_0])))) ? (((/* implicit */int) arr_5 [3LL] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) 5745693803823235785LL);
    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((~(var_14)))));
}
