/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97426
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
    var_17 = var_4;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (short)-1)) | (-1))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */long long int) max((arr_0 [i_0] [i_1]), ((unsigned short)65535)));
            var_18 -= ((/* implicit */unsigned char) max((((/* implicit */int) min(((!(var_3))), (((-1) > (((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) var_11)) ? (((((-1) + (2147483647))) << (((((-1) + (4))) - (3))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned char)115)))))))));
            var_19 = ((/* implicit */unsigned short) -1);
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_1 [i_0] [i_2]))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) 887466027U);
        }
        arr_9 [i_0] = ((/* implicit */unsigned short) var_14);
    }
    var_21 = var_13;
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15686)) ? (((/* implicit */unsigned long long int) 1)) : (1ULL)));
    var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_9)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_3))) + (4892256383374272445LL))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-1677)) + (2147483647))) << (((((/* implicit */int) var_3)) - (1)))))))))));
}
