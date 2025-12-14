/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95257
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
    var_19 = ((/* implicit */unsigned long long int) ((var_14) < (((/* implicit */long long int) ((/* implicit */int) (short)-30515)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */int) var_11);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */_Bool) var_1)) ? (var_0) : (var_17))) : (((((/* implicit */_Bool) 189860362U)) ? (var_9) : (((/* implicit */long long int) var_11)))))) >= (((/* implicit */long long int) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */short) var_5);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_7 [i_0 - 1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((_Bool) arr_6 [i_0] [i_0] [i_0 - 1])))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -4840087987675398316LL)))) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            arr_8 [i_1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (~(((arr_1 [i_0 - 1]) << (((arr_5 [i_0] [i_0 - 1] [i_0]) + (724462160154715640LL)))))));
            arr_9 [i_0] = ((/* implicit */unsigned int) ((_Bool) var_0));
        }
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_13 [i_2] = ((/* implicit */_Bool) arr_5 [i_2 - 1] [i_0 - 1] [i_0 - 1]);
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (long long int i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_25 [i_0] [i_5] [i_3] [i_5] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) var_7))) * (-4840087987675398316LL));
                            arr_26 [i_0] [i_0] [i_5] [i_0] [i_0] = ((long long int) var_7);
                            arr_27 [i_0] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) var_9)) ? (arr_19 [i_5 - 1] [i_4] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 4840087987675398316LL)))) : (arr_22 [i_0] [18U] [i_2] [i_2] [i_3] [i_4] [i_5])));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 23; i_9 += 2) 
                        {
                            arr_38 [i_6] [i_6] [i_8] [i_7] [i_6] [i_0] = ((/* implicit */long long int) arr_34 [i_0]);
                            arr_39 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_9 - 1] [i_7] [i_8] [i_0 - 1])) ? (arr_36 [i_0] [(short)9] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_1 [i_9 + 1])));
                            arr_40 [i_9] [i_8] [i_6] [i_6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0 - 1] [i_0 - 1]))) * (arr_1 [i_8])));
                            arr_41 [i_0] [i_0] [i_6] [i_8] [i_9] = ((/* implicit */unsigned long long int) var_13);
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_44 [i_0] [i_8] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((-2713725254556565176LL), (((/* implicit */long long int) ((short) 13687537920672278246ULL))))))));
                            arr_45 [i_0] [i_6] [i_7] [i_8] [i_0] = ((/* implicit */_Bool) 9223372036854775807LL);
                        }
                        arr_46 [i_0 - 1] [i_6] [i_6] [i_6] [i_8] = ((/* implicit */int) arr_36 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]);
                    }
                } 
            } 
            arr_47 [i_6] [2ULL] [i_6] = ((/* implicit */_Bool) (((_Bool)0) ? (8987590612415897411LL) : (9223372036854775807LL)));
        }
        arr_48 [i_0] [i_0] = ((/* implicit */int) var_7);
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_51 [i_11] [i_11] = ((/* implicit */unsigned short) ((((int) ((((/* implicit */_Bool) var_6)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) % (arr_21 [(unsigned short)22] [4LL] [i_11] [i_11] [i_11] [i_11] [(unsigned short)22])));
        arr_52 [i_11] = min((((/* implicit */long long int) (_Bool)1)), (1681670953040974923LL));
        arr_53 [i_11] = ((/* implicit */int) arr_31 [22ULL] [i_11] [i_11] [6LL]);
        arr_54 [1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) min((arr_30 [i_11] [i_11] [i_11]), (arr_23 [i_11] [i_11] [i_11] [i_11] [i_11])))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_11] [i_11])))))));
        arr_55 [1LL] [i_11] = ((/* implicit */unsigned short) ((var_6) >= (((((/* implicit */_Bool) ((arr_5 [i_11] [(_Bool)1] [6ULL]) % (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_11] [i_11] [i_11] [i_11] [i_11]))) : (arr_42 [20U] [i_11] [20U])))));
    }
}
