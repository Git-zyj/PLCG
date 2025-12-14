/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58067
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) var_1))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) != (-2093791554))))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_1] [i_2] [(unsigned short)9] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 1])) : (((/* implicit */int) (unsigned char)185)))))));
                        arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1] [i_2] [i_1])))) ? (((/* implicit */int) arr_6 [i_1] [2LL] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)30))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 + 2])) * (((/* implicit */int) arr_2 [i_0 + 2])))))));
                        arr_13 [i_3] [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */int) arr_3 [i_0 + 2] [i_0] [i_0 - 2])) == (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 - 2])));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-11018)) & (((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2] [i_0] [i_1]))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_1))));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [(signed char)0] [i_1])) ? (((/* implicit */int) arr_2 [5U])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_0 + 1] [i_0])))) % (((((/* implicit */_Bool) (short)-11011)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (unsigned char)244)))))))));
        }
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)250)) ^ (((/* implicit */int) (signed char)-93)))))));
    }
    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) << (((((/* implicit */int) arr_14 [9U])) - (96)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_16 [(signed char)18])) ^ (((/* implicit */int) arr_15 [i_4])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)234)) ^ (((/* implicit */int) (_Bool)0)))))))))))));
        var_29 = ((/* implicit */unsigned char) min((max((3741871211U), (((/* implicit */unsigned int) (unsigned char)250)))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_15 [i_4])) - (((/* implicit */int) (unsigned char)244)))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_14 [i_4])))))))));
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) min((((/* implicit */long long int) var_13)), (((((((/* implicit */_Bool) var_1)) ? (-5800808998561981797LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) & (var_7))))))));
        var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) + (((/* implicit */int) arr_16 [i_4]))))) ? (((/* implicit */int) min(((unsigned char)33), (((/* implicit */unsigned char) (signed char)105))))) : (var_8)));
    }
}
