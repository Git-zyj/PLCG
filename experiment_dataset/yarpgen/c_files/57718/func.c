/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57718
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
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */int) ((7279410384515592917ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) == (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) var_4))))))), (var_5)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 &= ((/* implicit */unsigned short) ((long long int) max((((/* implicit */int) arr_0 [i_0] [i_0])), ((~(((/* implicit */int) (unsigned short)65535)))))));
        var_14 -= ((/* implicit */short) max((((long long int) ((unsigned short) (signed char)1))), (((/* implicit */long long int) ((short) (short)32767)))));
        var_15 ^= ((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */int) arr_2 [(unsigned short)11])) < (((/* implicit */int) (short)24904))))) & (((/* implicit */int) (short)-24904)))), (((/* implicit */int) ((arr_1 [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) (signed char)0))))))))));
        var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)16)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12321))) : (arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) | (((/* implicit */unsigned long long int) -6936363399798404119LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))) : (arr_1 [i_0] [1LL])))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) var_8))))));
        var_17 = ((/* implicit */short) arr_5 [i_1] [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)211)) + (((/* implicit */int) (unsigned short)7587))));
        var_18 |= ((signed char) ((((/* implicit */int) arr_3 [(signed char)14])) == (((/* implicit */int) var_11))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) ((((-6936363399798404119LL) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))))) + (6936363399798404118LL)));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2])) < (((/* implicit */int) arr_9 [i_2]))));
        arr_12 [i_2] = arr_9 [i_2];
        var_19 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)63878))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-73))));
    }
}
