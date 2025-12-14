/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72930
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)17)), ((unsigned short)61419)))), (min((((/* implicit */unsigned long long int) (signed char)-31)), (var_7)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((long long int) ((signed char) var_12))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), ((+(((/* implicit */int) var_6))))))) ? ((-(min((3611758666U), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18752)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) || (((/* implicit */_Bool) ((unsigned char) -1914653984)))));
        var_17 &= ((/* implicit */unsigned int) (unsigned char)54);
        var_18 += ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-18752)))))) * (((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_19 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18749)) ? (var_5) : (3891457828750715860LL)))) ? ((-(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (var_1))))))))));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)56250);
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_20 = ((/* implicit */long long int) arr_2 [i_1] [i_1]);
            var_21 = arr_5 [i_1] [i_1] [i_1];
            arr_7 [i_2] |= ((/* implicit */int) var_0);
        }
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_5);
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_11 [i_4] [i_3] [i_1]), (arr_11 [i_1] [i_1] [i_1])))))));
                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_5 [i_1] [i_3] [i_1]))))));
            }
        }
        arr_13 [i_1] = ((/* implicit */unsigned short) ((((_Bool) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))) ? ((+(((((/* implicit */int) (_Bool)0)) >> (((var_2) - (1185989983))))))) : (((/* implicit */int) var_12))));
        var_24 = ((/* implicit */short) var_12);
    }
}
