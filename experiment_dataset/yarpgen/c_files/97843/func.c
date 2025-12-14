/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97843
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
    var_10 |= ((/* implicit */unsigned short) ((long long int) (+(((((/* implicit */_Bool) (unsigned short)28510)) ? (113968594136483213LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18175))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_0]), ((-(arr_0 [i_0])))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -3448807420368151505LL)) ? (((/* implicit */int) (unsigned short)37026)) : (((/* implicit */int) var_4))))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 2996517332573212381LL))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 12; i_1 += 1) /* same iter space */
        {
            arr_5 [i_1 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1 + 2] [i_0]);
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 5452653719942098609LL))));
            arr_7 [i_0] [i_0] [i_1 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 3] [i_1])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 3] [i_1 + 3]))));
            arr_8 [i_0] [i_1] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2] [i_1])) ? ((+(((/* implicit */int) (short)18174)))) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1] [i_1 + 3]))));
        }
        for (long long int i_2 = 3; i_2 < 12; i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)16012))) <= (arr_1 [i_0])));
            arr_13 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(((/* implicit */int) (unsigned short)4724)))) : (((/* implicit */int) (unsigned short)32621))));
            arr_14 [12LL] [i_2 + 3] [(short)13] = ((/* implicit */unsigned short) (((+(arr_1 [i_2 + 2]))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60812)))));
            arr_15 [i_0] [i_2 - 3] [i_2 - 3] = ((/* implicit */unsigned short) ((short) ((short) arr_11 [i_2 + 3])));
        }
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        {
                            arr_27 [i_0] [(unsigned short)10] [i_0] [i_5] [i_0] [i_0] = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5452653719942098592LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8965))) : (arr_0 [(unsigned short)8])))) && ((!(((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_4]))))));
                            arr_28 [i_0] [i_3] [i_4] [i_5] [(short)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31)) & (((/* implicit */int) max((((/* implicit */unsigned short) (short)-15996)), ((unsigned short)4714))))))) ? (((/* implicit */int) arr_18 [i_3] [i_5] [i_6])) : (((/* implicit */int) arr_20 [i_0]))));
                            arr_29 [i_0] [i_5] [(unsigned short)14] [i_0] [i_0] = arr_0 [i_0];
                            arr_30 [i_5] [i_5] [i_3] [i_3] [i_5] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_4), (var_0)))) ? (((/* implicit */int) (unsigned short)4729)) : (((/* implicit */int) max(((short)15995), ((short)-22301))))))), (max((((/* implicit */long long int) (unsigned short)60390)), (((long long int) (short)-7008))))));
                        }
                    } 
                } 
            } 
            arr_31 [i_0] [i_3] [i_0] = arr_26 [i_0] [i_0] [i_0] [i_3] [i_3];
        }
        for (short i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            arr_35 [i_7] = ((/* implicit */short) 613923104326519870LL);
            arr_36 [i_7] [i_0] [i_7] |= (~(((((/* implicit */_Bool) arr_34 [i_7])) ? (((((/* implicit */_Bool) (unsigned short)30798)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16384))) : (arr_1 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_7] [3LL]))))));
        }
    }
    for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        arr_39 [i_8] [(unsigned short)11] = ((/* implicit */long long int) (unsigned short)60812);
        arr_40 [i_8] = ((/* implicit */long long int) (short)12051);
    }
}
