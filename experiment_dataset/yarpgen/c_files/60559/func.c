/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60559
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
    var_13 = ((/* implicit */long long int) (unsigned char)175);
    var_14 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned char)89)) != (((/* implicit */int) (unsigned short)34289)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((var_6) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-15)) : (((/* implicit */int) (signed char)-112))))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_7))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (short)-6852);
        var_17 = ((/* implicit */unsigned int) var_5);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */long long int) var_7);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned char i_3 = 3; i_3 < 9; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((unsigned char) var_6));
                        var_20 = ((/* implicit */signed char) ((arr_8 [i_1] [i_2] [i_1] [i_4]) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34301)) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)121)), (var_4)))) : (2211129259U)))));
                        var_21 = ((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) (unsigned char)77)), (min((-1LL), (((/* implicit */long long int) (_Bool)0)))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (-4599224883101398467LL)))) ? (((/* implicit */unsigned long long int) 4599224883101398466LL)) : (10049694925372129178ULL)))));
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_15 [i_5] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 1LL)) ? (var_12) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-114)) || (((/* implicit */_Bool) arr_14 [(unsigned char)4])))))))));
        var_23 &= ((/* implicit */unsigned char) max((((((/* implicit */int) ((unsigned char) (short)-16))) > (((/* implicit */int) (signed char)-47)))), (((arr_14 [i_5]) == (((/* implicit */unsigned long long int) ((unsigned int) 10ULL)))))));
        var_24 = max(((~(-7LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (_Bool)0))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
    }
}
