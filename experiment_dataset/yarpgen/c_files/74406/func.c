/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74406
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
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((arr_0 [i_0]) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_12)), ((unsigned char)85))))))) : (min((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_0 [i_0]))))));
        var_14 |= ((/* implicit */short) arr_0 [9LL]);
        arr_3 [(signed char)1] = ((/* implicit */_Bool) (((!(arr_0 [i_0]))) ? (max(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0])))) : (max((((arr_1 [i_0] [i_0]) ^ (((/* implicit */int) arr_0 [i_0])))), ((~(arr_1 [16ULL] [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */int) max((var_1), (((/* implicit */short) var_12))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) max((((((int) var_2)) | (arr_1 [i_0] [i_0]))), (((/* implicit */int) ((_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [(_Bool)1] [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    {
                        arr_18 [i_1] [i_2] [i_3 + 1] [i_4] [i_4 - 1] [i_2] = arr_0 [i_3];
                        arr_19 [i_1] [i_2] [i_1] [2LL] = (!(((/* implicit */_Bool) 2188982887U)));
                    }
                } 
            } 
        } 
        arr_20 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_15 [(unsigned short)0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(_Bool)1] [(unsigned short)8] [(unsigned short)8] [i_1]))) : (arr_15 [i_1])))) ? (((((_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)0))))) : (arr_16 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [(_Bool)1]))) >= (var_2)))))))));
        arr_21 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
        arr_22 [i_1] = (-(((/* implicit */int) (_Bool)1)));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_15 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-21004)))))));
        arr_26 [i_5] = ((/* implicit */short) (-(arr_24 [i_5])));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    arr_32 [i_7] [i_6] = var_4;
                    arr_33 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5] [i_6]))) : (((arr_24 [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7])))))));
                    var_16 = arr_27 [i_5];
                    arr_34 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) (~(arr_30 [i_5] [i_6] [i_7] [i_5])));
                    arr_35 [(_Bool)1] = ((/* implicit */signed char) arr_31 [i_5] [i_6] [16U]);
                }
            } 
        } 
        arr_36 [i_5] = ((/* implicit */_Bool) (+(arr_30 [i_5] [i_5] [i_5] [i_5])));
    }
}
