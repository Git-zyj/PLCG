/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64187
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
    var_17 = ((/* implicit */short) min((((long long int) (_Bool)0)), (((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)1)))))))));
    var_18 ^= ((/* implicit */short) (+(((((((/* implicit */int) (short)-29961)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_19 = arr_0 [i_0];
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))), (4721740944947319634LL))))));
                        arr_13 [i_0] = (_Bool)1;
                        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 1] [i_0])) == (((/* implicit */int) ((((((((/* implicit */int) (short)-19201)) + (2147483647))) >> (((/* implicit */int) (unsigned short)0)))) == (((/* implicit */int) max((((/* implicit */unsigned short) (short)-29949)), ((unsigned short)23518)))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_22 += ((/* implicit */long long int) ((((/* implicit */int) (short)32745)) & (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                        arr_17 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 33538048))));
                        var_23 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)23518)), (((3267112632727622680LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43250)))))));
                    }
                }
            } 
        } 
    } 
}
