/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70727
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
    var_18 = ((((/* implicit */int) ((((/* implicit */int) min(((unsigned char)244), (((/* implicit */unsigned char) var_15))))) > ((+(((/* implicit */int) (unsigned short)5581))))))) | (((/* implicit */int) var_10)));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((max((arr_2 [i_0 + 2]), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)28)) - (((/* implicit */int) (signed char)-124)))))));
        var_20 |= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [(short)4]))))) / (((((/* implicit */_Bool) var_4)) ? (arr_2 [(unsigned short)12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65517)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [0])), ((unsigned short)36)))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) arr_0 [(unsigned short)16]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_17)))) : ((+(((/* implicit */int) (unsigned short)19))))))));
    }
    for (long long int i_1 = 1; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_21 = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1])) << (((((/* implicit */int) arr_0 [i_1])) - (23906)))))) : (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1])) << (((((((/* implicit */int) arr_0 [i_1])) - (23906))) + (23227))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1 + 1]);
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)18)), (arr_4 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1])) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((3929346976U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-18241))))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) & (3795691178915889821LL))) != (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)40)) >> (((((/* implicit */int) (short)-18241)) + (18269))))))))))));
        var_23 -= ((/* implicit */unsigned short) ((((arr_2 [i_1 + 1]) << (((arr_2 [i_1 - 1]) - (1245931766916022055ULL))))) > (arr_2 [i_1 + 1])));
    }
    for (long long int i_2 = 1; i_2 < 16; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [i_3] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned short)18)) ? (4276171908625769418LL) : (-3795691178915889821LL))));
                    arr_15 [(short)6] [(short)6] [i_4] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_13 [i_2 + 1] [i_3] [i_4]))))) - (((((/* implicit */_Bool) arr_5 [2LL])) ? (arr_3 [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24))))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)58441), ((unsigned short)17))))) : (4294967272U)))));
                }
            } 
        } 
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */unsigned long long int) max((((4294967280U) << (((arr_4 [(_Bool)1] [i_2]) - (3413338416U))))), (3221889689U)))) | (((((((/* implicit */_Bool) arr_3 [i_2] [i_2 - 1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54649))))) - (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-13)) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_2 + 1])) - (32)))))))))))));
        var_25 = ((/* implicit */unsigned char) var_0);
        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) arr_12 [i_2] [i_2] [i_2 + 1] [i_2])) > (900917211936748852LL))))))) ? (min((arr_12 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1]), (arr_12 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned short)46)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            var_27 |= ((/* implicit */unsigned char) (_Bool)1);
            arr_18 [i_2] [i_5] [i_5 - 1] = ((/* implicit */unsigned long long int) 3221889668U);
            arr_19 [i_5] = ((/* implicit */int) ((arr_2 [i_2 + 1]) > (arr_17 [i_2 - 1] [i_5 - 1])));
            arr_20 [i_2] [i_5] [i_2] = ((/* implicit */int) arr_11 [i_2 - 1]);
        }
    }
    var_28 = ((/* implicit */int) ((max((min((var_13), (((/* implicit */long long int) (unsigned short)15)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53215)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (15U)))))) > (((/* implicit */long long int) ((/* implicit */int) ((var_16) == (((/* implicit */long long int) var_7))))))));
}
