/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97492
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_0))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_12 -= ((/* implicit */unsigned short) arr_1 [i_0]);
        var_13 = ((/* implicit */signed char) ((int) (signed char)96));
        var_14 = ((/* implicit */int) min((var_14), (((((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (unsigned char)144)))) + (2147483647))) << ((((((~(((/* implicit */int) arr_2 [6])))) + (9208))) - (16)))))));
        arr_3 [i_0 + 2] [6] = ((/* implicit */unsigned short) (signed char)-15);
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)108))))), (min((((/* implicit */unsigned int) (unsigned char)1)), (var_8)))));
        var_16 = ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)124))))) < (arr_6 [(signed char)6]))))) : ((+(((((/* implicit */_Bool) var_3)) ? (var_8) : (var_8))))));
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-70)) <= (((/* implicit */int) ((unsigned short) arr_8 [i_2] [i_2])))));
        arr_10 [i_2] = ((/* implicit */int) ((_Bool) ((_Bool) 18446744073709551609ULL)));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)124)), (arr_9 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (((arr_9 [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)103)))))))) ? (((/* implicit */int) ((unsigned short) (+(-1142017638))))) : (((/* implicit */int) arr_8 [(unsigned short)18] [(unsigned short)20]))));
        var_18 = ((/* implicit */unsigned int) (signed char)-96);
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_19 = var_7;
        var_20 = ((/* implicit */unsigned char) ((signed char) ((short) min((((/* implicit */int) var_3)), (arr_5 [i_3])))));
    }
    var_21 += ((/* implicit */int) ((short) ((int) var_3)));
}
