/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71758
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((-430800471445412955LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-6570)))));
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1] [i_1 + 1])) == (((/* implicit */int) arr_1 [i_0 - 2] [i_1 - 2]))))), (var_10))))));
            arr_5 [(signed char)4] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]);
            arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6570))) : (2515869150U)));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)6570)) * (((/* implicit */int) arr_7 [i_0] [i_2] [i_0]))))) ? (max((var_8), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_0])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6570))) / (var_8))))));
            arr_11 [(unsigned char)19] [i_0] [i_2] = ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_2 - 1])) : (((((/* implicit */int) var_0)) + (((/* implicit */int) arr_2 [i_0] [i_2])))))), (2066007910)));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)55081)) | (((/* implicit */int) (unsigned char)104))));
            arr_13 [i_0] [(unsigned short)7] = ((/* implicit */short) ((((427105844) - (((/* implicit */int) (short)6570)))) + (((((/* implicit */_Bool) arr_2 [i_0] [i_2 - 1])) ? (((/* implicit */int) (short)-6570)) : (((/* implicit */int) arr_2 [i_0] [i_2 - 1]))))));
        }
        var_18 = ((/* implicit */signed char) ((short) max((((/* implicit */long long int) (short)18840)), (arr_9 [i_0 + 2] [i_0 - 2] [i_0]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_18 [i_3] = ((/* implicit */signed char) ((((arr_15 [(unsigned short)0]) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (short)-6595)), (-3LL))))) - (65485)))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7941564150360726085LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)6590))));
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) ((unsigned char) (unsigned char)244))) + (((((/* implicit */_Bool) (short)18863)) ? (var_13) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((signed char) min((9223372036854775805LL), (((/* implicit */long long int) (short)6522))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    arr_23 [i_3] [(unsigned char)5] [(signed char)0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(-7756206388507164776LL)))) ? (min((((/* implicit */unsigned long long int) ((7941564150360726106LL) * (((/* implicit */long long int) 0U))))), (var_15))) : (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (short)-32764))) / (arr_9 [i_3] [i_4] [i_4]))), (((/* implicit */long long int) arr_21 [i_5] [(signed char)2] [i_5])))))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (((((/* implicit */_Bool) (unsigned short)17362)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1)))))))));
}
