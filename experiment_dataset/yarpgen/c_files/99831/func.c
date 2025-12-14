/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99831
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
    var_12 = ((/* implicit */long long int) 7445254785754710873ULL);
    var_13 = ((/* implicit */long long int) var_5);
    var_14 = ((/* implicit */unsigned short) min((var_14), (var_5)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_15 &= ((/* implicit */unsigned short) ((((var_2) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) - (var_0)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9)))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */int) ((min((4353298837252725783LL), (((/* implicit */long long int) var_9)))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3))))))), (((((/* implicit */int) var_3)) % (((/* implicit */int) ((short) (unsigned short)5))))))))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((unsigned short) ((((var_4) - (arr_0 [i_2] [(unsigned short)7]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1] [(unsigned short)6]))))))));
                                arr_18 [i_0] [i_0] [i_1] [(signed char)7] [(signed char)4] [i_3 + 1] [i_4] = var_9;
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] [i_1] = ((/* implicit */unsigned short) (~(((long long int) (unsigned short)11758))));
                var_18 = (unsigned short)53778;
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_19 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) max((arr_12 [4LL] [i_1] [4LL] [(unsigned short)4] [i_1]), (var_1)))), (((((/* implicit */_Bool) var_4)) ? (arr_16 [i_0] [i_1] [i_1] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38300))))))), (((/* implicit */unsigned long long int) arr_4 [i_5] [i_1]))));
                    arr_22 [i_0] [8ULL] [i_5] [i_0] = ((/* implicit */unsigned short) ((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                }
            }
        } 
    } 
}
