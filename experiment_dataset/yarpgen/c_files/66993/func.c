/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66993
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_0 [i_0]))))));
        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) 1176720277U)) || (((/* implicit */_Bool) var_8))))))) : (((((/* implicit */_Bool) ((signed char) 3957806626U))) ? (((int) 1652103093)) : (((/* implicit */int) (short)31744)))));
                            var_19 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3] [i_2])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_2])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2])))))));
                            arr_14 [i_0] [i_1] [i_2] [i_0] [16ULL] [i_4] [i_4] = var_5;
                        }
                    } 
                } 
            } 
            arr_15 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) (short)-19958)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1]))))));
        }
    }
    for (unsigned int i_5 = 3; i_5 < 22; i_5 += 3) 
    {
        arr_19 [i_5 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)19961))));
        var_20 = ((/* implicit */int) max((var_20), ((+((-(((/* implicit */int) var_10))))))));
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (int i_8 = 3; i_8 < 19; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    {
                        arr_33 [i_6] [i_7] [i_8] [(signed char)12] [i_9] = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19957)) ? (var_5) : (arr_30 [i_6] [i_9] [i_8] [i_9])))) + (15U))));
                        var_21 |= (~(max((((/* implicit */unsigned int) arr_31 [i_8 - 1] [i_8 - 3] [i_8 - 3] [i_8 + 1])), (var_0))));
                        var_22 += ((/* implicit */short) arr_26 [i_8 - 1]);
                        arr_34 [i_6] [i_7] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_30 [i_6] [i_8 + 1] [i_8] [i_9])) ? (arr_30 [i_6] [i_8 + 1] [(signed char)8] [i_9]) : (arr_30 [i_6] [i_8 + 1] [i_8 + 1] [i_6])))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(var_3)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)19961))))) : (arr_21 [i_8]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            for (int i_11 = 3; i_11 < 20; i_11 += 4) 
            {
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967273U)) ? (2655258135U) : (((/* implicit */unsigned int) 651785868))))) ? (min((((/* implicit */unsigned int) var_7)), (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_11 - 3] [i_10] [i_10] [i_11 - 3])) & (((/* implicit */int) arr_31 [i_11 + 1] [12] [i_11 + 1] [i_10])))))));
                    var_25 *= ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_23 [i_11 - 2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_11 - 2]))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)1024)) ? (((/* implicit */int) (short)27166)) : (((/* implicit */int) (short)-19961))))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */int) (+(var_0)));
    var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (369895103U) : (var_6)))))) ? (max(((~(var_4))), ((+(var_6))))) : ((+(((((/* implicit */_Bool) var_6)) ? (var_1) : (var_6)))))));
}
