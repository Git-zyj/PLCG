/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98459
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (arr_0 [i_0])))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((min((3753179072835880069ULL), (((/* implicit */unsigned long long int) -1LL)))) >= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))))));
            var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_0 [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (min((var_18), (((/* implicit */unsigned int) var_14)))) : ((~(arr_5 [i_1])))))));
        }
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) var_17)) == ((+(var_9)))));
            var_21 = ((/* implicit */unsigned short) var_13);
            arr_11 [i_0] [12LL] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 - 1]))) << (((((/* implicit */int) var_15)) + (31318)))));
            var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0 - 1])))), ((+(((/* implicit */int) arr_1 [i_0 - 1]))))));
        }
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
        {
            arr_14 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_0]) / (((/* implicit */long long int) (-(arr_5 [i_0]))))))) ? (var_8) : ((+(arr_12 [i_0 + 1] [i_0 - 1])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                var_23 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_7))))));
                var_24 -= ((/* implicit */unsigned int) ((signed char) arr_13 [i_3] [i_0 - 1]));
                var_25 ^= (+((+(var_11))));
                arr_17 [9U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) + (arr_16 [20U] [(_Bool)1])))) ? (((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_3])) ? (var_12) : (((/* implicit */int) arr_4 [i_4] [15] [i_0])))))));
                var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) var_12)) : (arr_5 [i_0]))) << (((((arr_12 [i_0] [i_4]) | (arr_8 [i_0] [i_3] [i_4]))) - (4227828654U)))));
            }
        }
    }
    var_27 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_3)), (max((((/* implicit */unsigned short) var_6)), (min((((/* implicit */unsigned short) var_15)), (var_10)))))));
    var_28 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((max((((/* implicit */unsigned short) var_4)), (var_14))), (((/* implicit */unsigned short) var_4)))))) ^ (max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))))));
    var_29 = ((/* implicit */unsigned char) var_16);
    var_30 = ((/* implicit */signed char) var_5);
}
