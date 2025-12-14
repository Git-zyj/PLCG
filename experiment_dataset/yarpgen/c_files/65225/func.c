/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65225
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) -1851025318826822808LL))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((var_12) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) (short)-1))))))));
                    arr_9 [i_2] [i_1] [i_1] [6ULL] = ((/* implicit */int) arr_2 [i_1]);
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))) >= (var_14))))) > (((var_11) - (((/* implicit */unsigned long long int) 8630330512733941237LL))))))) != (((((var_7) < (((/* implicit */int) (short)32751)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */short) min(((~((+(((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) var_5))));
                                var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-32734)) / (((((/* implicit */_Bool) arr_7 [i_1] [i_3] [i_4])) ? (var_10) : (((/* implicit */int) var_8)))))) - (((/* implicit */int) ((arr_3 [i_3]) <= (max((((/* implicit */long long int) var_6)), (-6807360858048315592LL))))))));
                                var_20 = ((/* implicit */long long int) var_6);
                                arr_17 [i_1] [i_1] [i_2 + 2] [i_1] [3LL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((var_15), (((/* implicit */int) (unsigned char)59))))) + (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((var_0) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (-1675048663))))) : ((+(var_0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        arr_20 [i_5] = (-(((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_18 [i_5]))))));
        arr_21 [i_5] = ((/* implicit */long long int) var_16);
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 18446744073709551615ULL))))) : (min((var_15), (var_15)))))) ? (((/* implicit */int) var_9)) : ((+(var_0)))));
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) arr_25 [i_7] [i_6])))) > (((((/* implicit */_Bool) 72057456598974464LL)) ? (((/* implicit */int) arr_25 [i_6] [i_6])) : (-772617535))))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)15)) * (((/* implicit */int) (unsigned short)0))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                arr_26 [i_6] [i_7] = ((/* implicit */long long int) ((int) (signed char)49));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (83972797U)))) & (((var_14) % (var_11)))))));
}
