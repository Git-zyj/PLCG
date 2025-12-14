/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92857
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */int) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_2 [i_0]))))), ((-(var_12)))))));
        arr_5 [i_0] = ((/* implicit */short) min((((/* implicit */int) max(((_Bool)1), (arr_2 [i_0])))), (arr_0 [i_0 - 1])));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (short i_4 = 4; i_4 < 17; i_4 += 2) 
                {
                    {
                        arr_15 [i_1 + 1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)238))));
                        arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_1]))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((int) (unsigned char)66)))));
    }
    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) arr_17 [i_5] [i_5])))) : (((/* implicit */int) arr_19 [i_5] [i_5]))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (66846720U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_5])))))) + (9223354444668731392LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? ((-(-5))) : (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_18 [i_5] [i_5]))))))));
        var_21 = ((/* implicit */int) max(((!(((/* implicit */_Bool) min(((short)-6172), ((short)12567)))))), (((((/* implicit */long long int) ((/* implicit */int) min(((short)-14120), (((/* implicit */short) var_10)))))) < (((17179868160LL) / (-17179868161LL)))))));
        var_22 = ((/* implicit */unsigned char) ((9223372036854775791LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_5])))));
        var_23 *= min(((+(((/* implicit */int) arr_18 [i_5] [i_5])))), (((/* implicit */int) ((((((/* implicit */int) arr_17 [i_5] [i_5])) | (((/* implicit */int) (short)11886)))) == (((int) 17179868160LL))))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((-17179868160LL) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((max((17179868159LL), (((/* implicit */long long int) arr_19 [i_5] [i_5])))) / ((-(17179868185LL))))) : (var_13))))));
    }
    var_25 -= ((/* implicit */short) ((((/* implicit */int) var_15)) << (((((((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) var_3))))) ? (((/* implicit */long long int) (~(var_4)))) : (((9223372036854775791LL) << (((((/* implicit */int) (_Bool)1)) - (1))))))) + (1131715584LL)))));
}
