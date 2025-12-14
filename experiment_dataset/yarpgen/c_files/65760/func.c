/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65760
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((9285592828065323577ULL) >= (9285592828065323591ULL)))), (9161151245644228039ULL)));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (-((~(9161151245644228014ULL)))));
    }
    for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    arr_11 [2LL] [2LL] [i_3] [i_3] = ((/* implicit */unsigned char) ((((unsigned long long int) var_2)) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9285592828065323601ULL)) ? (((/* implicit */int) (_Bool)1)) : (var_6))))));
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned char)179)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)63)) - (63)))))) ? (((/* implicit */int) min((((((/* implicit */int) (unsigned short)65528)) < (((/* implicit */int) arr_4 [i_1])))), (var_9)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (9285592828065323593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1])))))) ? (((/* implicit */int) var_9)) : ((+(346412244)))))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_9 [i_1 - 2])))) ? (((int) arr_9 [i_1 - 2])) : ((-(var_6)))));
    }
    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] [i_4] = 4839978832960557300ULL;
        arr_16 [i_4] = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) arr_6 [i_4 + 1] [i_4 + 1]))), ((-(((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 3]))))));
        var_12 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) -4785324024521858519LL)) ? (-4785324024521858519LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))))));
    }
    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 3) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */_Bool) arr_14 [i_5]);
        arr_20 [i_5] [(unsigned short)12] = (_Bool)0;
    }
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((9161151245644228038ULL), (((/* implicit */unsigned long long int) (signed char)15)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))) : (18446744073709551615ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1526887832)))) : (((((/* implicit */_Bool) (short)-17157)) ? (((/* implicit */long long int) var_6)) : (-7879518697234431747LL))))))))));
    var_14 = ((/* implicit */unsigned short) ((var_9) ? (((((/* implicit */_Bool) (signed char)106)) ? (min((16352367135430997317ULL), (9867866439514754458ULL))) : (max((10724831682801247517ULL), (((/* implicit */unsigned long long int) var_3)))))) : (9161151245644228014ULL)));
}
