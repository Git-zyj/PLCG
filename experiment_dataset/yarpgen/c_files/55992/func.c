/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55992
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
    var_12 = ((/* implicit */long long int) var_7);
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) var_8);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((int) (_Bool)1)))) != (((/* implicit */int) ((arr_2 [i_0 + 2] [i_0 - 1]) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)50))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (short)32767))));
        var_14 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0 - 2])) + (((/* implicit */int) arr_0 [i_0 + 1])))) / (((/* implicit */int) ((short) (unsigned char)30)))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)23));
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) 3U))))))))) * (max((((/* implicit */unsigned int) (unsigned char)243)), (525548268U)))));
        var_17 = ((/* implicit */unsigned int) arr_6 [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) min((((arr_7 [i_2]) / (arr_7 [(unsigned char)0]))), (((((/* implicit */_Bool) -9223372036854775797LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (-2251799813685248LL)))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1LL)))))));
                    var_20 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (9223372036854775801LL)));
                    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (short)14856))) >= (16777215LL))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)14838))) & (5204983693868269463LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_2] [(_Bool)1] [i_2])), ((unsigned short)28035)))))));
                }
            } 
        } 
        arr_17 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) << (((((/* implicit */int) (short)18754)) - (18739)))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_20 [(unsigned short)13] [i_5] = max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_19 [i_5 - 1])) ? (((/* implicit */int) (unsigned short)124)) : (((/* implicit */int) var_5)))));
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [(short)21])) ? (((/* implicit */int) (short)7663)) : (arr_19 [i_5 - 1])))), (9223372036854775795LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)124))) : (-4473222571907882198LL)));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((long long int) arr_19 [(_Bool)1]))))) ? (((((((/* implicit */_Bool) (signed char)0)) ? (1603023262763773184LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35051))))) - (((/* implicit */long long int) ((unsigned int) (unsigned char)114))))) : (((max((((/* implicit */long long int) (unsigned char)100)), (7999979014791671344LL))) ^ (var_8))))))));
    }
}
