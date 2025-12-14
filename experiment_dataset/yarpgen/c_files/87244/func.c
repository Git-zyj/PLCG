/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87244
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) min((arr_4 [i_1 + 1] [i_1]), (((/* implicit */unsigned char) arr_1 [i_2 + 1] [i_2 + 2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_1] [i_2] [i_3 - 1] [i_4]))))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_9)))));
                                var_13 = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) (short)12))) - (341738753696740196LL)))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (-((+((~(((/* implicit */int) arr_9 [i_0] [i_1] [11LL] [i_3] [i_4])))))))))));
                                arr_13 [i_0] [i_1] [(unsigned char)4] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) max((arr_9 [i_0] [i_1] [i_4] [i_3 + 2] [(signed char)11]), (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])))) : (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_1] [i_2] = max((((short) arr_9 [i_2] [i_2 - 1] [i_1 - 1] [i_1] [i_1 - 2])), (((/* implicit */short) ((unsigned char) var_2))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)12)))))) : (((/* implicit */int) var_7))));
    var_16 = ((/* implicit */unsigned char) ((unsigned int) (signed char)106));
}
