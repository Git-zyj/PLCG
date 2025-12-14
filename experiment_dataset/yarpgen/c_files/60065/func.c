/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60065
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_19 = max(((((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) max((var_5), (((/* implicit */signed char) var_14))))))), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) / (var_3)))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_7)))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) var_14))))))))));
                        arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (-((+(arr_5 [i_3 + 1] [i_2] [i_2] [i_1])))));
                        arr_11 [i_0] [i_1] [i_3 + 1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned long long int) 18446744073709551615ULL));
                        arr_12 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) arr_5 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 2])))));
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_7 [(_Bool)0] [i_0] [i_0] [i_0])))), (((_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (var_16)))))) ? ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) <= (var_12)))))) : ((+(((/* implicit */int) arr_4 [i_0]))))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) var_15);
                        arr_23 [i_0] [i_0] [i_0] = ((/* implicit */short) ((var_16) & (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) (signed char)17)), ((short)-24870)))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_23 += ((/* implicit */short) (-(((/* implicit */int) var_17))));
        arr_28 [i_7] = ((/* implicit */signed char) (+((~((~(((/* implicit */int) var_5))))))));
        var_24 ^= ((((/* implicit */long long int) (+(((/* implicit */int) arr_15 [(unsigned short)4] [i_7]))))) * (max((((/* implicit */long long int) 1230530667U)), (9087814195333383854LL))));
        arr_29 [i_7] |= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned char) (((+(arr_3 [i_7 - 1] [i_7] [i_7 - 1]))) / (((long long int) arr_5 [i_7 - 1] [i_7] [i_7] [i_7]))));
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_33 [i_8 - 1] = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) var_1)))));
        /* LoopNest 2 */
        for (long long int i_9 = 1; i_9 < 12; i_9 += 1) 
        {
            for (long long int i_10 = 1; i_10 < 12; i_10 += 3) 
            {
                {
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_8))));
                    var_26 = ((/* implicit */unsigned char) ((long long int) ((int) ((var_14) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_8] [i_8] [i_10]))))));
                }
            } 
        } 
        arr_39 [i_8] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_10)), (arr_0 [i_8 - 1]))) - (((/* implicit */unsigned long long int) (~((-(arr_38 [2LL]))))))));
        var_27 = ((/* implicit */int) max((var_27), ((~(max(((~(((/* implicit */int) var_8)))), ((-(((/* implicit */int) arr_2 [i_8] [i_8 - 1] [i_8 - 1]))))))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
    {
        var_28 ^= arr_5 [i_11] [i_11] [i_11] [i_11];
        /* LoopNest 3 */
        for (long long int i_12 = 1; i_12 < 20; i_12 += 3) 
        {
            for (signed char i_13 = 0; i_13 < 21; i_13 += 2) 
            {
                for (unsigned short i_14 = 2; i_14 < 18; i_14 += 1) 
                {
                    {
                        arr_52 [i_11] [i_14] [i_13] [i_12] = ((/* implicit */long long int) ((_Bool) max((arr_19 [i_14 - 2] [i_12 + 1] [i_12] [i_12 + 1]), (arr_19 [i_14 + 3] [i_12 - 1] [i_12] [i_12 + 1]))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (+(max((arr_3 [i_11] [i_12 - 1] [i_13]), (arr_3 [i_11] [i_12 + 1] [i_11]))))))));
                    }
                } 
            } 
        } 
        var_30 = ((max((max((arr_51 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), (((/* implicit */long long int) var_10)))), (((long long int) var_16)))) <= ((-(((long long int) arr_44 [i_11])))));
    }
    var_31 ^= ((/* implicit */_Bool) var_7);
}
