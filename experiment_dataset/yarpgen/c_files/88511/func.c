/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88511
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
    var_17 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_18 = ((/* implicit */short) var_2);
                    var_19 = ((/* implicit */signed char) min((arr_0 [i_2]), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (min((((/* implicit */unsigned long long int) arr_5 [i_0])), (arr_0 [i_0])))))));
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((2631641399U) < (((/* implicit */unsigned int) 385248687))))) << (((min((((/* implicit */long long int) (signed char)-15)), (5557201216938642157LL))) + (32LL)))))), (arr_6 [i_0] [i_1] [i_1] [(_Bool)1])));
                    arr_8 [i_1] = (short)32767;
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_3 = 4; i_3 < 9; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 4; i_4 < 10; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) arr_0 [i_5 - 3]);
                                arr_17 [i_1] [i_5] [i_3] [(unsigned short)3] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_5] [i_3] [i_1])) > (arr_14 [4LL] [i_3 + 1] [(short)8] [i_5 - 1]))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_3 + 2] [i_1] [i_5] [i_4 + 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        var_21 += ((/* implicit */unsigned int) ((arr_0 [i_0]) << (((arr_0 [i_0]) - (3081623229891548133ULL)))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0])) | (((/* implicit */int) (!(((/* implicit */_Bool) 1596088653198115611ULL)))))));
                        arr_20 [i_1] [i_1] [i_3 - 4] [6ULL] = ((/* implicit */signed char) ((arr_1 [i_0]) >> (((var_13) + (8448097700764178762LL)))));
                        arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_6 - 1] [i_0])))) * ((~(((/* implicit */int) arr_16 [i_0] [i_0] [i_3] [i_1] [i_0] [i_1]))))));
                    }
                    arr_22 [(unsigned char)6] [i_1] [i_3 + 2] [i_3 - 1] = ((/* implicit */unsigned char) var_12);
                    arr_23 [(unsigned short)2] [i_0] [i_1] [(signed char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_18 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_1])) : (4294967295U)));
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) (~(arr_26 [i_1] [i_1])));
                    arr_27 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (short)-22163);
                }
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((unsigned short) (+(min((14039515685463503359ULL), (((/* implicit */unsigned long long int) -5557201216938642180LL)))))));
                    var_25 = ((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_1] [i_8]);
                    arr_31 [i_1] [i_1] [i_8] [i_8] = (!(((((/* implicit */int) (unsigned char)153)) <= (var_10))));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_26 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_30 [i_8] [i_1] [i_1] [i_1]), (((/* implicit */int) (signed char)-7))))) ? (((((/* implicit */_Bool) 1596088653198115636ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-15)))) : (((((/* implicit */_Bool) arr_24 [i_0])) ? (((/* implicit */int) var_7)) : (arr_12 [i_0] [i_8] [i_8] [i_9]))))))));
                        arr_34 [i_1] [i_1] [i_1] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((arr_11 [i_9] [i_8]), (((/* implicit */long long int) (signed char)121))))))) || (((/* implicit */_Bool) (unsigned short)65535))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_1] [(unsigned char)6] [(_Bool)1] [i_1] [i_9])) ? (((/* implicit */unsigned long long int) arr_30 [i_1] [i_1] [i_1] [i_9])) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3))))) ? (max((arr_9 [(short)4]), (((/* implicit */unsigned long long int) (unsigned short)4095)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103)))))));
                        arr_35 [(unsigned short)1] [i_1] [(unsigned short)1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) arr_14 [i_0] [4LL] [i_0] [i_0]))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1]))) | (arr_6 [i_0] [i_1] [i_9] [i_9]))) >> (((/* implicit */int) ((_Bool) arr_28 [i_8] [i_1] [i_0])))))));
                    }
                }
            }
        } 
    } 
    var_28 -= ((/* implicit */int) (~(((9223372036854775802LL) >> (((((/* implicit */int) (signed char)110)) & (((/* implicit */int) var_15))))))));
}
