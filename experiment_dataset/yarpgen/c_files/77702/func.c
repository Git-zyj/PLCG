/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77702
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
    var_18 ^= ((((((1009959112) >> (((/* implicit */int) var_15)))) == (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) ((-1009959112) - (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (((((/* implicit */unsigned long long int) var_4)) - (18446744073709551599ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
    var_19 = ((/* implicit */long long int) (~(((unsigned long long int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_15)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_20 *= ((/* implicit */unsigned int) arr_0 [i_0]);
        var_21 = ((/* implicit */short) ((signed char) (unsigned char)149));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_22 = (~(((/* implicit */int) arr_2 [i_1])));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)103)) >> (((arr_3 [i_0]) - (7857089243336357996ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((~(arr_3 [i_1]))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1]))))) : (arr_6 [i_1] [i_0])));
            var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) (unsigned char)149)))))));
        }
        var_25 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)149))));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)65535));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223301668110598144ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))) : (max((((/* implicit */unsigned long long int) arr_9 [i_2])), (9223442405598953472ULL))))))));
    }
}
