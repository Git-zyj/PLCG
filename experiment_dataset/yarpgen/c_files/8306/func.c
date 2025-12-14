/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8306
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
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((_Bool) arr_4 [i_0 + 1])) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) && (((/* implicit */_Bool) arr_4 [i_1]))))) ^ (((/* implicit */int) max((var_10), (arr_4 [i_0 + 3])))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_2)))))))));
                    arr_10 [i_2] [i_2] = ((/* implicit */signed char) arr_7 [i_1] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 4; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                arr_22 [i_3] [i_3] [i_3] [i_4] [i_4] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 67553994410557440LL)) ? (-208754787) : (-208754787)));
                                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) -208754787))));
                                var_13 = ((/* implicit */long long int) var_6);
                                arr_23 [i_7] = ((/* implicit */int) (unsigned short)65531);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 + 1])))))) < (max((2305843004918726656ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))))))));
                    arr_24 [i_3] [i_5 - 1] = ((/* implicit */short) ((((/* implicit */int) var_10)) ^ (((((/* implicit */int) max(((signed char)(-127 - 1)), (var_7)))) & (((/* implicit */int) var_10))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)0))))) / (min((((/* implicit */unsigned long long int) (+(arr_1 [i_3])))), (max((((/* implicit */unsigned long long int) (unsigned char)23)), (16140901068790824957ULL)))))));
                    arr_25 [i_3] [i_4] [i_4] = max((((((/* implicit */_Bool) -208754786)) ? (18281675766131756275ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((arr_5 [i_3 - 1] [i_5 - 1]) - (1658747233U)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_5);
}
