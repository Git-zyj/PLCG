/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86998
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
    var_14 |= ((/* implicit */short) var_12);
    var_15 = var_3;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0 + 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_0))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-109)), (arr_4 [i_1] [i_1])))) ? (((/* implicit */int) ((arr_8 [i_0 + 2] [i_2] [i_3] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203)))))) : (((/* implicit */int) (signed char)-109))))));
                                var_16 = ((/* implicit */unsigned int) arr_5 [i_1]);
                                arr_15 [6LL] [i_1] [i_3] |= (unsigned char)84;
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */int) 428632943U);
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), (var_2)))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_0 - 1]))))))))));
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned int) var_1);
}
