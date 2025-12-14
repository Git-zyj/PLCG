/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92540
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
    var_13 = ((/* implicit */long long int) (unsigned short)8128);
    var_14 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) * (4611686018427387903ULL)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_15 += ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)8128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57408))) : (var_8))));
        var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)16))) % (((long long int) ((13835058055282163683ULL) | (((/* implicit */unsigned long long int) 1073741824U)))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (signed char)15)))) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_1 [i_0]))))))) >> (((-1) + (13)))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)(-32767 - 1)))))) ? (var_11) : ((+(((((/* implicit */int) (signed char)22)) * (((/* implicit */int) arr_6 [i_1]))))))));
        var_17 = ((/* implicit */signed char) ((((unsigned long long int) var_6)) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) * (max((67076096), (((/* implicit */int) (short)(-32767 - 1))))))))));
        arr_8 [i_1] &= ((/* implicit */short) arr_2 [i_1] [i_1]);
    }
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)56)))) & (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (signed char)0)))))))))));
}
