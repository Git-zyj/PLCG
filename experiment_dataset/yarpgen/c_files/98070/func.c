/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98070
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
    var_13 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) ((unsigned char) min((-744408128254087945LL), (((/* implicit */long long int) var_2)))))) - (239)))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        var_14 = ((max((((/* implicit */unsigned long long int) (short)3876)), (1046069486314650595ULL))) + (arr_1 [i_0] [i_0]));
        arr_4 [i_0] = ((((unsigned int) (short)-3875)) < (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))))));
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) >= (min((((((/* implicit */int) (unsigned short)65527)) * (((/* implicit */int) (short)3875)))), (((/* implicit */int) ((unsigned short) (unsigned char)138)))))));
    var_16 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            {
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) arr_8 [i_1] [i_2]));
                var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (arr_8 [i_1] [10])));
                var_18 = ((/* implicit */int) 4294967295U);
            }
        } 
    } 
}
