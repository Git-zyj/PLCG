/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84937
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
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_17), (var_10)))) ? (((((/* implicit */int) (unsigned char)213)) | (((/* implicit */int) var_17)))) : (((/* implicit */int) (unsigned char)42)))) | (((/* implicit */int) (unsigned char)197))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)20])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)191))))) ? (((((/* implicit */int) (unsigned char)51)) * (((/* implicit */int) (unsigned char)61)))) : (((/* implicit */int) (unsigned char)21))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_11))))) | (((unsigned long long int) var_3))))));
                            var_20 = ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) (unsigned char)29)))));
                                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((((/* implicit */_Bool) (unsigned char)194)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (unsigned char)32)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max(((unsigned char)233), ((unsigned char)2)))) != (((/* implicit */int) (unsigned char)61)))))) : (((unsigned long long int) (unsigned char)51)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (unsigned char)197))));
}
