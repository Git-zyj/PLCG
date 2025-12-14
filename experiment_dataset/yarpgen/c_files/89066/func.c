/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89066
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
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_12)) - (var_8)))), ((+(max((((/* implicit */unsigned long long int) var_5)), (var_7)))))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_12))));
    var_19 = ((/* implicit */unsigned char) ((int) var_11));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */short) 5937930268797016549LL);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0 - 1])))) ? (((arr_2 [i_0 + 1]) / (arr_2 [i_0 + 1]))) : (((arr_2 [i_0 + 2]) / (arr_2 [i_0 - 1])))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) arr_2 [i_0])) < (arr_0 [i_0]))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (var_13) : (arr_2 [i_0]))) : (((/* implicit */int) (!(arr_1 [i_0] [i_0]))))))) && (((/* implicit */_Bool) 743886963))));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) arr_1 [i_0] [3ULL]);
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_11 [i_1 - 1] [5LL] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_1]))) - ((-(arr_6 [i_1] [i_2]))))) + (var_4)));
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 9; i_3 += 2) 
            {
                var_23 -= ((/* implicit */signed char) arr_15 [i_1] [i_1]);
                arr_16 [i_1] [i_2] [i_1 + 1] [i_1] = ((((/* implicit */_Bool) arr_6 [i_3] [i_2])) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1]))))), (arr_5 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) == (((arr_13 [i_3] [i_3] [i_1] [i_1]) ? (arr_8 [i_2] [i_2]) : (((/* implicit */int) arr_15 [i_1 + 1] [i_1 + 1])))))))));
            }
            var_24 = ((/* implicit */short) (+(((((/* implicit */int) (unsigned short)47950)) - (-311552412)))));
        }
        var_25 = ((/* implicit */long long int) ((arr_8 [7ULL] [i_1]) <= (((/* implicit */int) ((_Bool) arr_8 [i_1] [(short)6])))));
    }
    for (int i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) min((arr_18 [i_4]), (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4] [i_4] [i_4]))))) ? (arr_17 [i_4 + 2]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_4]))))))));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            arr_22 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_21 [5LL] [5LL] [5LL])), (arr_5 [i_5])))) ? (((/* implicit */int) ((arr_18 [i_4 - 1]) != (arr_18 [i_5])))) : (((/* implicit */int) arr_21 [i_4 + 2] [i_5] [i_5]))));
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) min((arr_15 [i_4 + 1] [i_4 + 1]), (((/* implicit */unsigned short) (_Bool)1)))))), (((long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [4ULL] [i_5] [i_5] [i_5]))) : (arr_5 [3])))))))));
        }
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_15))));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            arr_26 [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) arr_18 [i_6]);
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_14 [i_4] [i_4]))));
            var_29 |= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_14 [i_4 - 1] [i_4 + 1]))))));
            arr_27 [i_6] |= ((((/* implicit */_Bool) (unsigned short)47961)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17575))));
        }
        for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 2) 
        {
            arr_30 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_21 [i_4] [i_7 + 1] [i_4 + 1]))))));
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17564)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)6666)))))));
            var_31 |= arr_7 [i_4];
        }
    }
    var_32 |= ((/* implicit */long long int) ((((_Bool) ((((var_13) + (2147483647))) >> (((((/* implicit */int) var_2)) - (10074)))))) ? (((unsigned long long int) ((13465386768642328833ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (var_7)));
}
