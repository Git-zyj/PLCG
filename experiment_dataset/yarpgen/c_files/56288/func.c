/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56288
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [(_Bool)1]), (arr_0 [(unsigned short)0])))) ? (max((arr_0 [4ULL]), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [4])))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_5 [i_3] [i_0] [i_0] [i_0]))))) << (min((((/* implicit */long long int) arr_8 [i_0 - 2])), (((-2097152LL) & (((/* implicit */long long int) arr_1 [i_0]))))))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((max((arr_3 [i_0 - 1]), (((/* implicit */unsigned int) var_5)))) == (arr_3 [i_0 - 1])));
                        var_21 -= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (signed char)-34)) ? (8861550466559859216ULL) : (((/* implicit */unsigned long long int) arr_0 [i_2])))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_3]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_0 [i_3])))))) : (((unsigned int) var_3))));
                    }
                } 
            } 
            arr_12 [i_1] &= var_15;
        }
        arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(3233514316U)))) * (min((-2097156LL), (((((/* implicit */long long int) arr_2 [i_0 - 1] [i_0] [i_0])) / (arr_0 [i_0])))))));
    }
    var_22 = ((/* implicit */unsigned short) (-(((max((9585193607149692399ULL), (((/* implicit */unsigned long long int) 2097151LL)))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_8)))))))));
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_18))));
    var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) -2097152LL))))))))))));
}
