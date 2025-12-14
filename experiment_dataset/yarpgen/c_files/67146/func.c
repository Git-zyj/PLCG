/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67146
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)101))));
        var_15 *= ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)65535)), ((-((~(((/* implicit */int) var_1))))))));
    }
    /* LoopSeq 2 */
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) 894868251)), ((-(max((var_6), (((/* implicit */long long int) var_8))))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) var_9);
        arr_6 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        var_17 = ((/* implicit */signed char) (+(min((((/* implicit */int) (signed char)-45)), (var_2)))));
                        var_18 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(arr_12 [i_3] [i_4 + 3] [i_4 + 2])))), (((long long int) arr_16 [i_3] [i_4 + 1] [i_4 + 1] [i_4 + 2]))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_6 = 4; i_6 < 12; i_6 += 1) 
    {
        for (signed char i_7 = 3; i_7 < 13; i_7 += 4) 
        {
            {
                var_19 = var_12;
                /* LoopNest 3 */
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    for (unsigned char i_9 = 2; i_9 < 12; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            {
                                arr_33 [i_10] [i_10] [i_8] [i_8] = ((/* implicit */unsigned char) arr_2 [i_7]);
                                arr_34 [i_6] [i_6] [i_6] [i_10] [i_6] = ((/* implicit */signed char) arr_3 [i_6] [i_6 - 1]);
                                arr_35 [i_6] [i_10] [i_8] [i_8] [i_9] [12LL] [i_10] = arr_32 [i_10] [i_7] [i_8] [i_9] [i_8];
                                arr_36 [7] [7] [(signed char)9] [7] [i_10] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) + (arr_22 [i_10] [i_9] [i_8]));
                                arr_37 [i_8] [i_8] &= ((/* implicit */unsigned short) min((23208784331141829LL), (((/* implicit */long long int) ((unsigned short) arr_2 [i_6 + 2])))));
                            }
                        } 
                    } 
                } 
                arr_38 [7ULL] [i_6 - 2] [(unsigned short)0] = arr_13 [i_6] [i_7 + 1];
                var_20 += ((((/* implicit */int) max((((/* implicit */unsigned char) ((16765751595363186008ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29385)))))), (arr_7 [i_6 - 1] [i_7])))) * ((+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (((+((-(((/* implicit */int) var_9)))))) > (((/* implicit */int) var_8))));
}
