/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84555
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
    var_12 = ((/* implicit */int) var_10);
    var_13 = ((/* implicit */_Bool) max((min((var_9), (((/* implicit */unsigned long long int) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((var_9) - (1665367030028306613ULL)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> ((((~(var_3))) - (2325659195U)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_11 [5U] [5U] [i_1] [i_3 - 1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_9)))) ? (min((((/* implicit */unsigned int) var_4)), (min((var_7), (var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((short) var_4))))))));
                            var_14 = ((/* implicit */int) var_6);
                            var_15 = ((/* implicit */unsigned int) var_11);
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_1)))) ? (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_10))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((max((var_5), (((/* implicit */unsigned int) var_0)))), ((+(var_7)))))), (min((((/* implicit */unsigned long long int) ((var_3) << (((((/* implicit */int) var_2)) + (1357)))))), (var_9)))));
                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(var_4)))) + (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_11))))))) ? (max((((/* implicit */unsigned int) var_8)), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            }
        } 
    } 
    var_19 = (!(((/* implicit */_Bool) max((max((var_3), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((unsigned char) var_4)))))));
    var_20 = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))));
}
