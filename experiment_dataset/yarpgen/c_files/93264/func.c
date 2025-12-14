/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93264
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((((/* implicit */int) min((min((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)24645))), (max((((/* implicit */unsigned short) arr_1 [i_2])), (var_18)))))), ((+(((/* implicit */int) arr_1 [i_2]))))));
                    var_20 = ((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1] [i_0]);
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25782)) ? (((((/* implicit */_Bool) min((var_16), (var_16)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2115687843U))) : (((((/* implicit */_Bool) var_1)) ? (4294967287U) : (((/* implicit */unsigned int) var_0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)65527)) % (((/* implicit */int) (_Bool)1))))))))))));
                }
            } 
        } 
    } 
    var_22 = var_1;
    var_23 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) var_10)))) != (((/* implicit */int) (_Bool)1)))) ? (max((var_1), (max((((/* implicit */unsigned int) (unsigned short)17268)), (3221225472U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
    /* LoopSeq 2 */
    for (short i_3 = 2; i_3 < 17; i_3 += 2) 
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(2743524828U))))));
        arr_12 [i_3 - 2] [i_3 - 2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_10 [i_3] [i_3 - 1])), (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47501)) ? (((/* implicit */int) (short)-15241)) : (((/* implicit */int) (short)-32767))))) : (18446744073709551592ULL)))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) 754587175U))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_3 - 1])))))));
    }
    for (int i_4 = 2; i_4 < 16; i_4 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4)) ? (((/* implicit */int) arr_9 [i_4])) : (-1390796098)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((unsigned long long int) -1661992034)))), (((/* implicit */unsigned long long int) min((min((-1865123143), (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4]))))))))));
        arr_17 [(unsigned short)3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_15 [i_4])))) ? (arr_11 [i_4]) : (((/* implicit */int) ((arr_10 [i_4 + 1] [i_4]) > (((/* implicit */unsigned int) var_0)))))));
    }
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (var_14) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1744))) : (var_1)))), (min((((/* implicit */unsigned long long int) var_10)), (var_14)))))));
}
