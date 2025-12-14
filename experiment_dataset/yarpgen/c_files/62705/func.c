/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62705
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
    var_12 = ((/* implicit */short) ((var_1) ^ (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) ? ((-(((/* implicit */int) (signed char)-55)))) : (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)7)))))))));
    var_13 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) 21)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) var_4)))));
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (6809780217256729216LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [11U] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3220976681U)) ? (3072) : (((/* implicit */int) (_Bool)1))));
                arr_6 [i_1 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)17770)))) ? (((/* implicit */long long int) max((2523404061U), (((/* implicit */unsigned int) 2057351147))))) : (arr_2 [i_0] [i_0 + 2] [i_0])))) * (((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)123)))) ? (((/* implicit */unsigned long long int) -141859496515084331LL)) : (4224343436417023224ULL)))));
                arr_7 [i_0] [(unsigned short)13] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) >> (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2049)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (_Bool)1))))) : ((+(arr_0 [18U])))))));
            }
        } 
    } 
}
