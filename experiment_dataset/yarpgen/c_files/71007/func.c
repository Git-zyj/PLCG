/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71007
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
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) var_2)), ((~(((((/* implicit */_Bool) 13911650472447323564ULL)) ? (((/* implicit */int) var_3)) : (var_6)))))));
    var_19 = ((/* implicit */unsigned short) ((1879048192) >> (((-5530510505967960233LL) + (5530510505967960245LL)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((_Bool) var_0))) : (1879048210))));
        arr_3 [i_0] = ((/* implicit */int) (_Bool)1);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
        var_20 = ((/* implicit */unsigned char) var_2);
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */signed char) var_3);
            var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (-396607350) : (((/* implicit */int) (unsigned char)192))))) ? (((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_8 [i_1]) : (arr_8 [i_1]))) : (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_1]))))));
        }
        for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            arr_13 [i_1] [i_3] [i_3] = ((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_3])))))));
            arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_6 [i_1] [i_3]) ? (arr_8 [i_1]) : (((/* implicit */int) arr_6 [i_1] [i_3]))))) ? (((((/* implicit */_Bool) 8U)) ? (16777215ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))))) : (((/* implicit */unsigned long long int) arr_8 [i_1]))));
            var_22 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
        }
        var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((0) >> (((var_12) + (1734351976)))))) ? ((+(((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) arr_5 [i_1]))));
    }
    var_24 = ((/* implicit */_Bool) (unsigned short)27525);
}
