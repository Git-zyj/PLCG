/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84822
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_10 *= ((/* implicit */unsigned int) 982776823);
        var_11 = ((/* implicit */_Bool) (~(2564624497070044626ULL)));
    }
    var_12 = (!(((/* implicit */_Bool) (signed char)16)));
    /* LoopSeq 4 */
    for (unsigned int i_1 = 4; i_1 < 8; i_1 += 2) 
    {
        var_13 = ((/* implicit */signed char) (~(29213464)));
        arr_4 [i_1] = (~(((/* implicit */int) (unsigned char)146)));
        var_14 += ((/* implicit */int) (+(3091130671U)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_15 += (+(((/* implicit */int) (unsigned char)84)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            arr_10 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))));
            arr_11 [i_2] [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
        }
        arr_12 [i_2] = ((/* implicit */signed char) -975474893);
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_15 [i_4] = (+((+(((/* implicit */int) (signed char)55)))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)89))))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(558303659U))))));
        arr_19 [i_5] = ((/* implicit */unsigned char) 10732007797144419628ULL);
    }
}
