/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62520
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
    var_11 = ((/* implicit */unsigned char) ((((long long int) (signed char)-116)) + (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_12 = (unsigned short)32717;
    var_13 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) max((((unsigned long long int) arr_0 [i_2])), (((((/* implicit */_Bool) 1629189215325399155ULL)) ? (((/* implicit */unsigned long long int) 1770377404)) : (arr_0 [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (max((min((arr_2 [i_0] [i_0] [i_3 - 1]), (arr_2 [i_0] [i_1] [i_3 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (unsigned short)17064)) : (((/* implicit */int) arr_9 [i_4] [i_3 - 1] [i_2] [i_2] [i_4] [i_2])))))))));
                                var_15 = ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        var_16 ^= ((((/* implicit */_Bool) (~(-2147483638)))) ? (((((/* implicit */_Bool) (signed char)-96)) ? (var_9) : (((/* implicit */unsigned long long int) -688415046)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                        arr_16 [i_2] [12LL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) ^ (arr_13 [i_0] [(unsigned char)3] [(_Bool)1] [i_5])));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */int) var_9);
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)17072)) - ((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_6]))))));
                    }
                    arr_20 [i_2] = ((/* implicit */unsigned short) min((min((arr_2 [i_0] [(unsigned char)6] [16ULL]), (arr_2 [i_0] [i_1] [i_2]))), (((((/* implicit */_Bool) 18446744073709551602ULL)) ? (arr_14 [i_0] [i_1] [i_0] [i_2]) : (arr_14 [i_0] [i_0] [i_0] [i_0])))));
                    var_19 = ((/* implicit */unsigned short) arr_10 [14ULL] [i_1] [14ULL] [i_1] [i_1]);
                }
            } 
        } 
    } 
}
