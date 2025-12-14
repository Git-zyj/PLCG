/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89715
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
    var_13 = ((/* implicit */unsigned short) (((-(var_11))) | (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4095))) == (var_11)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) (_Bool)1)) - (-924434275)))));
                var_14 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))))))));
                var_15 = ((/* implicit */short) max((((((/* implicit */int) var_3)) + (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_0 + 3])))))));
                arr_7 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (arr_0 [i_0 + 3]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_6);
    var_17 = ((/* implicit */long long int) max(((~(((((/* implicit */int) var_6)) ^ (-924434274))))), ((~(((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) var_11)))))))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_4 [i_3 - 1]), (((/* implicit */signed char) var_2))))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((18446744073709551615ULL), (18446744073709551598ULL)))))))));
                    var_19 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)127))))) % (max(((~(((/* implicit */int) (signed char)127)))), ((-(((/* implicit */int) var_0))))))));
                    arr_17 [(short)3] = ((/* implicit */_Bool) (~((~(((((/* implicit */int) arr_15 [i_2] [i_3] [1ULL])) / (((/* implicit */int) arr_4 [i_3]))))))));
                    arr_18 [i_3] = max((max((13368514221182596448ULL), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((arr_0 [i_3 + 1]) - (12839787959631618861ULL)))))));
                    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_11 [i_2] [i_4])))), (((/* implicit */int) var_7))))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 + 1]))) + (arr_1 [i_3 + 1])))));
                }
            } 
        } 
    } 
}
