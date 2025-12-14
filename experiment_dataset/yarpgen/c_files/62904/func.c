/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62904
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((unsigned int) 10U))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) ((unsigned short) (short)24454))) : ((+(((/* implicit */int) var_9)))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1 + 2] [i_1 - 1]))));
            arr_7 [i_0] &= ((/* implicit */unsigned char) var_6);
            arr_8 [i_0] [i_1 - 1] [i_0] |= (~(((/* implicit */int) (short)7516)));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) max(((+(((int) (_Bool)1)))), (((((((/* implicit */_Bool) arr_1 [i_0] [i_2])) || (((/* implicit */_Bool) 939524096)))) ? ((+(-939524097))) : (((/* implicit */int) arr_9 [i_0]))))));
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned int) max((arr_1 [i_0] [i_2]), (arr_1 [i_0] [i_0])))))));
            var_18 = ((/* implicit */int) var_12);
            arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_3 [i_2] [18U]) <= (arr_3 [i_0] [i_2])))) >= (-1503750117)));
            var_19 *= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_11 [i_0] [i_2])) & (((/* implicit */int) arr_11 [i_0] [i_2])))), (((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1])) ? (arr_3 [i_0] [(short)2]) : (((/* implicit */int) var_9))))));
        }
        arr_13 [i_0] [i_0] = arr_10 [10ULL] [10ULL];
    }
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((min((var_7), (((/* implicit */long long int) var_13)))) & (((/* implicit */long long int) ((int) 939524070)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) : (((/* implicit */int) var_5)))))));
    var_21 += (short)-30065;
}
