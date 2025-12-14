/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85513
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (signed char i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_13 *= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-105)) * (((/* implicit */int) (signed char)-126))));
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((int) ((((/* implicit */unsigned int) var_8)) / (var_0))));
                                arr_13 [i_0] [i_3 - 3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned short) ((-4133344293416315474LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-51))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) 302870659)), (-4133344293416315458LL)));
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) 0)) : (3002597727U)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (var_7))))))), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)0))) * (4133344293416315452LL))) : (((/* implicit */long long int) max((2790907920U), (((/* implicit */unsigned int) 1346530034)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (signed char i_7 = 2; i_7 < 20; i_7 += 1) 
            {
                {
                    arr_21 [i_7] [i_7] [i_7] = ((signed char) ((signed char) (short)0));
                    arr_22 [i_5] [i_5] [i_7 + 1] [i_7] = ((/* implicit */short) min((((((/* implicit */_Bool) 5241466002763945962LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))) : (2790907928U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_7 - 1])) || (((/* implicit */_Bool) arr_15 [i_7 + 1])))))));
                    arr_23 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)119))))), ((+(4105944472249752091ULL))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) (-(0)))))));
    var_17 = ((unsigned int) ((14896588279089233996ULL) << (((((/* implicit */int) ((signed char) 6678859737334399997ULL))) + (14)))));
}
