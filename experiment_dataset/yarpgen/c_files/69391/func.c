/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69391
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_17 &= ((/* implicit */short) (((-(((/* implicit */int) (signed char)0)))) % (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) arr_9 [i_2])))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [(_Bool)1] [i_2]), (arr_7 [i_0] [i_2] [i_3] [i_2])))) ? (min((14120744373763767519ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (max((arr_7 [i_2] [i_2] [i_0] [i_2]), (arr_7 [i_1] [i_2] [i_3] [i_2])))));
                                arr_15 [i_2] = ((/* implicit */long long int) min(((+(arr_10 [i_0] [i_1] [i_1] [i_1] [i_0]))), (((/* implicit */unsigned int) var_10))));
                                var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) arr_7 [i_0] [(signed char)10] [i_2] [i_2]))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                                var_20 = ((/* implicit */signed char) ((unsigned long long int) arr_3 [18LL] [i_1]));
                            }
                        } 
                    } 
                    arr_16 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_13 [i_2] [i_2] [i_1] [i_1] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) min((arr_13 [i_0] [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned short) var_6)))))));
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned short) (+(min((((/* implicit */int) var_7)), (((var_15) ? (((/* implicit */int) (short)25372)) : (((/* implicit */int) var_12))))))));
    var_22 = ((/* implicit */unsigned int) var_10);
    var_23 = ((/* implicit */int) var_5);
    var_24 |= ((/* implicit */short) ((signed char) ((((((/* implicit */int) var_5)) + (((/* implicit */int) var_14)))) + (((/* implicit */int) var_14)))));
}
