/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57855
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
    var_11 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_1))))))) - (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_10 [9LL] [i_1 + 1] [(short)12] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (arr_3 [i_0]))))) ^ (((/* implicit */int) var_2))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1 - 2] [(_Bool)1] [i_1 + 1])) ? (arr_11 [i_1 - 2] [i_1 - 1] [i_1] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)91)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [(signed char)15] [i_0])) || (((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1] [i_2] [i_3]))))) < (((arr_15 [i_0] [i_2] [(unsigned short)9] [i_0] [(short)0] [i_3]) % (((/* implicit */int) var_9)))))))));
                                var_13 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_14 [i_1 - 2] [i_4] [i_4 + 1])) ? (arr_7 [i_1 - 1] [8LL] [(short)10] [i_4 + 1]) : (((/* implicit */long long int) arr_12 [i_1 + 1] [i_1] [i_4])))), (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_1 + 1] [i_1] [(short)3])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 13; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)6] [i_0])) || (((/* implicit */_Bool) arr_2 [i_5 + 1] [i_1] [i_0])))))) > (var_0))) ? (((((((/* implicit */int) ((short) arr_13 [(unsigned char)14] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [7ULL]))) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_0] [(unsigned short)0] [i_6])) - (47100))))) : ((((_Bool)1) ? (((((/* implicit */int) (unsigned char)91)) % (((/* implicit */int) (unsigned char)165)))) : (arr_15 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])))));
                                var_15 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_1] [i_6 - 2])) >= (((/* implicit */int) ((unsigned short) arr_3 [(_Bool)1]))))) && ((!(((/* implicit */_Bool) arr_18 [i_1] [(signed char)10] [i_5 + 2] [i_5]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
