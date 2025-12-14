/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89257
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((var_3), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-55355317) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65509)) << (((/* implicit */int) (signed char)9)))))))))))));
    var_21 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))));
    var_22 = ((/* implicit */unsigned long long int) (((~(max((((/* implicit */long long int) (unsigned char)16)), (var_16))))) >= (((/* implicit */long long int) (-(max((var_7), (var_6))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4230054184U))));
        var_26 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (4587083968612240570ULL)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 422212465065984ULL)) && (((/* implicit */_Bool) arr_1 [i_0])))) || (((var_19) || (((/* implicit */_Bool) var_13))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            var_27 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_14))))));
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_7 [i_2 - 1]);
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            var_28 = ((/* implicit */short) var_8);
            var_29 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) || (((/* implicit */_Bool) var_6))))) / (((/* implicit */int) (short)-8192))));
        }
        var_30 = ((/* implicit */int) (_Bool)1);
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(arr_7 [(signed char)1])))) ? (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_4 [i_1]))))) : (arr_3 [i_1] [i_1]))), (((/* implicit */unsigned long long int) (_Bool)0)))))));
        var_32 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_15)) ? ((-(4362361816428697697ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [8U])) || (((/* implicit */_Bool) arr_7 [i_1]))))))))));
    }
    var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)6))));
}
