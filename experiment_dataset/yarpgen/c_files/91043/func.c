/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91043
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) (((~(((/* implicit */int) arr_1 [i_0])))) | (((/* implicit */int) var_3))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_13 = ((/* implicit */_Bool) var_5);
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_14 = ((((((/* implicit */_Bool) min((var_5), (var_0)))) ? (((/* implicit */int) ((short) (short)40))) : (((/* implicit */int) ((unsigned short) (unsigned short)0))))) >= (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)4)) + (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) arr_3 [i_1] [i_1]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)57015)))))));
        arr_5 [i_1] = ((/* implicit */short) min((((/* implicit */int) ((((arr_3 [i_1] [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)9)))) < (((arr_3 [i_1] [i_1]) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))))), (min((((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (short)-19457)))), (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        var_15 ^= ((/* implicit */short) (unsigned char)75);
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_1] [i_1])), (var_7)))) ? (((/* implicit */int) ((unsigned char) arr_3 [(short)16] [i_1]))) : (((/* implicit */int) arr_3 [(short)17] [i_1]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_16 |= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (unsigned short)65535)))))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned char) ((unsigned short) arr_0 [(short)14]))))));
            arr_10 [(short)5] [(short)5] = ((/* implicit */short) (_Bool)0);
        }
        for (short i_3 = 4; i_3 < 17; i_3 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min(((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_1] [i_3 - 1] [i_3 - 2])), (var_11)))))), (((/* implicit */int) var_9)))))));
            var_19 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        }
    }
}
