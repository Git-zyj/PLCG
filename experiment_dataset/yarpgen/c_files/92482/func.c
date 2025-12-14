/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92482
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
    var_18 -= ((/* implicit */short) ((unsigned char) (((~(((/* implicit */int) var_9)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    var_19 ^= ((/* implicit */int) ((unsigned long long int) var_4));
    var_20 = ((/* implicit */int) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) var_16))), (var_4))))) : (((unsigned int) var_6))));
    var_21 = ((/* implicit */unsigned char) (~(max((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_5))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [(short)11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -18LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))) : (-18LL)));
        var_22 = ((/* implicit */unsigned long long int) var_9);
        arr_4 [i_0] = ((/* implicit */unsigned char) (((!(arr_0 [4ULL] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((unsigned int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) min((4160598571U), (((/* implicit */unsigned int) (_Bool)1))));
        arr_8 [4] [10LL] = ((/* implicit */long long int) (-(((/* implicit */int) var_17))));
        arr_9 [i_1] = ((/* implicit */_Bool) var_1);
        var_23 = max((((/* implicit */int) ((((/* implicit */_Bool) ((int) var_3))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_1])) % (((/* implicit */int) arr_6 [i_1] [i_1])))))))), (((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) arr_2 [i_1])))));
        var_24 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_11)))), (((((/* implicit */int) var_0)) | (((/* implicit */int) arr_5 [i_1] [i_1]))))));
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_12 [(_Bool)1] = ((/* implicit */unsigned int) arr_10 [i_2]);
        var_25 += ((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_17)))));
        var_26 = ((/* implicit */short) max((var_26), ((short)21955)));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_4), ((unsigned char)90)))) ? (((int) var_8)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) (-(arr_11 [i_2] [(_Bool)1])))) ? ((-(((/* implicit */int) arr_2 [(unsigned char)12])))) : (((/* implicit */int) min((var_17), (((/* implicit */unsigned char) var_14))))))))))));
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_28 -= ((/* implicit */short) ((int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (4160598571U)))))));
        arr_17 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? ((~(((/* implicit */int) arr_13 [i_3])))) : (((/* implicit */int) ((signed char) max((arr_13 [i_3]), (((/* implicit */signed char) var_7))))))));
        arr_18 [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)19173))));
        var_29 = ((/* implicit */long long int) arr_16 [i_3] [i_3]);
    }
}
