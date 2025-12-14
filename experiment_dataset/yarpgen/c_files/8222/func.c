/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8222
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
    var_11 = ((/* implicit */unsigned short) var_5);
    var_12 = ((/* implicit */_Bool) var_7);
    var_13 = var_8;
    var_14 -= ((/* implicit */unsigned short) ((signed char) 93862954U));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)106)) >= (((/* implicit */int) (unsigned short)17280))));
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)10)) + (((/* implicit */int) arr_0 [i_0 + 2])))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)-27474)), ((unsigned short)11069))))));
    }
    for (int i_1 = 3; i_1 < 13; i_1 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((min((61440ULL), (((/* implicit */unsigned long long int) (unsigned char)201)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-113)), ((unsigned short)11075))))));
        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11059))) <= (0ULL))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) == (15872U)))) >= (((/* implicit */int) arr_1 [i_1 - 1]))))));
        var_19 = ((/* implicit */unsigned int) ((_Bool) (unsigned short)0));
        arr_5 [i_1] |= ((((/* implicit */_Bool) arr_4 [i_1])) ? ((~(((((/* implicit */_Bool) (unsigned short)62880)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) arr_0 [i_1])))))) : ((+(((((/* implicit */_Bool) (short)31744)) ? (((/* implicit */int) (unsigned short)52018)) : (((/* implicit */int) arr_1 [i_1])))))));
    }
}
