/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73371
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) max((var_8), (arr_1 [i_0])))), ((~(((/* implicit */int) var_3))))))));
        arr_2 [i_0] = var_14;
        var_17 = max((arr_0 [i_0]), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (short i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        var_18 = (+(((/* implicit */int) arr_4 [i_1])));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_5)) ? (9011847711880796520LL) : (((/* implicit */long long int) ((/* implicit */int) (short)17117))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) || (((/* implicit */_Bool) -1436774188))))))));
        var_19 = ((/* implicit */short) var_7);
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_20 = ((/* implicit */long long int) arr_1 [i_2]);
        arr_8 [0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_4 [i_2])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_0 [(unsigned char)5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1436774188))))) : (1436774188))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) 
                    {
                        {
                            arr_20 [i_5] [i_5] [0LL] [i_4] [(_Bool)0] [i_2] [i_5] = ((/* implicit */short) (+(((long long int) (signed char)0))));
                            arr_21 [i_5] [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */signed char) -1436774188);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) 
            {
                for (signed char i_8 = 3; i_8 < 10; i_8 += 1) 
                {
                    {
                        arr_28 [i_2] = ((/* implicit */long long int) arr_22 [(unsigned short)2]);
                        arr_29 [i_2] [i_3] [i_7 + 1] [i_8] = arr_24 [i_2] [i_3 + 1] [i_7] [i_8];
                    }
                } 
            } 
        }
    }
    var_21 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (short i_9 = 1; i_9 < 15; i_9 += 2) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_36 [(short)6] [(unsigned short)11] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned char) ((var_14) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_9])))))), (var_11))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) || (((/* implicit */_Bool) 876443383U)))))));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((unsigned long long int) ((((/* implicit */_Bool) ((3418523912U) / (((/* implicit */unsigned int) -632956766))))) ? (((/* implicit */unsigned long long int) arr_35 [i_9 + 3] [i_9 + 1])) : (17463991539625804919ULL))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (31ULL))))))));
}
