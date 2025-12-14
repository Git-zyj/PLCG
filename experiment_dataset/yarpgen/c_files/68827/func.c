/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68827
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
    var_11 = ((/* implicit */short) min((((/* implicit */unsigned short) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (var_5)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (short)24648))));
        var_13 = ((/* implicit */unsigned long long int) ((arr_2 [i_0]) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24648))) : (arr_2 [i_0])))));
        var_14 -= ((/* implicit */unsigned int) ((long long int) arr_2 [i_0]));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_15 = ((/* implicit */long long int) min((((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_9)) : (1427038913)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-24620))) ^ (arr_0 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */int) (short)27331)) >> (((((/* implicit */int) (short)24620)) - (24604)))));
                    var_17 -= (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)24630))))));
                }
            } 
        } 
        var_18 -= ((/* implicit */int) (short)-24620);
        /* LoopSeq 3 */
        for (int i_4 = 3; i_4 < 11; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_19 -= ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_1]))));
                        var_20 -= ((/* implicit */long long int) min((((/* implicit */int) (short)24658)), ((~(((/* implicit */int) ((unsigned short) var_6)))))));
                        arr_18 [i_1] = ((/* implicit */int) max(((~(343575412171578144ULL))), (((/* implicit */unsigned long long int) min((arr_17 [i_1] [i_4 + 1]), (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
            arr_19 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24630))) : (1242502034U)))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1]))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            var_21 = ((/* implicit */short) ((unsigned short) arr_20 [i_1] [i_7]));
            var_22 -= ((/* implicit */signed char) max(((~(arr_22 [i_1] [i_1] [i_7]))), (((/* implicit */unsigned int) (_Bool)0))));
            arr_24 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
        }
        for (unsigned short i_8 = 3; i_8 < 11; i_8 += 1) 
        {
            var_23 -= ((/* implicit */_Bool) var_5);
            arr_29 [i_1] = (-((~(arr_8 [i_8 - 1] [i_8 - 2] [i_8 - 3]))));
            arr_30 [i_1] [i_8] = ((/* implicit */long long int) ((((arr_7 [i_1] [i_8 - 3] [i_1]) | (2315448896U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1))))))));
            var_24 = ((/* implicit */signed char) ((max((8725724278030336LL), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_8 - 1] [i_8 - 3] [(unsigned short)5])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_1] [i_1]))))) : (arr_28 [i_8] [i_1]))))));
        }
    }
    var_25 = ((/* implicit */long long int) max((((((((var_7) - (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((var_7) + (253917762))))), (((/* implicit */int) ((var_7) <= (((/* implicit */int) var_5)))))));
}
