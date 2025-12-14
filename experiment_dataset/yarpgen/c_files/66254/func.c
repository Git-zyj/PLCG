/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66254
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4))) << (((min((((/* implicit */unsigned int) var_9)), (var_4))) - (84U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) var_7))))) ? (max((((/* implicit */int) var_16)), (var_5))) : ((+(((/* implicit */int) var_18)))))))));
    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (2535948252U)))))) ? (((/* implicit */int) var_8)) : (max((((/* implicit */int) min((var_11), (var_10)))), ((+(((/* implicit */int) var_10))))))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((var_4) < (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) var_15))))))))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) ((((/* implicit */int) (signed char)120)) == (((/* implicit */int) (signed char)111)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) (unsigned short)0))));
                        var_24 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_1 [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)0)))))));
                        var_25 = (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_18)), (arr_7 [i_3] [i_1] [i_2 - 1] [i_3])))))));
                    }
                    for (signed char i_4 = 4; i_4 < 20; i_4 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)180)) ^ (((((var_7) < (arr_4 [i_0] [i_0] [i_0 - 3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_4]))))) : (((/* implicit */int) arr_2 [i_4 - 2]))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2147483643)) ? (max((((/* implicit */int) arr_6 [i_0] [i_1] [5] [i_1])), (arr_4 [i_0 + 1] [i_1] [i_4]))) : (((/* implicit */int) (unsigned char)147))));
                    }
                    for (long long int i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (arr_13 [(unsigned char)15] [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                            var_29 = (signed char)-111;
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)1)) >> (((((/* implicit */int) (signed char)127)) - (101)))));
                            var_31 += ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2 - 2] [i_5] [i_5] [i_5 + 1])))))));
                        }
                        var_32 = ((/* implicit */signed char) ((((((/* implicit */int) var_10)) < (((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_5])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7338)) ? (1316788198) : (-4)))) ? (((var_14) - (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_17 [i_5] [i_2 + 1] [i_2 - 1] [i_0 - 3] [i_0 - 3])))) : (((/* implicit */int) var_9))));
                    }
                    arr_18 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) arr_17 [i_2 - 2] [i_2] [i_2] [(unsigned char)6] [i_2 - 2]);
                    var_33 = ((/* implicit */int) arr_10 [i_2] [i_2] [i_0] [i_0]);
                    var_34 &= ((((/* implicit */_Bool) (signed char)71)) ? (19LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-102))));
                    var_35 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-78))));
                }
            } 
        } 
    } 
}
