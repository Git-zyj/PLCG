/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66907
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
    var_14 = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)0));
    var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 2143016776U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)99))))), (min((var_0), (((/* implicit */long long int) var_12))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 678524483)) > (2060656791875329291ULL))))) : (-6240153568698404361LL)));
    var_16 = ((/* implicit */unsigned short) ((signed char) var_4));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (6839651359934573002ULL)))));
        var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_0])), ((-(((/* implicit */int) (unsigned short)50838))))))), (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */_Bool) var_3)) ? (5901816267191328056LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111))))) : (((/* implicit */long long int) var_10))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 2])) % (max((11607092713774978604ULL), (((/* implicit */unsigned long long int) arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 1]))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_0 [i_2]))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        var_21 *= ((/* implicit */_Bool) ((long long int) var_10));
        var_22 -= ((/* implicit */unsigned char) (((+((-(((/* implicit */int) (short)-26000)))))) - (((/* implicit */int) min((arr_4 [i_3]), (arr_4 [i_3]))))));
        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_3]))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (max((var_13), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0)))))))));
}
