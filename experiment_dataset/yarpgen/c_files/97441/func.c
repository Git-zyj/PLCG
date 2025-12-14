/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97441
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((1489118328), (((/* implicit */int) (short)5548))))) | (max((((/* implicit */long long int) var_0)), (-1310491351902956113LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15278))) : (var_6)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [(unsigned short)0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (4171720161U))), (((/* implicit */unsigned int) ((unsigned short) var_6)))))) ? (((var_8) << (((((/* implicit */int) var_16)) - (99))))) : (max((((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0] [i_0]) : (var_8))), (((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (arr_0 [i_0 - 2] [i_0 - 2])))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 - 1])) + (3336444695U))) << (((min((var_6), (((/* implicit */unsigned int) arr_1 [8LL])))) - (31800U))))))));
        var_20 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (short)-5548)) : (arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) (-(var_6))))))), (-23)));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) : (((/* implicit */int) (!(((((/* implicit */int) var_13)) != (arr_6 [i_1])))))))))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) 329226454509567833LL);
            var_22 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 2865999001U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10140))) : (2461565083U))));
        }
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) ((int) (unsigned char)234));
            arr_13 [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) var_15);
            arr_14 [i_1] [i_3] = ((/* implicit */int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [16U] [i_1] [i_1])), (2158761453U)))) ? (((((/* implicit */_Bool) 3276059055U)) ? (2716472240U) : (var_14))) : ((((_Bool)0) ? (918287105U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185)))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            arr_18 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48513)) ? (max((969520980U), (((/* implicit */unsigned int) 1489118328)))) : (((/* implicit */unsigned int) var_1))));
            arr_19 [i_4] &= ((/* implicit */int) (((~(arr_4 [i_4]))) >> ((((-(arr_6 [i_1]))) - (2020964035)))));
        }
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(var_8)))) | (max((-8184168957186262559LL), (245670614658639120LL)))));
}
