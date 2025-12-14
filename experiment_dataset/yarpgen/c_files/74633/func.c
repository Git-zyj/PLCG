/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74633
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
    var_11 = ((/* implicit */int) min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((var_3) ? (((/* implicit */unsigned int) var_1)) : (var_8)))))), (((/* implicit */long long int) min((min((var_0), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) min((var_3), (var_2))))));
                            arr_8 [(signed char)10] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) var_3);
                            var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_5)))) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)-4730))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_0), (var_8)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))), (max(((-(var_5))), (((var_4) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))))) ? ((~(max((((/* implicit */unsigned int) var_3)), (var_8))))) : (((/* implicit */unsigned int) var_1))));
}
