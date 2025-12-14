/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57933
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 8343455148405230888LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0]))), ((-(arr_2 [i_0])))));
                    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 2581957082396395255ULL)))) || ((!(((/* implicit */_Bool) ((unsigned int) arr_2 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) min((min((arr_2 [i_0]), (((/* implicit */unsigned long long int) -6788358404979655821LL)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
                                var_15 = ((/* implicit */unsigned short) min((548989697U), (((/* implicit */unsigned int) (_Bool)1))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (min((arr_2 [i_4]), (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-8878981467011955733LL))), (((/* implicit */long long int) arr_5 [i_4] [i_4] [i_4])))))))));
                                var_17 = ((/* implicit */unsigned char) min((((long long int) arr_10 [i_3] [i_2 - 1] [i_1 + 1] [i_0 + 1])), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_8)), (var_9))))));
                            }
                        } 
                    } 
                    var_18 = arr_5 [i_1] [i_2 - 1] [i_2 - 1];
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_18 [i_5] [(unsigned char)0] [i_6 + 1]))));
                arr_19 [i_5] [i_6 - 1] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_17 [i_5] [i_5] [i_5])) + (((((/* implicit */int) (unsigned short)43444)) + (((/* implicit */int) (unsigned short)0))))))));
            }
        } 
    } 
}
