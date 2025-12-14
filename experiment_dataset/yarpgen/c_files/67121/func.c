/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67121
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) 32767)) ? (((long long int) (signed char)-27)) : (2023820277176841620LL)));
    var_11 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_3))) == (var_0)));
    var_12 = var_9;
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((1048517696U), (1048517718U)))) ? (var_3) : (((/* implicit */long long int) ((1048517684U) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
        arr_4 [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3246449613U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-111)))))), (((((/* implicit */_Bool) (signed char)-43)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) min((var_9), (-5388314027944238659LL)))) ? (3246449608U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) var_0);
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                for (long long int i_4 = 2; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_14 = ((/* implicit */short) var_3);
                        var_15 *= ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) var_0)) ^ (var_7))) : (((5011683549544404187ULL) << (((var_3) - (2249690557347851692LL))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-114)) : (-1274897321)));
                        var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(unsigned char)5] [i_4 + 1] [i_3 + 1])) ? (-2337576278213568625LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_4 - 1] [i_3 + 1])))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) -32768)) ? (((/* implicit */int) arr_13 [i_1] [i_1])) : (((/* implicit */int) (short)-1217))))));
        var_19 += ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 1048517694U)) && (((/* implicit */_Bool) var_9)))))));
    }
}
