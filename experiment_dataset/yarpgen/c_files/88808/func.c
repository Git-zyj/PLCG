/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88808
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
    var_12 = ((/* implicit */unsigned char) (((((-(var_2))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_9)) ? (((353428491U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) max((var_8), (((/* implicit */int) (unsigned char)76))))))) - (353420515U)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) max((min((3941538805U), (1879048192U))), (((/* implicit */unsigned int) var_8))))), (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)91)))))) : (arr_1 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_14 [i_0] [i_2 + 1] [i_1] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) & (((/* implicit */int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                        var_13 = ((/* implicit */int) ((unsigned char) arr_11 [15ULL] [i_2] [i_2] [i_2] [i_2] [(unsigned short)14]));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) (short)7373))))) - (((((/* implicit */long long int) arr_2 [i_0])) - (min((-7020617151636317647LL), (((/* implicit */long long int) var_11))))))));
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_10 [i_0] [i_0]), (arr_10 [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) : (2415919104U)))) ? (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) == (((/* implicit */int) var_10)))))))) : (((/* implicit */unsigned int) max((((/* implicit */int) min((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) var_5))))), (((((/* implicit */int) arr_10 [(signed char)3] [(signed char)3])) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) - (135))))))))));
        var_15 = (_Bool)1;
    }
    /* vectorizable */
    for (short i_4 = 1; i_4 < 24; i_4 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) arr_16 [2ULL] [(_Bool)1]))) % (var_9))))));
        var_17 = ((/* implicit */long long int) ((arr_16 [i_4] [(_Bool)1]) << (((((/* implicit */int) (short)32752)) - (32750)))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32764))) : (arr_16 [i_4] [i_4 - 1])));
    }
    for (short i_5 = 1; i_5 < 24; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned int) (~(((var_3) | (535822336U))))));
        arr_21 [i_5] &= var_8;
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_17 [2] [2]))));
    }
    for (unsigned int i_6 = 3; i_6 < 18; i_6 += 2) 
    {
        arr_24 [i_6] [i_6] = ((/* implicit */short) (+(((long long int) arr_12 [(unsigned short)15] [i_6] [i_6] [i_6] [i_6] [i_6]))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-44)) > (((/* implicit */int) (short)-32764)))) ? ((+(2109933165U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_22 [i_6 + 2]) > (arr_22 [i_6 - 2]))))))))));
    }
    var_21 = ((/* implicit */unsigned int) var_9);
}
