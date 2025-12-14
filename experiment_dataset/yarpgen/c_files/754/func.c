/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/754
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) var_10)))), (((/* implicit */int) (short)-9712))))) ? (((/* implicit */long long int) ((((var_2) ^ (0U))) + (var_6)))) : (max((((/* implicit */long long int) (unsigned char)255)), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-647407655864274549LL) : (((/* implicit */long long int) 2147483636))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0])))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) - ((-(arr_1 [i_0] [i_0])))))));
        arr_4 [i_0] = ((short) min((((/* implicit */unsigned short) var_4)), (((unsigned short) 4294967295U))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_7 [11ULL] [11ULL] = (unsigned char)224;
        arr_8 [5LL] = (short)(-32767 - 1);
    }
    for (unsigned char i_2 = 3; i_2 < 9; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)245)) << (((var_1) - (641421403))))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_5 [i_2 - 1] [i_2 - 2]) : (((/* implicit */int) arr_10 [i_2 - 2]))))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (arr_1 [i_2 + 3] [i_2 - 3]))) >> (((max((((/* implicit */unsigned long long int) var_15)), (arr_1 [i_2 - 2] [i_2 + 1]))) - (15516824529620540388ULL)))));
        arr_13 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_2]))), (((((/* implicit */_Bool) min((((/* implicit */int) (short)32767)), (-1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)245))))) : (((unsigned long long int) (signed char)0))))));
        arr_14 [i_2] = ((/* implicit */int) (unsigned char)76);
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned int) 2031539567);
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        arr_19 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)192)) ? (-1) : (((/* implicit */int) (unsigned short)3072))));
        arr_20 [(_Bool)1] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((max((33538048LL), (((/* implicit */long long int) 192)))) << (((((/* implicit */int) var_13)) - (124)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_16 [i_3]))))) ? (((1747851243381434866ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_3]), (arr_16 [i_3])))))))));
    }
    var_20 = ((/* implicit */long long int) (short)-8963);
    var_21 = ((/* implicit */unsigned short) min((-1761380790743037796LL), (((/* implicit */long long int) var_0))));
}
