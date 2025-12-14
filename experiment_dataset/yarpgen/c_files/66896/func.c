/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66896
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_1] [i_2] = max((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_1]) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_2] [i_1] [15ULL] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 += ((arr_3 [i_0]) & (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_4 - 2])), (arr_3 [i_4 - 4]))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) max((arr_4 [(_Bool)1]), (3350026777475421618ULL))))) & (((/* implicit */int) (unsigned short)65521)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_19 = min((((/* implicit */unsigned long long int) (unsigned short)65521)), (((4935032789559183587ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                                var_20 = ((/* implicit */signed char) ((unsigned long long int) ((signed char) arr_13 [i_0] [i_1] [i_2] [i_6 - 1] [i_6 - 1] [i_6])));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((((/* implicit */_Bool) 3350026777475421597ULL)) ? (14430333525019211256ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) * (arr_1 [i_0])))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((min((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_2] [3ULL] [i_1])) ? (5510571289083882ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52452))))), (arr_13 [i_1] [i_2] [i_6 - 3] [i_6] [i_6] [i_6 - 2]))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_2]))) + (arr_7 [i_6] [i_1] [i_2] [i_6]))))))))));
                                arr_20 [i_5] [i_5] [i_5] [i_2] [i_5] [(unsigned short)7] [i_5 - 1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_2 [(signed char)18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20)))))) ? (((/* implicit */int) ((unsigned short) arr_1 [9ULL]))) : ((-(((/* implicit */int) arr_11 [i_0])))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_18 [i_1] [i_1]))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_2]))))) ? (arr_7 [i_0] [i_0] [i_1] [i_2]) : (((17819423505416973732ULL) % (arr_4 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 13511711284150368028ULL))))))))))));
                    var_24 = (((!(((/* implicit */_Bool) arr_2 [i_0])))) || (((/* implicit */_Bool) min((((unsigned long long int) arr_13 [i_0] [i_0] [(unsigned short)16] [(unsigned short)4] [i_0] [i_0])), (max((((/* implicit */unsigned long long int) arr_5 [3ULL] [3ULL])), (arr_16 [i_2] [i_2] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13098)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (unsigned short)47))));
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_3))));
}
