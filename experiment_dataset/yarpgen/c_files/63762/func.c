/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63762
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_2 [1ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) != (var_9)))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (var_3))))))) ? ((+(2456489447U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) >= (-728435193587439745LL)))))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (short)-7516)) && (((/* implicit */_Bool) var_14)))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) (~(1870657228U)));
        arr_6 [i_1] = ((/* implicit */unsigned int) var_11);
        /* LoopSeq 3 */
        for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            arr_10 [i_1] [9ULL] [9ULL] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((955806893U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))) & (((((/* implicit */_Bool) (short)-7525)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-728435193587439752LL)))));
            var_17 = ((/* implicit */unsigned long long int) ((var_9) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-59)))))));
        }
        for (int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_18 &= ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((var_3) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_3])))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16654)) ? (((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_3])) : (((/* implicit */int) ((2580343399650594378LL) == (0LL))))));
        }
        for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            arr_16 [i_1] [(short)8] [i_4] = ((/* implicit */unsigned int) ((18446744073709551604ULL) | (((((/* implicit */_Bool) (short)-32744)) ? (var_8) : (((/* implicit */unsigned long long int) 2580343399650594378LL))))));
            var_20 = ((/* implicit */short) 0ULL);
        }
    }
    var_21 = max(((~(((((/* implicit */_Bool) (short)7516)) ? (5741713457118967134LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72))))))), (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 2456489451U)) ? (((/* implicit */long long int) 2456489429U)) : (3294867350441394325LL))))));
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned short)65519)))))))));
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-7502)), (1838477845U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2456489450U) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned long long int) 2456489447U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)1)), ((short)4319)))))))) : (((((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126)))))));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_11))));
}
