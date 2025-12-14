/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71672
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
    for (int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_5 [i_0] [i_0 - 3] [i_0 + 1])) - (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0 - 1])))), (((arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 3] [i_0 - 3]))))));
                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_7))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        arr_10 [i_0 + 1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)16508))));
                        arr_11 [i_3 - 1] [i_3 + 3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -668279267);
                        var_12 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))) ^ (((long long int) ((((/* implicit */int) (signed char)-101)) >= (((/* implicit */int) arr_1 [i_2] [i_1])))))));
                    }
                    var_13 = ((/* implicit */long long int) ((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_4)) : (arr_4 [i_0] [i_1] [i_2])));
                    arr_12 [i_0 + 2] [i_0 + 2] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_9 [i_0] [i_0 - 2] [i_1] [i_1] [i_2] [(signed char)10]) >= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))))) == (((/* implicit */int) ((unsigned char) 5846368524287337803LL))))))) > ((((~(var_8))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_2])) << (((arr_0 [i_2]) - (1641210444)))))))));
                }
                for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((var_5) & (((/* implicit */long long int) max((((int) arr_14 [i_0] [i_1] [i_4] [i_0])), (((((/* implicit */_Bool) arr_14 [i_1] [i_4] [i_1] [i_1])) ? (arr_4 [i_0 + 2] [i_0] [i_0]) : (((/* implicit */int) var_0))))))))))));
                                var_15 = ((/* implicit */_Bool) min((min((13046957675311423386ULL), (((/* implicit */unsigned long long int) (signed char)100)))), ((~(13046957675311423386ULL)))));
                                var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_5 + 2] [i_0 - 2] [i_5 + 1])))) ? (((/* implicit */long long int) min((((/* implicit */int) var_4)), (arr_2 [i_5 + 2] [i_5 + 1])))) : (((var_6) << (((((arr_2 [i_5 + 2] [i_5 - 1]) + (1186448870))) - (60)))))));
                            }
                        } 
                    } 
                    var_17 += ((/* implicit */signed char) 7484775085335334321ULL);
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 13734827287266868096ULL)) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) (short)-32748)) == (1033260762)))))));
}
