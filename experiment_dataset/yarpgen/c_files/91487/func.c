/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91487
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
    var_13 ^= ((/* implicit */signed char) max(((short)7186), (((/* implicit */short) var_5))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)39356);
                            arr_14 [i_1] [(_Bool)1] [i_2] [(unsigned char)9] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        }
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((((/* implicit */unsigned long long int) arr_3 [i_0] [(_Bool)1])), (max((14210142445149233941ULL), (((/* implicit */unsigned long long int) (short)2515)))))))));
                    }
                    var_15 = ((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_2] [i_1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (((((/* implicit */_Bool) var_0)) ? (3405903150U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_5] [i_5])))))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(3136721349103052468LL))))));
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65535))));
                    }
                    arr_19 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_8);
                    arr_20 [2ULL] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) 3511637847830387501LL)), (max((36028797018959872ULL), (((/* implicit */unsigned long long int) (short)-27590)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (arr_3 [i_0 - 3] [i_0 - 1]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
}
