/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6846
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) min((var_8), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
    var_11 ^= ((/* implicit */unsigned short) ((var_6) << ((((+(((/* implicit */int) ((unsigned char) 2581802064U))))) - (50)))));
    var_12 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((unsigned char) (~(((((/* implicit */int) var_4)) & (((/* implicit */int) var_1))))))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) min(((short)7511), (((/* implicit */short) (signed char)-64))))) : (((arr_0 [i_0]) ? (((/* implicit */int) (short)-11398)) : (((/* implicit */int) arr_2 [i_0]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */int) min((var_15), (max((((/* implicit */int) (unsigned short)17940)), (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (signed char)-100))))))));
                        var_16 |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */int) var_5)) % (((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_0])))) : (((/* implicit */int) (!((_Bool)1))))));
                        arr_13 [(signed char)11] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)10] [(short)10] [i_0]))))) < (((/* implicit */long long int) var_6))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [12LL] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
    }
}
