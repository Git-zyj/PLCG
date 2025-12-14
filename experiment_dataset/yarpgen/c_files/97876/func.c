/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97876
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
    var_15 = ((/* implicit */short) (+(var_5)));
    var_16 -= ((/* implicit */short) -321538007);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */short) ((var_9) - (((/* implicit */long long int) 13))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_4] [i_2] [i_3] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) / (((arr_12 [i_0] [0U] [i_2]) - (((/* implicit */long long int) 28)))))));
                                var_17 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 28)) ? (((/* implicit */int) (signed char)3)) : (-13))) % (39)));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(short)9] [i_0] [i_0])) || (((/* implicit */_Bool) 27)))) || (((/* implicit */_Bool) ((unsigned short) var_14)))))) - (((((/* implicit */_Bool) (~(arr_12 [i_2] [i_3] [i_4])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
