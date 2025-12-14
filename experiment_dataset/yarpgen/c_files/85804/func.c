/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85804
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0 - 2]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) ((unsigned char) arr_6 [i_0 - 1]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [(short)1] [i_0] [(unsigned char)8] [i_0] = ((/* implicit */unsigned long long int) max(((-(arr_11 [i_0] [(unsigned short)0] [i_0] [i_0 - 1] [i_4 - 1]))), (((/* implicit */long long int) ((short) arr_6 [i_4 - 1])))));
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) min((arr_10 [i_3]), (((/* implicit */unsigned long long int) (short)25209)))))) ? ((~(((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4]))) : (arr_10 [i_0]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0])), ((-(-1496584457))))))));
                                var_21 = ((/* implicit */int) arr_3 [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [1LL] [i_0] [i_0])) : (((((/* implicit */_Bool) ((short) (short)15176))) ? (((/* implicit */int) ((signed char) 10882768247617337271ULL))) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 2]))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */int) 8971028168783315029LL);
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_5] [i_5 - 1])) ? (arr_1 [i_5] [i_5 - 1]) : (arr_1 [(unsigned short)9] [i_5 - 1])));
        var_25 &= ((/* implicit */short) (_Bool)1);
    }
    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) max((arr_15 [i_6]), (((/* implicit */int) arr_17 [13ULL]))));
                        arr_27 [i_6] [i_6] [i_6] [i_8] [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned short) arr_2 [i_6])), (arr_19 [i_9] [i_6 - 2]))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */int) arr_8 [i_6] [i_6] [i_6] [i_6]);
    }
    for (unsigned short i_10 = 2; i_10 < 13; i_10 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-14972))))) ? (((((/* implicit */_Bool) 10882768247617337268ULL)) ? (((/* implicit */int) arr_8 [i_10] [5ULL] [5ULL] [i_10])) : (((/* implicit */int) arr_7 [i_10])))) : ((-(((/* implicit */int) arr_20 [i_10] [(unsigned short)11] [i_10]))))))) ? (((/* implicit */int) arr_18 [(unsigned short)13])) : (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (!(arr_0 [i_10])))))))))));
        var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_19 [5] [i_10]))));
    }
    var_30 = ((/* implicit */int) (short)32767);
    var_31 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) var_7)))));
}
