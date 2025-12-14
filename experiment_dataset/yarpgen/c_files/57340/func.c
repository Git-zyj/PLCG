/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57340
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */short) ((((/* implicit */int) var_6)) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30238)))))));
                                var_12 += ((/* implicit */_Bool) (((~(1244044695181906466LL))) | (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (unsigned char)0)))))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */signed char) 4063232);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) min((((int) var_3)), (((/* implicit */int) (unsigned char)0))))) : ((+(min((((/* implicit */unsigned int) var_1)), (1284292148U)))))));
    var_15 = ((/* implicit */signed char) (~((+(min((-1), (((/* implicit */int) (signed char)-64))))))));
    var_16 ^= ((/* implicit */short) (+(((max((1244044695181906466LL), (((/* implicit */long long int) (short)-471)))) % (((/* implicit */long long int) ((((/* implicit */_Bool) 1244044695181906461LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))))));
}
