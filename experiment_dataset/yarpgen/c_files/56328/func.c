/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56328
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_17 = ((/* implicit */int) min((var_17), ((~((-(((/* implicit */int) arr_0 [i_0] [i_1 + 1]))))))));
            var_18 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1])))));
        }
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            var_19 = ((/* implicit */int) var_9);
            var_20 = ((/* implicit */unsigned short) (short)5062);
        }
        var_21 = var_10;
        var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) max((((/* implicit */short) var_14)), ((short)4740))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (((((/* implicit */_Bool) arr_11 [i_3])) ? (13907412046738238442ULL) : (13907412046738238442ULL)))));
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (4539332026971313174ULL)))) : ((+(((/* implicit */int) var_11))))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((arr_4 [i_3]) ? (arr_5 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))))))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_4] [i_4]));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_14 [i_4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) : (var_8)));
    }
    for (short i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_5]))))) : (max((4294967295U), (((/* implicit */unsigned int) (signed char)-23))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_7 [4U] [4U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5])))))) ? (((/* implicit */int) max((arr_0 [i_5] [i_5]), (((/* implicit */signed char) (_Bool)1))))) : (((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */int) arr_0 [i_5] [i_5])))))) : ((-2147483647 - 1)))))));
        var_27 = arr_18 [i_5] [i_5];
    }
    var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8))))) ? (((((/* implicit */_Bool) ((signed char) var_6))) ? (((((/* implicit */_Bool) 2147483647)) ? (1465626832105283817ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (max((9ULL), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(13907412046738238442ULL))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (-300006670))) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-105))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) % (10868293263778389441ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
}
