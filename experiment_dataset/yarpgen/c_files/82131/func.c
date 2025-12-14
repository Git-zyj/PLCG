/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82131
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) (~(2147483642))))));
        arr_3 [i_0] [17ULL] = ((/* implicit */long long int) (+(arr_1 [i_0] [i_0])));
    }
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (((!((!(((/* implicit */_Bool) (unsigned short)0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)37)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) 10988044089516823071ULL))))))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_11 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
            arr_12 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) (short)-25315)))));
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                arr_15 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 13673603923287179509ULL)) ? (11364424044471802676ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12)))));
                arr_16 [i_1] [i_2] [(unsigned char)3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned short)7680))) ? (max(((+(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5008047887949616833LL)) ? (67108863LL) : (((/* implicit */long long int) -176518971))))) ? ((~(var_18))) : ((~(((/* implicit */int) (_Bool)0))))))));
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+((~((-(var_18)))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_2))));
            }
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) var_15);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) ((long long int) arr_19 [i_1]))))));
                            arr_27 [i_1] [i_1] = ((/* implicit */_Bool) var_8);
                        }
                    } 
                } 
                arr_28 [i_1] = ((/* implicit */short) (~((-(((/* implicit */int) (unsigned char)110))))));
                var_23 ^= ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned short)42085))))));
            }
        }
        arr_29 [i_1] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) (!(arr_25 [1ULL] [i_1] [1ULL] [i_1] [1ULL])))) << (((((arr_25 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7680))) : (arr_24 [i_1] [i_1]))) - (4306063345104798152LL)))))));
        var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-26))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        arr_33 [i_7] [i_7] &= ((/* implicit */signed char) (-(var_0)));
        arr_34 [i_7] = ((((/* implicit */_Bool) 1210712812)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (unsigned char)249)));
        var_25 += ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)23460)));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (-((-(((/* implicit */int) arr_35 [i_8] [(unsigned char)3])))))))));
        var_27 = ((/* implicit */signed char) var_4);
        arr_38 [i_8] = arr_1 [i_8] [i_8];
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_8))))))))));
        var_29 ^= ((/* implicit */int) ((short) (unsigned short)7));
    }
    var_30 = ((/* implicit */signed char) (~((((+(((/* implicit */int) var_3)))) - (((/* implicit */int) var_13))))));
    var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (var_17));
}
