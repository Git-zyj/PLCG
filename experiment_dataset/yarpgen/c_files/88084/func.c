/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88084
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
    var_12 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_13 ^= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 69457709U)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (_Bool)1))))) ? (max((var_0), (((/* implicit */long long int) 4225509587U)))) : (((/* implicit */long long int) max((4225509586U), (((/* implicit */unsigned int) var_3))))))));
                            arr_11 [i_3] = ((/* implicit */signed char) var_10);
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-2147483647 - 1))))) | (((unsigned int) var_2))));
                            arr_13 [i_3 - 2] [i_3] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) var_11)), (((4225509587U) | (var_7))))), ((((+(69457709U))) - (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_8)), ((short)-8881)))))))));
                        }
                    } 
                } 
                arr_14 [8ULL] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_8)) + (2147483647))) >> (((((((/* implicit */int) arr_8 [2])) | (((/* implicit */int) var_11)))) + (53))))) >> (((4225509578U) - (4225509547U)))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        {
                            arr_20 [1] [i_1] [i_4] [i_4] = (!(((/* implicit */_Bool) ((unsigned long long int) var_4))));
                            arr_21 [i_5] [i_4] [i_4] [i_4] [i_1] [i_0] = ((/* implicit */_Bool) ((((var_4) + (2147483647))) >> (((4225509590U) - (4225509579U)))));
                            var_14 = ((/* implicit */unsigned char) var_4);
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned long long int) var_1)), ((~(16405822397487294453ULL)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_6 = 2; i_6 < 22; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((((unsigned int) var_10)) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) / (4225509574U))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_6 [i_1 + 1] [i_8] [(_Bool)1] [i_7])))))))));
                                var_17 = ((/* implicit */short) (~(((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) arr_25 [i_8] [i_0] [i_1 + 1] [i_0])))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (34359738367LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), ((signed char)66))))) : (((((/* implicit */_Bool) (signed char)-69)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35))))))) : (((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_0] [i_1] [i_0] [(unsigned char)18]), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)47)))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_10])) ? (arr_17 [i_9] [i_9] [i_9]) : (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) min((arr_15 [i_9]), (((/* implicit */signed char) arr_25 [i_10] [i_10] [i_9] [i_9])))))));
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 15; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */int) (signed char)15)))))))), (var_0)));
                            arr_42 [i_9] [i_9] [i_10] [i_9] = ((/* implicit */signed char) (-((~(((/* implicit */int) var_11))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        {
                            var_21 = (+((+(((((/* implicit */_Bool) arr_23 [i_9] [i_10] [i_13] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4225509586U))))));
                            arr_51 [i_14] [i_13] [i_10] [i_14] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4234)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7)))))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_22 [i_9] [i_10] [i_13] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))) : (5177526697274622666ULL))))))));
                            var_22 = ((/* implicit */unsigned int) (unsigned short)11323);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 23; i_15 += 4) 
    {
        for (int i_16 = 0; i_16 < 23; i_16 += 1) 
        {
            {
                var_23 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_7 [i_16] [i_16] [i_16] [i_16])))));
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 23; i_17 += 3) 
                {
                    for (unsigned int i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        {
                            var_24 = max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1584126669)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (signed char)-28)))))), (max(((~(((/* implicit */int) (signed char)-103)))), (((/* implicit */int) arr_25 [i_18] [i_17] [i_16] [(signed char)10])))));
                            var_25 = ((/* implicit */unsigned char) max((max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (min((var_7), (((/* implicit */unsigned int) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
