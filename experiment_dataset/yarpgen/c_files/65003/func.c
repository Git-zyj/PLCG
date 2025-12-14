/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65003
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((int) var_8));
        arr_3 [i_0 + 3] [i_0] = ((/* implicit */unsigned short) -7916387043569567306LL);
        var_16 *= ((/* implicit */int) ((((/* implicit */_Bool) 7916387043569567320LL)) && (((/* implicit */_Bool) (short)-1))));
    }
    for (signed char i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_6 [i_1 + 1]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)26718)) ? (arr_4 [i_1]) : (((/* implicit */int) (signed char)-127))))) : (arr_1 [i_1] [i_1 + 1])))) ? (arr_4 [i_1]) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) (signed char)-64)))))));
        var_18 = ((((/* implicit */_Bool) max((arr_4 [i_1]), (arr_4 [i_1 + 1])))) ? (((/* implicit */int) arr_5 [i_1])) : ((-((-(((/* implicit */int) (unsigned char)109)))))));
    }
    var_19 = ((/* implicit */short) (_Bool)1);
    var_20 = ((/* implicit */unsigned long long int) ((signed char) var_6));
}
