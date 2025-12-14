/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62192
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [4ULL] = ((/* implicit */unsigned short) arr_6 [i_0] [13ULL] [i_2] [i_2]);
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */int) ((long long int) var_11));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))));
                            arr_16 [i_0] [i_1 - 1] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */int) arr_8 [i_0 - 1] [i_1 + 3] [i_0 - 1] [i_1 + 3] [i_3]);
                        }
                    }
                    arr_17 [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((/* implicit */short) ((unsigned int) (unsigned char)84));
                    var_21 = var_14;
                }
            } 
        } 
        var_22 &= ((/* implicit */unsigned char) var_2);
        var_23 = ((/* implicit */signed char) arr_15 [i_0 + 3] [i_0 - 1] [i_0] [(short)10] [i_0] [14]);
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (1884343476U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(_Bool)1] [i_0 - 1] [i_0] [i_0] [i_0] [(_Bool)1])))))))))));
    }
    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 3; i_7 < 16; i_7 += 1) 
            {
                {
                    var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (18446744073709551615ULL)));
                    var_26 = ((/* implicit */short) arr_18 [11U] [i_7]);
                    arr_24 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((arr_19 [i_5]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_23 [i_5])))) : (((((/* implicit */int) arr_21 [i_6] [i_6])) / (arr_22 [i_5] [(unsigned char)8] [i_7] [i_7])))))) ? (((/* implicit */int) ((unsigned char) arr_21 [(signed char)2] [(signed char)2]))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_21 [i_6] [i_5])) - (21060)))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_20 [i_5] [(short)11] [i_7])) : (arr_22 [i_5] [i_6] [i_5] [i_5]))) : (((/* implicit */int) var_17))))));
                    arr_25 [i_5] [i_6] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (((_Bool)0) ? (arr_18 [i_5] [i_7]) : (((/* implicit */int) arr_19 [i_5]))))))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [(short)4])) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (max((((/* implicit */int) arr_19 [i_5])), (arr_18 [i_5] [i_7 - 1]))) : (arr_22 [i_7 - 1] [i_7 - 3] [i_7 - 3] [i_7 - 1]))) - (597419318)))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 3122531814980440431ULL)) ? (((/* implicit */int) arr_23 [i_5])) : (((/* implicit */int) arr_23 [i_5]))))))));
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) arr_22 [i_5] [(signed char)1] [i_5] [i_5])) ? (((/* implicit */unsigned int) arr_18 [i_5] [i_5])) : (var_10))), (((/* implicit */unsigned int) (!(arr_19 [i_5]))))))) > (max((4398046511103LL), (((/* implicit */long long int) (unsigned char)255)))))))));
    }
    for (short i_8 = 1; i_8 < 10; i_8 += 2) 
    {
        var_30 = (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8 - 1] [i_8 - 1]))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_8] [i_8] [i_8 - 1] [i_8 + 1]))) + (var_10))))));
        var_31 = ((/* implicit */unsigned short) 5113535787525890252LL);
        arr_28 [(short)10] = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_8] [i_8 - 1] [i_8 + 1] [i_8 - 1]))))), (arr_4 [i_8 - 1] [i_8 - 1] [i_8 - 1] [10])))));
    }
    /* LoopSeq 2 */
    for (int i_9 = 3; i_9 < 11; i_9 += 1) 
    {
        arr_33 [i_9 - 3] |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_18))));
        var_32 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_12 [10ULL])) ? (((/* implicit */int) arr_9 [4LL] [4LL])) : (((/* implicit */int) arr_12 [8U])))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_37 [i_10] = ((/* implicit */int) var_16);
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (-(max((((/* implicit */unsigned long long int) arr_10 [i_10] [12] [i_10] [(_Bool)1] [(unsigned char)7] [(short)1])), (arr_26 [i_10]))))))));
    }
    var_34 -= ((/* implicit */unsigned int) var_5);
    var_35 = ((/* implicit */short) var_16);
}
