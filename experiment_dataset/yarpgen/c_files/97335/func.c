/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97335
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_7 [i_1])))) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_10 [i_3] [i_3] [i_2] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))) : (arr_3 [i_1] [i_2] [i_1]))) : (min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) var_18))) & (arr_2 [i_3] [8U])))))));
                                var_21 = ((((/* implicit */_Bool) min((((var_3) ? (arr_7 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */unsigned int) ((var_11) < (((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */int) ((short) arr_2 [i_4] [i_3]))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_1]))));
                                arr_12 [i_3] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((short) arr_2 [(_Bool)1] [i_2]))), ((~(((/* implicit */int) var_12))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (13034150499004734611ULL)))) : (((((arr_8 [i_0] [i_1] [i_2] [i_0]) + (2147483647))) >> (((((/* implicit */int) var_12)) / (arr_8 [i_0] [i_1] [i_2] [i_3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 9; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 9; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_7 - 2])))))));
                            var_23 += ((/* implicit */unsigned short) ((unsigned int) arr_2 [i_7] [i_8]));
                        }
                    } 
                } 
                var_24 ^= ((/* implicit */short) arr_11 [i_6] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 1] [i_5 - 1]);
                arr_23 [i_5 + 1] = ((/* implicit */unsigned char) ((unsigned long long int) arr_21 [(unsigned char)5] [i_6] [i_6] [i_6]));
            }
        } 
    } 
}
