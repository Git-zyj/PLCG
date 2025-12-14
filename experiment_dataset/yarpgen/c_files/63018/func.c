/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63018
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((signed char)-109), (var_1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)256)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12187))) : (16U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (short)12207)))))))))) : (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12186))) : (776931463U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned char)255))))) ? (4294967295U) : (max((((/* implicit */unsigned int) -1440234624)), ((~(772502563U)))))));
                arr_7 [i_0] = ((((/* implicit */_Bool) ((arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 1]) | (((/* implicit */int) max((((/* implicit */short) var_17)), (var_12))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)61))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)12138)) * (((/* implicit */int) (short)-16387))))) : (((((/* implicit */_Bool) 17896239167435583525ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (4294967274U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3522464725U)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (unsigned char)58))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 772502558U)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (arr_5 [i_0] [i_0] [i_0])))) : (var_14))));
                var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)32978))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483644)) ? ((-(536870400))) : (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1] [8ULL])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8388352)) ? (arr_5 [i_1 + 1] [(unsigned short)8] [(unsigned short)8]) : (arr_5 [i_0] [i_0 + 1] [i_0])))) ? (((((/* implicit */int) (short)12187)) + (((/* implicit */int) (signed char)-1)))) : (((((/* implicit */_Bool) (unsigned short)20767)) ? (-2147483644) : (-1043629120))))) : (((((/* implicit */_Bool) (-(-2147483634)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (short)-12174))))));
                arr_8 [i_0 - 1] [i_0 - 1] [(unsigned char)4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 536870425)) != ((-9223372036854775807LL - 1LL))));
            }
        } 
    } 
}
