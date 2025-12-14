/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86367
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
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (short)-512))));
        arr_2 [i_0] = ((/* implicit */unsigned char) min((max((arr_0 [i_0 + 1] [i_0 + 1]), ((short)31895))), (max((var_10), (arr_0 [i_0 - 1] [i_0 - 1])))));
        var_16 = ((/* implicit */short) (+(((/* implicit */int) var_13))));
    }
    for (short i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min(((short)-32754), (((/* implicit */short) (unsigned char)255))))) ? (((((/* implicit */int) arr_0 [i_1] [i_1])) - (((/* implicit */int) var_11)))) : (((((/* implicit */int) (short)-1)) - (((/* implicit */int) (short)-10588))))))));
        arr_6 [i_1] [(short)10] &= ((/* implicit */short) (unsigned char)152);
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_17 += ((/* implicit */unsigned char) max((((/* implicit */int) arr_8 [i_2])), ((-((-(((/* implicit */int) (unsigned char)234))))))));
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_2])), (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_8 [(short)12])) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), ((unsigned char)82))))))) : (max((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_13)))), (((/* implicit */int) (unsigned char)130))))));
        arr_9 [(short)8] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)82)) ^ (((/* implicit */int) (short)-20483)))), (((/* implicit */int) arr_7 [i_2] [i_2]))));
        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (min(((~(((/* implicit */int) arr_7 [i_2] [i_2])))), (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) max((arr_0 [i_2] [(short)1]), ((short)-350))))));
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3] [(short)1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) min((var_7), (arr_11 [i_3] [i_3])))) | (((/* implicit */int) var_4)))))));
        arr_13 [(unsigned char)14] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [(unsigned char)4]))));
        arr_14 [(unsigned char)1] [i_3] = ((/* implicit */unsigned char) arr_0 [i_3] [i_3]);
        var_20 += (short)3284;
    }
    var_21 = ((/* implicit */short) ((unsigned char) var_12));
    var_22 = ((/* implicit */short) var_13);
    var_23 *= ((/* implicit */short) max((((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (unsigned char)82))))) << (((((((/* implicit */int) var_13)) % (((/* implicit */int) var_6)))) - (63))))), (((/* implicit */int) var_4))));
}
