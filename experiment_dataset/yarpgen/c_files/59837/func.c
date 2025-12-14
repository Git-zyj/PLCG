/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59837
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(var_5))) - (((((/* implicit */_Bool) var_0)) ? (var_5) : (var_11)))))) ? (((((/* implicit */unsigned int) (+(var_2)))) - (var_12))) : (((var_7) ? (1U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61525)) - (1077599053))))))));
    var_14 += ((/* implicit */unsigned int) var_11);
    var_15 = ((((/* implicit */_Bool) (~(var_6)))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-26))))), (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10))))) : (((/* implicit */long long int) (-(max((((/* implicit */int) var_1)), (1077599071)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_16 &= ((/* implicit */int) ((((/* implicit */_Bool) -1077599050)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))) : (-8261762799693300078LL)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2])) ? (arr_6 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 3; i_4 < 19; i_4 += 1) /* same iter space */
                        {
                            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) var_11)) : (var_12)));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 13579866768487538903ULL)))) : (arr_12 [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_4 - 3] [i_4 + 2])));
                            arr_16 [i_0] [i_4 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [(unsigned char)20] [i_0] [3ULL] [i_3] [(unsigned char)20] [i_4 + 1])) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        }
                        for (short i_5 = 3; i_5 < 19; i_5 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) 8946297827544138959LL))) >> (((var_11) + (2095571756)))));
                            arr_19 [i_0] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) (-(arr_12 [i_2] [i_0] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                            arr_20 [i_0] [i_0] [(short)10] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) << (((var_12) - (3671510806U)))))) ? (((/* implicit */unsigned long long int) var_4)) : (arr_10 [i_0] [8LL] [i_0] [i_0])));
                        }
                    }
                    arr_21 [(short)4] [(short)4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-9223372036854775795LL) : (((/* implicit */long long int) var_2))))) ? (((/* implicit */long long int) var_6)) : (arr_11 [i_0] [i_1] [i_2])));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_13 [(signed char)0]))));
        arr_22 [8] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741823U)) ? (-3845829715689858519LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11)))));
        arr_23 [(unsigned short)20] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_6))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_0))));
    }
    for (short i_6 = 3; i_6 < 21; i_6 += 3) 
    {
        arr_27 [i_6] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_25 [i_6 + 3])) ? (((var_1) ? (5688190249496802168ULL) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_25 [i_6 - 3]) : (arr_24 [i_6])))))), (((/* implicit */unsigned long long int) max(((+(arr_24 [i_6]))), (min((var_6), (arr_25 [i_6]))))))));
        arr_28 [18] [3ULL] = ((/* implicit */int) var_3);
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((min((((/* implicit */int) (unsigned short)65529)), (-1077599050))) + (2147483647))) << (((((((/* implicit */int) (unsigned short)27636)) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775780LL))) + (34LL))))) - (1768704)))))))))));
        arr_29 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((var_4), (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) 926309413)))))))) ? (((/* implicit */int) var_7)) : (((var_6) + ((-(var_11)))))));
        var_23 -= ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), ((~(-1077599040)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) 2242465901U)) : (12758553824212749432ULL)))) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49997))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned int) var_11))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        var_24 &= ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) var_4)) / (arr_26 [15U])))));
        var_25 = ((/* implicit */long long int) arr_25 [i_7]);
        var_26 = ((/* implicit */long long int) ((_Bool) arr_24 [i_7]));
    }
    var_27 = ((/* implicit */short) ((((var_1) ? (((/* implicit */int) var_8)) : (((var_6) & (-479821246))))) - (((((((var_1) ? (var_6) : (((/* implicit */int) var_0)))) + (2147483647))) << ((((~(var_4))) - (193390729)))))));
}
