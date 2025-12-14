/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5546
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
    var_17 = ((/* implicit */unsigned long long int) max((((int) var_11)), (var_10)));
    var_18 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_16)))) && (((/* implicit */_Bool) var_6))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_10 [i_0] = var_10;
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_4] [i_0]))))))) ? (((/* implicit */unsigned int) arr_1 [i_0] [i_1])) : (arr_8 [i_1] [i_1] [i_0] [i_4])));
                                var_20 = ((((/* implicit */_Bool) ((arr_3 [i_0 - 1] [i_0 - 1]) - (((arr_3 [i_0] [i_1]) - (9300279455138837337ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : ((-(max((var_11), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_3])))))));
                                arr_16 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((arr_4 [i_0]) < ((-(((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) arr_5 [i_4] [i_2])) : (((((/* implicit */_Bool) (~(arr_5 [i_0] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? (((/* implicit */int) (short)7509)) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [i_3])))) : (min((var_11), (((/* implicit */unsigned long long int) arr_9 [i_0]))))))));
                                var_21 = ((/* implicit */short) (~(((/* implicit */int) min(((short)7509), ((short)7521))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) var_16);
                }
            } 
        } 
    } 
}
