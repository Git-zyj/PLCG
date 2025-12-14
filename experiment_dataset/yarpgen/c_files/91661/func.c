/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91661
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) arr_2 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        arr_6 [(unsigned short)2] &= ((/* implicit */unsigned char) max(((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)65526)) != (((/* implicit */int) (short)-23659))))))), ((-((+(((/* implicit */int) arr_1 [i_1] [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (+((-((+(((/* implicit */int) var_10))))))));
        arr_9 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])), ((+((+(var_3)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_9)))))), ((~(var_8)))));
        arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_13 [i_2])) << (((((/* implicit */int) arr_11 [i_2])) - (102))))) >> (((max((var_3), (((/* implicit */unsigned long long int) var_16)))) - (6875016006608303452ULL))))) >> ((((~((-(((/* implicit */int) arr_11 [(unsigned char)16])))))) - (119)))));
        arr_15 [0ULL] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (((-(arr_10 [i_2] [i_2]))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_2])) + (((/* implicit */int) var_11))))))))));
    }
    var_21 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (var_0))))))));
    var_22 = ((/* implicit */unsigned short) (+(((unsigned int) (-(var_2))))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned short)65527), ((unsigned short)65510))))))) ? ((-((~(((/* implicit */int) var_9)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6))))))))));
    var_24 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54996)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)960))) : (287104476244869120LL))))));
}
