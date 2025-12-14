/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7251
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) max(((unsigned char)56), (((/* implicit */unsigned char) (signed char)(-127 - 1)))));
                            arr_10 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((int) (-(((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)56)))))));
                            arr_11 [i_0 + 1] [i_0 + 2] [i_0] [i_0] = ((/* implicit */short) min((max((0U), (1972196188U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_3 - 2])))))));
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 2322771117U)) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) : (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((unsigned short) arr_7 [i_3] [i_2] [i_0] [i_0]))))))));
                            var_18 |= ((/* implicit */int) (+(min((0ULL), (((/* implicit */unsigned long long int) var_13))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) max((1972196174U), (var_6)))) ? (max((var_6), (((/* implicit */unsigned int) (signed char)-121)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)56)), ((unsigned char)200))))))), (max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) (signed char)127)) ? (1183451497U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    var_21 = ((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-127)))))));
}
