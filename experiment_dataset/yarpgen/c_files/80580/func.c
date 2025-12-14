/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80580
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_1] = max((((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (_Bool)1)))))), (((max((var_13), (((/* implicit */unsigned int) (unsigned char)163)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [4U] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1]))))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)186))));
            arr_8 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)155)), (5821378345220784366LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26645))) : (((unsigned long long int) (short)-32749))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_2] [3LL] [i_2]))));
            var_16 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((var_2) - (1149764390)))))));
            var_17 = ((/* implicit */long long int) max(((short)-26670), (((/* implicit */short) (unsigned char)213))));
            arr_12 [i_0] [i_2] [i_2] = (((!(((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) : (13261898388262734351ULL))) : (max((arr_10 [i_0] [i_2] [i_2]), (arr_10 [i_0] [i_2] [i_2]))));
        }
        for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            arr_15 [i_0] [(short)2] [i_0] = ((((/* implicit */_Bool) (~(((int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)44588), (((/* implicit */unsigned short) var_1))))) * (((/* implicit */int) min((arr_13 [i_0]), (var_1))))))) : ((~(arr_10 [i_3] [i_3] [2U]))));
            var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])))))));
        }
        arr_16 [2ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_0]))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((-(max((697444552U), (((/* implicit */unsigned int) var_5)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3))))));
        var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_13 [i_0]))))))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) + (14340))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_8);
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)213)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)36)) ? (0) : (((/* implicit */int) (unsigned short)44588))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))))));
    var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) == (var_8))))))))));
}
