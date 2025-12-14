/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70297
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
    var_15 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (((var_2) + (((/* implicit */long long int) var_12))))))), (((((/* implicit */int) var_11)) / ((((_Bool)1) ? (((/* implicit */int) (short)8260)) : (((/* implicit */int) var_5))))))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))))))));
    var_17 += var_11;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_2)))) ? (((/* implicit */int) ((8493000737123708661LL) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-10896)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (4294967295U)))) || (((/* implicit */_Bool) arr_3 [i_0])))))));
            var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_2 [i_0] [i_1] [2U])) / (var_9)))) || (((/* implicit */_Bool) ((long long int) arr_0 [i_0]))))))));
            var_19 = ((/* implicit */_Bool) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) ^ (var_6))) == ((~(1719377720U))))) ? (((arr_2 [i_0] [i_0] [i_1]) / (arr_2 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_20 += ((/* implicit */unsigned int) var_9);
            arr_8 [i_2] [i_2] [i_0] = ((/* implicit */_Bool) 873831684U);
        }
        /* vectorizable */
        for (short i_3 = 4; i_3 < 14; i_3 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */long long int) arr_2 [(_Bool)1] [i_3 + 1] [i_3]);
            var_21 = ((/* implicit */unsigned int) arr_1 [i_3]);
            var_22 += 23U;
        }
    }
    for (unsigned int i_4 = 2; i_4 < 20; i_4 += 3) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */short) arr_13 [i_4 + 1]);
        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_4]))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_4] [i_4 - 2])))))));
    }
}
