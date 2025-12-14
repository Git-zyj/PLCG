/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78089
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
    var_18 = ((/* implicit */unsigned short) max((151543629), (((/* implicit */int) (short)-32747))));
    var_19 = ((/* implicit */unsigned int) var_17);
    var_20 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) + (((/* implicit */long long int) var_7))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [17LL] [i_1] [i_2] [17LL] [i_3] [15LL] = ((/* implicit */unsigned long long int) ((signed char) (~(var_12))));
                                var_21 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_1)) ? (var_7) : (var_16))));
                                var_22 = ((/* implicit */unsigned long long int) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((long long int) (+(var_16)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) var_4);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    arr_22 [i_7] [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_15))))), (max((max((var_2), (var_5))), (min((var_2), (var_3)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        for (long long int i_9 = 1; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) < (((/* implicit */unsigned int) ((/* implicit */int) min((var_11), (var_11)))))));
                                var_25 = ((/* implicit */int) min((((((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_14))))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_2))))), (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
