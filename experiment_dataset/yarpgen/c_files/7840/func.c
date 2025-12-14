/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7840
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
    var_20 *= ((/* implicit */unsigned char) (((-(((/* implicit */int) var_14)))) % (((/* implicit */int) ((max((var_18), (((/* implicit */long long int) var_0)))) != (((/* implicit */long long int) var_9)))))));
    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_12)))));
    var_22 += ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-554)))) - (min((3436859112U), (((/* implicit */unsigned int) var_15)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_14))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_2 [i_0] [i_1]))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1])))))) || (((/* implicit */_Bool) arr_6 [i_1] [i_0]))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30504)))))) : (arr_2 [i_0] [i_0]))))));
            arr_7 [i_1] = ((/* implicit */long long int) arr_1 [i_0]);
            arr_8 [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) arr_4 [i_0]));
        }
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            arr_11 [i_0] [i_0] [i_0] |= ((/* implicit */short) ((unsigned short) arr_10 [(unsigned char)6] [i_2 - 1] [i_0]));
            var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [(unsigned short)10] [i_2] [i_2])))) ? (((((/* implicit */int) var_1)) >> (((((/* implicit */int) (short)30503)) - (30479))))) : (((/* implicit */int) arr_5 [i_2] [i_2 - 1] [i_2 + 2]))));
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 + 2])))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_28 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_0 [(short)4] [i_0]))))));
            arr_14 [i_3] = arr_12 [(short)3];
            var_29 *= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_2 [(short)9] [i_0])) && (((/* implicit */_Bool) (unsigned short)61303))))));
            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_3]))));
            arr_15 [(short)9] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_5 [i_0] [i_3] [(unsigned short)9]))))) ? (((/* implicit */int) arr_6 [1LL] [i_3])) : (((/* implicit */int) arr_0 [i_0] [i_3]))));
        }
        var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)2694))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_9)))))))) || (((/* implicit */_Bool) (+(arr_4 [i_0]))))));
    }
}
