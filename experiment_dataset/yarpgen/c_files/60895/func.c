/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60895
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 |= (!(((/* implicit */_Bool) ((signed char) max((arr_4 [i_0] [i_0 + 1] [i_0]), (((/* implicit */int) arr_3 [(_Bool)1])))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((59119834) | (((/* implicit */int) (_Bool)1))))))) | (((min((arr_2 [i_0]), (((/* implicit */unsigned int) 1821697178)))) | (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (arr_4 [i_0 + 1] [i_0] [i_0 + 1]))))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 3261722998909923363ULL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 9; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 7; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-59119835) / (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)125)))) : (max((arr_4 [i_2] [i_3 + 1] [i_2]), (((/* implicit */int) arr_13 [i_2] [i_3 - 2] [i_3 - 2]))))));
                                arr_19 [i_4] [i_3] [i_4] [i_5 + 3] [i_5 + 3] = ((/* implicit */long long int) (-(arr_6 [i_2])));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */_Bool) min((((((/* implicit */int) arr_9 [i_4])) - (((/* implicit */int) arr_9 [i_3 - 1])))), (((/* implicit */int) var_3))));
                }
            } 
        } 
        var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-123)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_2])) ? (49994622U) : (((/* implicit */unsigned int) arr_4 [i_2] [i_2] [i_2])))) - (3683480088U))))));
    }
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
    {
        arr_22 [i_7] = ((/* implicit */_Bool) (((((~((~(((/* implicit */int) (short)-32759)))))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_4 [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) 59119861)) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-4177749393335272237LL))))) - (59119845LL)))));
        var_25 |= arr_0 [i_7];
    }
    var_26 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) (~(var_4)))))));
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_1))));
}
