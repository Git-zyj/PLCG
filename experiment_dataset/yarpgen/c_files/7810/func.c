/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7810
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
    var_14 = ((/* implicit */short) max((var_3), (((/* implicit */unsigned short) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) 14LL)) ^ (11320083176665543683ULL)))));
                    var_16 = ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_1 - 1] [i_2] [i_0 - 2])) ? ((~(2147483647))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)7873)))));
                    var_17 = ((/* implicit */unsigned short) min((((arr_4 [i_0 + 1] [i_0 - 2] [i_1 + 2]) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)11590))))))), (max((((/* implicit */unsigned long long int) (~(var_9)))), (6ULL)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) min((1916793336408938535LL), (((/* implicit */long long int) var_3)))))) ? (((((/* implicit */_Bool) ((var_8) + (7126660897044007933ULL)))) ? (arr_4 [i_0 - 2] [i_0 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((int) 2059490923680253088ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [(_Bool)1] [i_3] [3ULL]))) ^ (arr_5 [i_0] [i_0] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned long long int) var_13)) ^ (arr_4 [i_0] [i_1] [(unsigned short)7])))))));
                            var_19 = ((/* implicit */unsigned long long int) ((max((arr_3 [i_0 - 2] [i_0 + 1]), (arr_3 [i_0 - 2] [i_0 - 2]))) & (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) % (16U)))) & (((long long int) arr_0 [i_0 + 1] [i_1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 8; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_5] [i_5 + 2] [i_5] [i_5] [i_1 - 1] [i_0 - 1])) ? (((arr_0 [10U] [i_5]) + (9223372036854775807LL))) : (((/* implicit */long long int) ((220742518) + (((/* implicit */int) (_Bool)1))))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(var_7)))) >= (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163)))))))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) (~((+(((((/* implicit */_Bool) arr_14 [i_0] [i_6] [i_5] [i_6] [i_0])) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned char)112))))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((long long int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_8))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_5 + 2] [i_1 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))))));
                            var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1] [9] [(unsigned char)2])), (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2])) ? (6381668222954576975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_1 - 1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 1; i_8 < 10; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) ((((arr_19 [i_0] [i_0 - 1] [i_0] [(signed char)5]) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (16387253150029298527ULL))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_8 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_27 [i_0] [i_0 - 1])) : (((/* implicit */int) (_Bool)1)))))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0 - 2])) ? (arr_0 [i_1 - 1] [i_0 - 1]) : (-5405049655882667194LL))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */int) (-(18446744073709551615ULL)));
}
