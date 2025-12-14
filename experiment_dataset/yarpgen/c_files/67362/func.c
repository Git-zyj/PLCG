/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67362
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
    var_12 = ((/* implicit */unsigned short) ((unsigned char) (_Bool)0));
    var_13 = var_11;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_14 |= arr_2 [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (((~(((3015682778238056160ULL) & (((/* implicit */unsigned long long int) var_11)))))) < (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-12550)))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3015682778238056160ULL))))) : (((/* implicit */int) arr_3 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_9 [(unsigned char)8] = arr_0 [i_1] [i_1];
        var_15 = ((((/* implicit */int) var_8)) << (((/* implicit */int) ((((((/* implicit */int) var_8)) | (((/* implicit */int) arr_7 [i_1] [i_1])))) <= (((/* implicit */int) ((unsigned char) arr_7 [i_1] [i_1])))))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), (min((var_6), (((/* implicit */unsigned char) arr_8 [i_1] [i_1]))))));
        var_16 = ((((/* implicit */_Bool) arr_1 [i_1])) ? (3605784943996276114LL) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
    {
        arr_13 [11LL] [i_2] = ((/* implicit */_Bool) (short)-12523);
        var_17 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)37)) ? (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned long long int) arr_11 [i_2])) : (2259655029352829711ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_2] [i_2]))))))));
    }
}
