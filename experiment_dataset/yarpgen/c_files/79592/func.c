/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79592
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-31)) && (((/* implicit */_Bool) 2129441260462353591ULL))));
    var_18 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) ((((arr_1 [i_0 + 1]) < (arr_1 [i_0 - 3]))) ? (min((var_4), (((/* implicit */unsigned int) ((int) (short)-15375))))) : (((/* implicit */unsigned int) ((int) arr_2 [i_0 + 1])))));
        var_20 = ((/* implicit */int) max((var_20), (min(((-(((/* implicit */int) max(((short)17220), (((/* implicit */short) arr_2 [i_0 - 2]))))))), (((((/* implicit */int) (short)-17207)) / (arr_1 [i_0 - 2])))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((arr_9 [(unsigned short)9] [i_1] [i_1] [i_1 + 1]) && (((/* implicit */_Bool) ((arr_6 [i_1]) ? (((/* implicit */int) (short)-17220)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 692923051))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24692)))))));
                    arr_11 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_2]))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) var_1)))))));
                }
            } 
        } 
        arr_12 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-17221)))))));
        arr_13 [i_1] = arr_8 [i_1 + 1] [i_1 + 1];
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
    {
        arr_17 [19U] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)40843))));
        arr_18 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (((/* implicit */int) (unsigned short)40859))));
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_22 [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) 3558041337U);
            arr_23 [i_5] [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4000843806075658412LL)) ? (var_1) : (((/* implicit */int) (short)-17221))));
            arr_24 [i_4] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_4] [i_5]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_27 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((10506803009190561664ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28)))));
            arr_28 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_6])) ? ((+(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) (short)29751))))));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((arr_26 [i_4] [i_6] [i_6]) + (((/* implicit */long long int) -966295166)))))));
            arr_29 [i_6] [i_6] = ((/* implicit */short) arr_15 [i_4] [i_6]);
        }
        for (long long int i_7 = 2; i_7 < 20; i_7 += 4) 
        {
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_7 + 1])) >> ((((+(((/* implicit */int) (unsigned short)37390)))) - (37369))))))));
            arr_32 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_7 - 2] [i_7] [i_7])) ? (-1155410540) : (((/* implicit */int) arr_21 [i_7 - 1] [i_7 - 1]))));
        }
        var_23 = ((/* implicit */short) arr_31 [i_4] [i_4]);
        arr_33 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_25 [i_4]) : (((/* implicit */int) arr_2 [i_4]))));
    }
    for (long long int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 1652881477U)) ? (((/* implicit */int) (unsigned short)40859)) : (((/* implicit */int) arr_2 [i_8])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)24713)) : (((/* implicit */int) arr_2 [i_8]))))));
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_20 [i_8] [(short)2]) * (arr_31 [(unsigned short)11] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [(unsigned char)13])))))) : ((~(arr_34 [i_8] [2U]))))))));
        arr_37 [(short)19] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && ((!(((/* implicit */_Bool) 67076096U)))))))) % (-1LL)));
        arr_38 [i_8] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32767)) ? (arr_0 [i_8] [i_8]) : (((/* implicit */int) arr_19 [i_8] [i_8] [i_8])))) ^ (((/* implicit */int) (short)18480))))) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3558041361U)) ? (var_8) : (((/* implicit */long long int) arr_31 [i_8] [i_8]))))))))));
    }
    var_26 = ((/* implicit */short) (-((((-(var_13))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_5)))))))));
}
