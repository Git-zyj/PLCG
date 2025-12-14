/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83403
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
    var_15 -= ((/* implicit */signed char) ((((/* implicit */int) (short)-5145)) >= (((/* implicit */int) (unsigned char)215))));
    var_16 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */unsigned int) min((var_4), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_13)) : (7576025056367396496ULL))) < (min((((/* implicit */unsigned long long int) 0)), (18430415466114683916ULL))))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [(short)9])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (var_3) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) : (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-35))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)50030)))), (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) : (10870719017342155119ULL))))) : (((((/* implicit */_Bool) (signed char)-21)) ? (((10870719017342155094ULL) >> (((arr_3 [i_1] [(unsigned char)0] [i_1]) + (1597301752))))) : (16328607594867692ULL)))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (-1902118567)))) ? (((-1560955132) ^ (((/* implicit */int) (unsigned short)15505)))) : ((~(var_3))))))));
    var_21 = ((/* implicit */unsigned long long int) 1865612417);
}
