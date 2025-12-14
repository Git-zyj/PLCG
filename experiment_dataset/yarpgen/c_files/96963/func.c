/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96963
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
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_15 |= ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned short)65535))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) <= ((-(0LL)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((0LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)0)))) : (((((/* implicit */_Bool) (unsigned short)22)) ? (-2561372396915801237LL) : (((/* implicit */long long int) -1284901553)))))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15895)) ? (((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)45)), ((unsigned char)0)))) : (((/* implicit */int) ((unsigned short) var_13))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) > (3154228618U))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((unsigned int) -78924526)))));
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)-1)), (920414624U)));
    }
    var_21 |= ((((((((/* implicit */_Bool) var_12)) ? (3061244876491249161ULL) : (((/* implicit */unsigned long long int) var_5)))) < (((/* implicit */unsigned long long int) ((long long int) 13361123007152656855ULL))))) ? (((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)37406)))) | (((((/* implicit */_Bool) (unsigned short)46291)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)0))))))) : (min((((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) (unsigned short)0))))), (((((/* implicit */_Bool) (unsigned short)22)) ? (8661726220530760000LL) : (25778686064539263LL))))));
    var_22 &= ((/* implicit */long long int) (unsigned short)15895);
}
