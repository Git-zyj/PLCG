/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67547
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
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_4)) == ((~((~(var_5)))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65520)) || (((/* implicit */_Bool) (unsigned char)128))))) & ((~(((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (signed char)-60))))))));
    var_18 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 432345564227567616ULL)) ? (-368380773) : (((/* implicit */int) (short)(-32767 - 1)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [(short)6] [i_2] = ((/* implicit */long long int) var_6);
                    arr_8 [i_0] [i_1] [i_2] [(short)15] |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)35840))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) min((1453920894), (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) arr_3 [i_0])))))));
                }
            } 
        } 
    } 
}
