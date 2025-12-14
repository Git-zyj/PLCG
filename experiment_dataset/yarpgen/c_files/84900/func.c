/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84900
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((unsigned int) ((unsigned char) var_9)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((int) arr_2 [i_0])) : (((((/* implicit */_Bool) 768807741)) ? (((/* implicit */int) (short)-9678)) : (-1681029031)))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (arr_8 [i_1] [i_1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44152)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))) : (arr_8 [i_1] [i_2] [i_3 + 1])));
                    arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_12 [i_3 + 3] [i_3 - 1] [i_3 + 3] [i_3 + 1]), (arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 3] [(unsigned short)8]))))) : ((-(((/* implicit */int) min((arr_7 [i_1] [i_1]), (((/* implicit */unsigned char) var_5)))))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_18 [i_5] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) ((short) -2147483640))) > (((/* implicit */int) arr_7 [i_1] [i_1])))));
                                var_19 = ((/* implicit */_Bool) ((int) ((arr_5 [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                                arr_19 [i_5 + 1] [i_3] [i_3] [i_4] [(_Bool)1] [21U] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_10 [i_3 + 2]) != (arr_10 [i_3 + 3])))), ((-(min((var_9), (((/* implicit */long long int) arr_9 [i_2] [11LL]))))))));
                                var_20 = ((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_5 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) var_15)))));
        var_22 = ((/* implicit */int) ((((_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((unsigned int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (unsigned int i_7 = 3; i_7 < 19; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((_Bool) arr_11 [i_7 + 3] [i_7 + 2]))), (var_2))))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_12 [(unsigned short)10] [1] [i_6] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_7] [i_7]))) : (3354399198U)))))) / (3783995850U))))));
                        arr_29 [i_1] [i_1] [i_1] [7ULL] [i_7 + 3] [i_8] = ((/* implicit */unsigned int) arr_22 [i_8]);
                        arr_30 [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7 + 2] [i_8 - 1]))) > (arr_17 [i_7] [13ULL] [i_7 + 2] [13ULL] [i_7 - 3]))))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (-(((((/* implicit */int) arr_23 [i_1] [i_6] [i_8 - 1])) >> (max((-8248930063836336249LL), (((/* implicit */long long int) var_15)))))))))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) ((((long long int) var_12)) + (((/* implicit */long long int) var_16))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        for (int i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            {
                var_27 = ((/* implicit */int) arr_12 [i_10] [i_10] [i_9] [i_9]);
                var_28 = ((((((/* implicit */_Bool) arr_7 [i_9] [i_9])) ? (max((arr_5 [i_10]), (((/* implicit */unsigned long long int) arr_12 [i_9] [i_9] [i_9] [i_9])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
                arr_36 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((8248930063836336243LL) | (((/* implicit */long long int) 2147483629))));
            }
        } 
    } 
}
