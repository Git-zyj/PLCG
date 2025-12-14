/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57732
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
    var_12 += ((/* implicit */unsigned short) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) (short)32767))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)35049)) >> (((((/* implicit */int) arr_3 [i_0] [i_1])) - (43)))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))), (arr_2 [i_0] [i_2]))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)35049)) >> (((((((/* implicit */int) arr_3 [i_0] [i_1])) - (43))) + (90)))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))), (arr_2 [i_0] [i_2])))))));
                    var_13 = ((/* implicit */unsigned char) (signed char)-122);
                }
            } 
        } 
    } 
}
