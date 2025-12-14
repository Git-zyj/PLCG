/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71183
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_10 |= ((((/* implicit */_Bool) (+(arr_2 [i_0] [i_3 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0] [i_3 - 1]) != (arr_2 [i_0] [i_3 + 1]))))) : (arr_2 [i_0] [i_3 + 1]));
                                arr_17 [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) max((min((arr_3 [i_2] [i_3 + 1]), (((/* implicit */unsigned short) arr_4 [i_0] [i_0])))), (((/* implicit */unsigned short) (((_Bool)0) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])))))))) | (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)5693)) : (((/* implicit */int) var_2)))), (((/* implicit */int) max((arr_13 [i_3] [i_3] [i_2] [(unsigned char)0]), ((signed char)3))))))));
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) max(((~(((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0])))), (((((/* implicit */int) (unsigned short)20)) - (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3 + 1] [6LL] [i_4])))))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [(_Bool)1]))))))))));
                var_13 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775791LL)) ? (((((/* implicit */_Bool) 728401753)) ? (-4125934124354336216LL) : (((/* implicit */long long int) 1693468951)))) : (((8827229999965242000LL) >> (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2664094181U)));
}
