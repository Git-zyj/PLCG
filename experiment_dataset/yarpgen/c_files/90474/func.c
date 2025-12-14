/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90474
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
    var_18 = ((/* implicit */short) var_3);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), ((unsigned short)29))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) arr_1 [i_1]);
            var_21 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)80)), (473749352U)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)13))) : (0LL))))), (((/* implicit */long long int) (signed char)(-127 - 1)))));
            var_22 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0])) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-17LL)))))) ? (((/* implicit */int) var_0)) : ((-(((((/* implicit */int) arr_5 [i_0] [i_1])) - (((/* implicit */int) arr_5 [i_0] [i_0]))))))));
        }
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_23 = var_15;
            arr_10 [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_9 [i_2])))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_9)) > (var_1))))) : ((((_Bool)0) ? (((/* implicit */long long int) -153284651)) : (0LL)))))));
            var_24 = ((/* implicit */unsigned int) arr_1 [i_2]);
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */int) ((arr_9 [i_2]) || (arr_9 [i_2])))) : (((/* implicit */int) (_Bool)1))));
            var_25 += ((/* implicit */_Bool) min((arr_4 [i_2] [i_2] [i_0]), (((/* implicit */unsigned long long int) -1606392570))));
        }
        arr_12 [i_0] &= ((short) ((((/* implicit */_Bool) (unsigned short)3)) ? (0U) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_26 = arr_5 [i_3] [i_3];
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)218)) ? (min(((~(arr_4 [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (var_13) : (((/* implicit */int) (signed char)-78))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3])))));
        var_28 = ((/* implicit */unsigned short) (!((!((_Bool)1)))));
        arr_15 [i_3] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (short)-1)))));
    }
    for (short i_4 = 3; i_4 < 13; i_4 += 3) 
    {
        arr_20 [i_4] [i_4] = ((/* implicit */int) ((((arr_19 [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
        arr_21 [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17598)) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) arr_17 [i_4]))))) ? (((((/* implicit */_Bool) 144115188075593728LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [(_Bool)1])))) : (((/* implicit */int) (_Bool)0))))));
    }
    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_17))));
    var_30 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_31 = ((/* implicit */signed char) var_6);
        arr_24 [i_5] [i_5] = ((/* implicit */signed char) arr_23 [16ULL]);
    }
}
