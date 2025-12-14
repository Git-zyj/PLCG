/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67588
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) ((max((var_11), (var_12))) == (((/* implicit */unsigned int) 1258334730)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_16 = ((long long int) var_8);
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_17 = ((/* implicit */unsigned char) (-2147483647 - 1));
                var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((_Bool) (unsigned char)0))), ((unsigned char)23)));
            }
            for (long long int i_3 = 3; i_3 < 15; i_3 += 2) 
            {
                var_19 = ((/* implicit */short) arr_3 [i_1] [8]);
                arr_12 [i_1] = ((unsigned char) ((_Bool) (signed char)-48));
            }
            for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
            {
                var_20 ^= ((/* implicit */_Bool) ((signed char) ((0U) >> (((arr_2 [i_0 - 1] [i_4 - 2]) - (9277396))))));
                var_21 ^= ((/* implicit */unsigned char) max((((/* implicit */int) arr_16 [i_0 - 3] [i_0 - 2] [i_0 - 2])), ((~(((/* implicit */int) arr_16 [i_0 + 1] [i_0 - 4] [i_0 + 1]))))));
            }
            for (int i_5 = 1; i_5 < 16; i_5 += 4) 
            {
                var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)23))));
                arr_21 [i_1] [(signed char)3] = max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 - 3] [i_1])), ((-(arr_15 [i_5] [16ULL] [i_5 + 1] [i_5 - 1]))));
                arr_22 [i_0] [i_1] = ((/* implicit */int) 9223372036854775807LL);
                var_23 = ((unsigned int) (-(3792210488U)));
            }
            var_24 = ((((/* implicit */_Bool) (-(arr_3 [i_1] [i_0 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : ((-(((var_9) - (var_9))))));
        }
        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 3) /* same iter space */
        {
            var_25 = ((min((((/* implicit */unsigned int) arr_18 [i_0] [i_0 - 2] [i_0 - 3])), (2720817150U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10)))));
            var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned short) (unsigned char)233)), (((/* implicit */unsigned short) ((signed char) (unsigned char)0)))))) ? (((/* implicit */unsigned long long int) max((arr_2 [i_0 - 1] [i_0 - 4]), (arr_2 [i_0 - 3] [i_0 - 1])))) : ((~(11447178879468820022ULL)))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                var_27 = ((/* implicit */_Bool) ((max((((((/* implicit */long long int) var_12)) / (var_5))), ((+(var_1))))) + (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)44)))))));
                var_28 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) min((var_4), (var_10)))))));
                arr_28 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~((-(max((var_6), (((/* implicit */unsigned long long int) var_4))))))));
            }
            arr_29 [8U] [8U] [i_0 - 2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)247))));
            arr_30 [(signed char)12] [i_0] = ((/* implicit */signed char) ((long long int) ((262143LL) ^ (((((/* implicit */_Bool) arr_5 [16] [i_0])) ? (arr_5 [i_0 - 3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_6] [i_0]))))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 2; i_8 < 16; i_8 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_8]))))) ? (((((/* implicit */_Bool) (short)-1239)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 - 4] [i_8 - 1] [i_8 - 2])))));
            arr_34 [i_0] [i_8] = ((/* implicit */unsigned char) var_9);
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0 - 4])) : (((/* implicit */int) (unsigned char)145)))))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 2; i_9 < 16; i_9 += 3) /* same iter space */
        {
            arr_39 [i_9] = ((/* implicit */long long int) arr_19 [i_0]);
            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((var_6) >= (var_14))))));
        }
        arr_40 [(unsigned short)16] = ((/* implicit */long long int) ((unsigned long long int) min((max((((/* implicit */long long int) var_13)), (-7821567845634103280LL))), (((/* implicit */long long int) var_2)))));
    }
    /* vectorizable */
    for (signed char i_10 = 4; i_10 < 16; i_10 += 4) /* same iter space */
    {
        arr_44 [i_10] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10] [(short)4] [i_10]))) <= (var_1))));
        arr_45 [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_10 - 4] [i_10 - 4]))));
    }
}
