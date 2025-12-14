/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95213
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) var_9);
                arr_7 [i_1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_10 [i_1] [i_0 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
                    var_16 = ((/* implicit */_Bool) var_1);
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    var_17 += ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                }
                for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    arr_16 [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
                    var_19 -= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (long long int i_6 = 4; i_6 < 9; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            var_21 -= ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_4))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_15);
    var_23 = ((/* implicit */int) var_5);
}
