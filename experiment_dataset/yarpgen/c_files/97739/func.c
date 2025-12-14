/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97739
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
    var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((var_8) * (var_12)))) ? ((~(((/* implicit */int) (short)6719)))) : (var_9)))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned short) max((((((/* implicit */int) max((var_16), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) - (((/* implicit */int) max((var_1), ((_Bool)1)))))), (((((/* implicit */_Bool) (signed char)-109)) ? ((-(117440512))) : (((/* implicit */int) (_Bool)1))))));
        var_19 -= ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) : (var_12))), (max((var_10), (((/* implicit */unsigned int) max((((/* implicit */signed char) var_1)), ((signed char)-115))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            var_20 *= ((/* implicit */unsigned char) var_0);
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) var_13)))))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) (!((_Bool)1)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            arr_11 [i_2] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2]))));
            arr_12 [i_2] &= ((/* implicit */_Bool) ((signed char) ((unsigned int) arr_10 [i_3])));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_2]))));
            arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 884984656)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))) : (1243965499822226145ULL)));
            var_24 -= ((/* implicit */short) ((long long int) arr_8 [i_2]));
        }
        arr_14 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (signed char)-49))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [3U])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((unsigned short) arr_5 [i_4])))));
        arr_18 [i_4] [i_4] = ((/* implicit */long long int) (-(max(((~(((/* implicit */int) (unsigned short)0)))), (((arr_1 [(unsigned char)2]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6))))))));
    }
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~((~(min((8355840U), (((/* implicit */unsigned int) var_16)))))))))));
    var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_16)), (var_12)));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) && (arr_15 [i_5 - 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_5])) && (((/* implicit */_Bool) (signed char)121))))) : (((/* implicit */int) ((arr_20 [i_5] [i_5]) && (((/* implicit */_Bool) (short)-32767))))))))));
        var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_5] [i_5 - 1]))))) ? (((arr_15 [i_5 + 1]) ? (var_9) : (((/* implicit */int) arr_15 [i_5 - 1])))) : (((/* implicit */int) max((arr_0 [i_5 - 1] [i_5 + 1]), (arr_0 [i_5] [i_5 + 1]))))));
    }
    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */short) (-(((/* implicit */int) ((short) arr_7 [i_6 - 2])))));
        arr_25 [i_6] = ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */unsigned long long int) 0U)) : (15560573814391094423ULL)))));
    }
}
