/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60070
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
    var_11 = ((/* implicit */signed char) var_2);
    var_12 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)23897)), (((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) max(((unsigned char)23), ((unsigned char)190)))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_1] &= ((/* implicit */signed char) min(((~(((/* implicit */int) arr_1 [i_2])))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)160))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-20)) && (((/* implicit */_Bool) arr_1 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0])) >= (((/* implicit */int) var_4)))))))));
                            arr_11 [i_1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
                        }
                    } 
                } 
                var_14 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)188)) >= ((~(((/* implicit */int) max(((unsigned char)12), (((/* implicit */unsigned char) (signed char)-20)))))))));
            }
        } 
    } 
    var_15 = var_6;
}
