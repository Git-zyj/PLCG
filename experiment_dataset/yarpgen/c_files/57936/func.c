/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57936
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
    var_12 &= ((_Bool) var_7);
    var_13 = ((/* implicit */_Bool) (short)-29028);
    var_14 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((arr_1 [i_0]), (var_8))), (((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned int) var_4)), (arr_2 [(unsigned char)3]))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-33))))));
        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (arr_2 [i_0]) : (max((arr_2 [i_0]), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_2 [i_0])))) : ((-(max((((/* implicit */unsigned long long int) (short)-29028)), (0ULL)))))));
        var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (arr_2 [i_0]))), (((/* implicit */unsigned int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */_Bool) (unsigned short)40665)) ? (((/* implicit */int) (unsigned short)29822)) : (-1465926368))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned char)84)) ? (arr_5 [i_1]) : (arr_5 [i_1])))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))))) ? (((((/* implicit */int) arr_6 [i_1] [i_1])) + (((/* implicit */int) (short)(-32767 - 1))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))));
    }
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (13679421395281829828ULL)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))));
}
