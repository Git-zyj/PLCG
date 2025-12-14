/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88321
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
    var_19 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 |= ((/* implicit */unsigned char) min((((/* implicit */int) arr_0 [i_0])), (max((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)82)))), ((-(arr_3 [i_0] [i_1])))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 3] [i_2] [i_2 + 3]))))))));
                    arr_8 [i_2] [4ULL] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) + (arr_4 [i_2] [i_0])))) ? (((/* implicit */int) (short)20395)) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_1 [(short)5])) : (((/* implicit */int) arr_6 [i_0] [(signed char)5] [(signed char)5] [i_2])))))), ((+(((-1932223229) - (((/* implicit */int) (unsigned char)134))))))));
                    arr_9 [i_0] [i_1] [i_2] = min((((/* implicit */unsigned int) arr_2 [i_0] [i_2])), (((((/* implicit */_Bool) (+(746858198U)))) ? (((4294967281U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)48))))))));
                }
                var_22 = ((/* implicit */int) arr_2 [i_0] [i_1]);
                var_23 += ((/* implicit */short) (~(((/* implicit */int) (unsigned short)26156))));
                var_24 = ((/* implicit */short) min((max((((((/* implicit */_Bool) arr_0 [i_1])) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])))), (((/* implicit */unsigned long long int) ((arr_5 [i_0]) + (((/* implicit */int) (unsigned char)4)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 4; i_3 < 19; i_3 += 2) 
    {
        var_25 &= ((/* implicit */unsigned int) arr_11 [i_3]);
        var_26 = ((/* implicit */unsigned int) ((unsigned char) var_15));
        arr_14 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -856589283)) ? (arr_11 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3])))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3])))))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) (-(15U)));
    }
    var_27 = ((/* implicit */unsigned short) (+((+(var_6)))));
}
