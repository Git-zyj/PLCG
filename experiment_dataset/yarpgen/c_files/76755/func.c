/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76755
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((long long int) var_14));
        var_19 = (!(var_11));
    }
    var_20 = var_2;
    /* LoopSeq 3 */
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 -= ((/* implicit */int) max((arr_3 [i_1] [i_2]), (((/* implicit */unsigned short) min((arr_5 [i_1] [(signed char)6]), (arr_5 [i_1] [i_2]))))));
            var_22 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) arr_8 [(short)6] [i_2])), (((((/* implicit */int) arr_2 [i_1] [i_1])) & (((/* implicit */int) var_2)))))));
            var_23 *= ((/* implicit */int) ((signed char) (unsigned short)0));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_24 = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1] [i_3]))));
            var_25 = ((/* implicit */_Bool) max((var_25), (var_8)));
            arr_13 [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_7 [i_1]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) arr_9 [i_3])))))));
        }
        var_26 = ((/* implicit */_Bool) min((min((arr_7 [i_1]), (((/* implicit */unsigned long long int) (short)2422)))), (((/* implicit */unsigned long long int) ((signed char) -332787568)))));
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
        {
            arr_17 [i_1] [i_4 - 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_14 [i_1])))))) : (((/* implicit */int) (signed char)61))));
            var_27 = ((/* implicit */int) arr_5 [i_4 - 1] [i_4 + 1]);
        }
        for (short i_5 = 3; i_5 < 13; i_5 += 3) 
        {
            var_28 = ((/* implicit */short) ((_Bool) arr_10 [i_1] [i_5] [i_5 + 2]));
            var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)65535), ((unsigned short)0)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)64)), (min((var_10), (arr_3 [i_1] [i_1])))))) : (((/* implicit */int) (unsigned short)65520))));
        }
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */_Bool) (+((((_Bool)0) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) var_2))))));
        var_31 *= ((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6]);
    }
    for (long long int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_18) >> (((/* implicit */int) (unsigned short)3))))) ? (((((/* implicit */int) max((arr_16 [i_7] [i_7] [i_7]), (((/* implicit */unsigned short) arr_18 [i_7]))))) << (((((((/* implicit */int) var_5)) - (((/* implicit */int) (signed char)11)))) - (54))))) : ((((!(((/* implicit */_Bool) (signed char)97)))) ? (((/* implicit */int) arr_20 [(signed char)6] [i_7])) : (((((/* implicit */_Bool) arr_9 [i_7])) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) arr_19 [i_7] [i_7]))))))));
        arr_26 [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (signed char)-8)))));
        var_32 -= ((/* implicit */unsigned char) arr_18 [i_7]);
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_7])) ? ((((!(((/* implicit */_Bool) arr_1 [i_7] [i_7])))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)65520)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_7])))))) : ((-(((/* implicit */int) (_Bool)1))))));
        var_34 = ((/* implicit */short) ((arr_10 [i_7] [i_7] [i_7]) < (((/* implicit */int) var_17))));
    }
    var_35 = ((/* implicit */signed char) var_6);
}
