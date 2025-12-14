/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94832
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_0]))))) != ((-(((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))) : (min((var_5), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_2)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 7; i_3 += 4) 
                    {
                        for (short i_4 = 4; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0 - 2] [i_0] [(unsigned char)1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_11), (var_0)))) ? (min((min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (arr_10 [i_0]))), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) var_9);
                                var_17 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 208671335714930116ULL)) ? (((/* implicit */int) var_11)) : (var_10)))) ? (min((arr_1 [(unsigned char)2] [(unsigned char)2]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_3] [i_0] [(signed char)6])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)12877)) : (var_10))))))) ? (min((min((((/* implicit */unsigned int) (short)-32767)), (var_5))), (((/* implicit */unsigned int) (~(var_10)))))) : (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)81)) >> (((var_3) - (1484149562U))))), (((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_13))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4 - 1] = ((/* implicit */short) (-((-(((/* implicit */int) arr_0 [i_0 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 8; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            arr_25 [i_5] [i_8] [i_7] = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
                            var_18 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 2147483641)))) ? (((/* implicit */int) ((min((var_5), (((/* implicit */unsigned int) arr_0 [(unsigned short)5])))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135)))))) : (min((var_10), (((/* implicit */int) var_6))))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) var_0))) ? (min((var_5), (((/* implicit */unsigned int) arr_15 [i_5])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_6] [i_6])) : (((/* implicit */int) var_0))))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)121)) / (((/* implicit */int) (short)32767))));
                arr_26 [(signed char)9] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((2147483647), (((/* implicit */int) var_4)))), (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((var_1) * (((/* implicit */int) arr_21 [i_5] [i_5] [i_6]))))) : (max((((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) 2147483639))))));
                arr_27 [6U] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-5084))));
            }
        } 
    } 
}
