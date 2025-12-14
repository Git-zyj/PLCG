/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59500
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-23845))))) ? (max((32767U), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-23845)) + (2147483647))) << (((arr_8 [i_2] [i_2] [2U] [i_2]) - (2098116189)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))));
                                arr_12 [i_4] [i_2] [i_3] [i_2] [i_2] [i_0] &= ((/* implicit */unsigned int) max(((-(arr_10 [i_3] [i_4 - 2] [i_4 + 2] [i_4] [i_4]))), (((/* implicit */unsigned long long int) min((arr_9 [i_0 + 1] [i_2 - 2]), (((/* implicit */unsigned int) ((arr_3 [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23845)))))))))));
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (~(min((((/* implicit */unsigned long long int) arr_1 [i_2])), (min((arr_10 [i_4] [i_4 - 1] [12U] [i_4 - 1] [i_4 + 1]), (arr_3 [i_2]))))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2] [i_2] |= ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 357398038)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)120))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (arr_2 [i_0] [i_0])))) : (var_0)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_18 [13U] [i_0] [13U] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) >= (-6050208228699733854LL)));
                                arr_19 [i_6] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_13);
                                var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_1] [i_1] [i_2 - 1] [i_5]))) ? (((/* implicit */unsigned long long int) min(((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (signed char)124))))), ((-(arr_0 [i_5])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5131150344868776504LL)) ? (((/* implicit */long long int) arr_8 [i_0] [i_1] [3LL] [i_1])) : (-8520383365576257584LL)))) ? (max((((/* implicit */unsigned long long int) var_8)), (8ULL))) : (arr_10 [i_0] [i_0 + 4] [i_2 - 1] [i_5] [i_6 + 1])))));
                                var_18 &= ((/* implicit */_Bool) max((max((arr_10 [i_0] [i_1] [i_6 - 1] [i_5] [i_2 + 1]), (((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_1] [i_2 - 3] [i_6 + 1])))), (((/* implicit */unsigned long long int) min((arr_9 [(signed char)8] [i_6]), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_2))))))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (arr_16 [i_2]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */long long int) ((((((arr_6 [i_0] [i_0] [i_0] [i_0]) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (181))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]))))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_13))))))))));
        arr_21 [i_0] [11] = ((/* implicit */_Bool) -1LL);
    }
    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            for (unsigned int i_9 = 1; i_9 < 14; i_9 += 3) 
            {
                {
                    var_20 &= ((/* implicit */unsigned char) var_13);
                    arr_30 [i_8] = ((/* implicit */_Bool) (+((-(min((70368744177663LL), (((/* implicit */long long int) (_Bool)1))))))));
                }
            } 
        } 
        var_21 &= ((/* implicit */_Bool) min((max((((((-20) + (2147483647))) >> (((/* implicit */int) var_1)))), ((~(((/* implicit */int) var_1)))))), ((~(((/* implicit */int) arr_15 [i_7 + 4] [i_7] [i_7 + 4] [(signed char)14] [i_7]))))));
        arr_31 [10LL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [10ULL] [10ULL]))))), ((~(arr_22 [i_7] [i_7])))))));
        arr_32 [i_7] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [6LL] [i_7] [i_7 - 1] [6LL] [i_7 - 1])) ? (((/* implicit */int) arr_15 [i_7] [(_Bool)0] [i_7] [i_7 + 3] [i_7])) : (((/* implicit */int) var_2))))) ? (min((((/* implicit */int) var_12)), (var_8))) : (((/* implicit */int) var_13)))), (arr_1 [i_7 + 3])));
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_12)))))))) ? (((/* implicit */unsigned long long int) var_10)) : (((var_14) >> (((((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (4917484090598754477LL)))))));
}
