/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56485
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [(unsigned char)8] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_0 [i_0] [i_0])))) * (((/* implicit */int) ((((/* implicit */int) (short)-25545)) == (2010897413))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((+((-(2010897413))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19888))))));
        arr_4 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_7 [(signed char)8] [(signed char)8] |= ((/* implicit */signed char) (-(((unsigned int) arr_0 [i_0] [i_1]))));
            arr_8 [i_0] [(signed char)16] |= ((/* implicit */short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2492)))))))));
            arr_9 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (626388210)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((unsigned char) (short)-8144))))), (((/* implicit */int) (unsigned char)175))));
            arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (((-((-(((/* implicit */int) var_8)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_11 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_2])) : (2010897413)))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_12 [i_2] [i_2]))) ? (((((/* implicit */int) arr_12 [i_2] [i_2])) % (((/* implicit */int) arr_11 [i_2])))) : ((+(((/* implicit */int) var_1))))));
        arr_13 [(signed char)17] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_12 [i_2] [i_2])) < (((/* implicit */int) arr_12 [i_2] [i_2]))))));
    }
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_0)), (var_9)))) ? (((/* implicit */int) var_0)) : (min((var_7), (((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) var_0))))))));
}
