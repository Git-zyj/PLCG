/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63320
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
    var_17 = ((/* implicit */unsigned char) 1824834746709542264ULL);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (-(((arr_1 [i_0 - 1]) / (((/* implicit */unsigned long long int) ((var_10) >> (((arr_0 [i_0] [i_0]) - (14457690683003161130ULL))))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) var_0)))))));
            var_20 = (-(((/* implicit */int) ((((18446744073709551586ULL) % (arr_0 [i_1] [i_1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_2] [i_0] = ((/* implicit */int) arr_1 [i_0]);
            arr_7 [i_0 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) (unsigned char)65)))) : (((((/* implicit */int) var_12)) / (((/* implicit */int) (short)-1621))))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_15))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_11 [i_3] [i_3] = ((((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_3])) || (((/* implicit */_Bool) -944343101)))) ? ((-(-1185982143))) : (var_10));
            arr_12 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1185982143)) ? (((/* implicit */int) (unsigned char)0)) : (-1042137024)))) ? (((/* implicit */int) ((1185982163) != (((/* implicit */int) (short)-256))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
            var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (arr_0 [i_0 + 3] [i_0 + 2])));
            arr_13 [(unsigned char)4] [i_3] [i_3] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) 1094428701)) : (9948102286967489736ULL))) & (arr_1 [i_0])));
        }
        arr_14 [i_0] [i_0] = max(((-(((/* implicit */int) (signed char)8)))), ((-2147483647 - 1)));
    }
    for (int i_4 = 3; i_4 < 13; i_4 += 3) 
    {
        arr_17 [i_4 + 1] = (-(((int) max((((/* implicit */unsigned long long int) (unsigned char)242)), (18446744073709551615ULL)))));
        arr_18 [i_4 - 3] = ((/* implicit */unsigned short) ((unsigned char) min(((-(1185982142))), ((-(((/* implicit */int) (short)-2)))))));
    }
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_2) : ((-(var_13)))));
}
