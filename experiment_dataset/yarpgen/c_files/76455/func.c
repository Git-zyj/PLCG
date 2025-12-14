/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76455
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */unsigned long long int) (~(max((min((var_5), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    arr_9 [i_0] = (((-(var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                    var_14 = ((/* implicit */unsigned char) (((~(var_5))) == (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
                    var_15 -= ((/* implicit */unsigned char) var_10);
                }
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_16 = ((/* implicit */unsigned long long int) (-(min((4161774336U), (((/* implicit */unsigned int) (_Bool)1))))));
                    arr_13 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 3579648298443069053LL)) && (((/* implicit */_Bool) (unsigned char)194))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 12; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((4161774355U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60)))))), (min((max((var_2), (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_8)))))))));
                                arr_20 [i_0] [i_0] [i_1] [i_3] [i_4] [i_5 - 1] = ((/* implicit */unsigned char) max((max((min((((/* implicit */unsigned long long int) (unsigned char)44)), (0ULL))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_10))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    var_18 = max((((/* implicit */long long int) var_12)), ((((+(var_4))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_6))))))));
                    arr_24 [i_6] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_6)))) != (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_10)))))))), (min((max((((/* implicit */unsigned long long int) var_9)), (var_8))), (max((var_7), (((/* implicit */unsigned long long int) var_6))))))));
                }
                var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (var_3))))) != (max((4ULL), (((/* implicit */unsigned long long int) 6LL))))))), (max((var_2), (((/* implicit */long long int) var_3))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_11);
    var_21 = max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((/* implicit */int) var_3))))), (((18446744073709551611ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (var_0)))), (min((var_7), (var_7))))));
}
