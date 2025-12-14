/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73254
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
    var_16 = ((/* implicit */_Bool) (~(var_2)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) max(((((-(arr_0 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-11412)) || (((/* implicit */_Bool) -781549866)))))))), (arr_2 [(_Bool)1])));
        var_18 = ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_14)))) < (((/* implicit */int) (signed char)-88))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_19 &= max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)245)), (var_11)))), (min((((/* implicit */unsigned int) (_Bool)1)), (var_7))));
        var_20 = ((/* implicit */unsigned int) ((((min((((var_14) ? (var_2) : (((/* implicit */long long int) var_7)))), (min((var_2), (((/* implicit */long long int) -1129220867)))))) + (9223372036854775807LL))) >> (((max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_4) : (var_10))))) + (3410)))));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2])) >= (((/* implicit */int) arr_7 [i_2])))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)4]))) % (var_3)))))) ? (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) > (16777208U)))) | (1102528641))) : (((/* implicit */int) ((unsigned short) var_1)))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    arr_15 [i_4] = ((/* implicit */long long int) arr_6 [i_4]);
                    var_22 &= arr_9 [13] [i_3] [i_3];
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((_Bool) ((int) ((unsigned short) var_1)))))));
                }
            } 
        } 
    }
    var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned int) var_4)) & (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)32822), (((/* implicit */unsigned short) (signed char)-75))))))))) ? (((/* implicit */int) ((short) var_0))) : (min((((/* implicit */int) var_0)), (var_9)))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_13), (((/* implicit */int) var_14))))) ? (var_15) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) | (var_11))) / (((/* implicit */int) ((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
    var_26 -= ((/* implicit */long long int) ((max((((((/* implicit */_Bool) -781549848)) ? (2305843009205305344ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))))) | (((/* implicit */unsigned long long int) min((((var_3) * (var_15))), ((~(var_3))))))));
}
