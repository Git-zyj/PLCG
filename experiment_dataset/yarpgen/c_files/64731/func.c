/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64731
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
    var_10 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_11 += 1332268905U;
                            var_12 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_2] [i_2] [i_2]) : (((131071U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)1881))))))));
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-12112))))) || (((((/* implicit */int) ((((/* implicit */int) (short)1881)) == (((/* implicit */int) (unsigned char)39))))) != (((/* implicit */int) ((_Bool) 914755770U)))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34))) : (488466410U))), (((/* implicit */unsigned int) min(((unsigned char)74), ((unsigned char)6))))));
            }
        } 
    } 
}
