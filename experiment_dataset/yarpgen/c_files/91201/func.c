/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91201
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_13)))) > (((((/* implicit */_Bool) max((2538126575U), (4077940808U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-3926596702730479842LL)))));
                    var_21 += var_9;
                    arr_7 [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((3260319812U), (((/* implicit */unsigned int) (unsigned char)124)))), (1034647504U)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131)))));
                    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((var_16), (((/* implicit */short) (unsigned char)210))))))) ? (217026490U) : (((/* implicit */unsigned int) ((int) var_7)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) (-(var_5)));
}
