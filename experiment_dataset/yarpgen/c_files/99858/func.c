/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99858
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_7 [i_1] [i_0 - 1] [i_1])) ^ (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))))));
                    arr_9 [i_0] [i_0] [i_0] [i_2 + 1] &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) % (((/* implicit */int) arr_2 [i_0 + 1]))))) * (((((/* implicit */_Bool) -5195021675006567749LL)) ? (-5195021675006567752LL) : (5195021675006567752LL)))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((max((arr_5 [i_0] [i_1]), (((/* implicit */long long int) -1824694891)))) <= (((/* implicit */long long int) ((((/* implicit */int) (short)-14889)) % (((/* implicit */int) (short)-15542)))))));
                    var_18 = ((/* implicit */signed char) (+((+(((/* implicit */int) (short)12847))))));
                }
                for (short i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    var_19 = ((/* implicit */long long int) arr_0 [0LL]);
                    arr_16 [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_12 [1LL] [i_4 - 1] [i_0 + 1])) ? ((+(arr_12 [i_0] [i_1] [(short)7]))) : (((long long int) (short)-15542))))));
                    var_20 = (((+(((long long int) arr_2 [i_0])))) >> (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [3LL] [10U]))))) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) var_1)))))));
                }
                for (long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    arr_20 [(short)9] [i_1] [i_1] [i_5] = ((/* implicit */short) var_16);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
                                arr_26 [i_1] [i_1] [(_Bool)1] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) var_9);
                                arr_27 [4ULL] [i_1] [2LL] [i_7] [i_7] = ((/* implicit */int) arr_23 [i_0 - 2] [(unsigned char)5] [i_5] [i_1] [i_7] [0U]);
                            }
                        } 
                    } 
                }
                arr_28 [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1])) ? (5601392572437183049LL) : (arr_5 [i_0 + 1] [i_0 + 1])))));
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 11; i_8 += 4) 
                {
                    for (signed char i_9 = 4; i_9 < 8; i_9 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((unsigned long long int) (signed char)96));
                            arr_34 [i_0] [i_1] [i_1] = 16150146436532389295ULL;
                            arr_35 [i_8] [i_0] [i_1] [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_3)) ? (-5195021675006567755LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (arr_14 [i_1] [i_0 - 1])));
                            var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_8] [i_1]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8]))) : (578106986U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_10 = 4; i_10 < 12; i_10 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_11)), (var_3))))))) >> ((((~(((1369142041U) % (((/* implicit */unsigned int) var_8)))))) - (2925825232U)))));
        var_25 = (+(((((/* implicit */_Bool) arr_37 [i_10 + 1] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10]))) : (arr_37 [i_10 - 2] [(unsigned char)3]))));
    }
    /* vectorizable */
    for (long long int i_11 = 4; i_11 < 12; i_11 += 2) /* same iter space */
    {
        arr_40 [i_11] [i_11] = ((/* implicit */short) (+(((/* implicit */int) (short)-22811))));
        arr_41 [i_11] [i_11] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_38 [i_11 - 2]))));
        arr_42 [i_11 + 4] = ((/* implicit */_Bool) 5195021675006567763LL);
    }
}
