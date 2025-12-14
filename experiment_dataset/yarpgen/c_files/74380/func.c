/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74380
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((short)-32748), (((/* implicit */short) var_0))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-32748)))))))) ? ((+(min((var_4), (arr_1 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_5))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((var_19), ((-(((/* implicit */int) (unsigned char)138))))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(min((((/* implicit */int) (unsigned char)19)), (min((arr_1 [i_0]), (var_4))))))))));
                            var_21 -= ((/* implicit */int) min((max((((/* implicit */long long int) arr_3 [i_0] [19])), (66571993088LL))), (((/* implicit */long long int) (unsigned char)159))));
                            var_22 &= ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (var_8)))), (min((((/* implicit */unsigned long long int) var_18)), ((~(arr_7 [i_0] [i_1] [i_2])))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)26)) ? (min((((/* implicit */int) ((((/* implicit */_Bool) (short)18744)) && (((/* implicit */_Bool) (short)-11553))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [13])) : (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))))) : (arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) var_13);
                    var_25 = ((/* implicit */int) ((((max((-2445595905400366925LL), (((/* implicit */long long int) (short)11552)))) == (((/* implicit */long long int) var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2701597698376888666LL)) ? (169911191576411096ULL) : (((/* implicit */unsigned long long int) arr_11 [i_5]))))) ? (arr_16 [i_6] [i_6 + 3] [i_6 - 4] [i_6]) : (((((/* implicit */_Bool) 7903494983073012001LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_16 [i_4] [i_4] [i_5] [i_6 + 1])))))));
                    arr_18 [i_4] [(unsigned char)5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-11578)) & (-1450215793)))) ? (arr_7 [i_6 + 4] [i_6] [i_6 + 3]) : (((/* implicit */unsigned long long int) ((int) arr_9 [20ULL] [i_6 + 4] [20ULL] [i_6] [i_6 - 2])))));
                    var_26 ^= ((/* implicit */int) max((((var_12) & (((/* implicit */unsigned long long int) arr_9 [i_6 + 3] [i_6 + 2] [i_6] [i_6 + 1] [i_6 + 3])))), (((/* implicit */unsigned long long int) var_0))));
                }
            } 
        } 
    } 
    var_27 = var_13;
}
