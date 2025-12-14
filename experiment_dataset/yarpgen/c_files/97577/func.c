/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97577
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((arr_7 [i_2 + 2] [i_1] [i_2]) ^ (((/* implicit */int) (unsigned char)235)))) >= (((/* implicit */int) ((unsigned short) arr_7 [i_2 + 1] [i_1] [i_2])))));
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42891))) : (131071U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32975)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) var_0))));
}
