/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74701
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (unsigned char)37);
                    arr_7 [i_0] [i_1] [i_0] = (((-(((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])))) < (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)0)))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */int) (((+(((((/* implicit */_Bool) 9)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) | (((/* implicit */unsigned long long int) max((2697484183733598019LL), (((/* implicit */long long int) (unsigned char)37)))))));
    }
    for (long long int i_3 = 1; i_3 < 23; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))))), (min((((/* implicit */long long int) (unsigned short)35610)), (var_4))))))));
        var_17 = ((/* implicit */_Bool) (+(arr_11 [i_3 + 1])));
    }
    for (long long int i_4 = 1; i_4 < 23; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        for (long long int i_8 = 2; i_8 < 22; i_8 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4 + 1] [i_5] [i_4] [i_5 + 1])) ? (((/* implicit */int) arr_22 [i_4 + 1] [i_5] [i_4 - 1] [i_5 + 1])) : (((/* implicit */int) arr_22 [i_4 + 1] [i_5] [(unsigned char)19] [i_5 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_4 + 1] [i_5] [i_4 + 1] [i_5 + 1])) <= (((/* implicit */int) arr_22 [i_4 + 1] [i_5] [i_5] [i_5 + 1]))))) : (((/* implicit */int) arr_22 [i_4 + 2] [i_5] [(_Bool)1] [i_5 + 1]))));
                                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)1230))));
                            }
                        } 
                    } 
                    arr_27 [(unsigned char)19] [i_5] [i_5] [i_6] = (+(((var_13) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5] [i_5])) ? (arr_17 [i_4]) : (arr_17 [i_5])))))));
                }
            } 
        } 
        arr_28 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)20383)), (((((/* implicit */_Bool) 9386341425507467496ULL)) ? (arr_10 [(_Bool)1]) : (((/* implicit */unsigned long long int) arr_14 [i_4 + 1] [i_4 - 1]))))));
    }
    for (long long int i_9 = 2; i_9 < 20; i_9 += 1) 
    {
        arr_32 [i_9] = ((/* implicit */unsigned short) (unsigned char)244);
        arr_33 [i_9] = ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) var_14)))) ? (max((arr_10 [i_9]), (((/* implicit */unsigned long long int) arr_20 [i_9] [i_9 + 1] [i_9] [i_9 - 1])))) : (((/* implicit */unsigned long long int) arr_17 [i_9 - 2])))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (arr_30 [i_9] [i_9])))))));
    }
    var_20 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) (signed char)7)) && (((/* implicit */_Bool) -9223372036854775798LL)))), ((!((_Bool)1))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((var_11), (((/* implicit */signed char) var_2))))))))));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 18; i_10 += 3) 
    {
        for (signed char i_11 = 1; i_11 < 16; i_11 += 2) 
        {
            {
                arr_39 [i_10] [i_10] = ((/* implicit */int) (_Bool)0);
                arr_40 [i_10] [i_11] = arr_3 [i_10] [3] [(_Bool)0];
            }
        } 
    } 
}
