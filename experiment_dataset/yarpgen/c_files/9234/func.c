/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9234
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
    var_10 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_3)) ? (2147221504U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)34)))))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((2182284554550107739LL) <= (((/* implicit */long long int) 1836647810U)))))) ? (((/* implicit */int) ((max((var_9), (((/* implicit */unsigned int) var_3)))) != (((/* implicit */unsigned int) (-(-9))))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))));
    var_12 = ((unsigned int) (!(((/* implicit */_Bool) ((signed char) var_0)))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [(signed char)4] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) & (((unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)2] [(unsigned char)2] [i_3])) ? (((/* implicit */int) var_7)) : (arr_1 [i_3]))))));
                            var_13 = ((/* implicit */_Bool) max((var_13), (((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_2] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [(unsigned char)0] [i_2] [(_Bool)1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_1] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_5))))))));
                            arr_10 [(short)8] [i_2] [i_2] |= ((/* implicit */signed char) ((((_Bool) ((((/* implicit */int) arr_5 [6U] [(unsigned short)3] [(unsigned short)3])) <= (((/* implicit */int) arr_4 [i_3] [i_1] [(signed char)8]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (var_6)))))) : (((long long int) (~(((/* implicit */int) var_4)))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) (~(((long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)206)))))));
}
