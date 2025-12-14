/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55056
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
    var_19 = ((/* implicit */unsigned long long int) var_3);
    var_20 = ((/* implicit */_Bool) min((((/* implicit */int) var_7)), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)35))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)12] [i_1 - 2] [i_3] [i_4])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1 - 3] [i_2] [1LL])) : (((/* implicit */int) arr_10 [(short)13] [i_1] [i_1 - 4] [i_3] [i_1 - 4]))))));
                                var_22 &= ((/* implicit */unsigned long long int) ((_Bool) (~(arr_3 [i_0] [i_3] [i_0]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((short) (-((-(((/* implicit */int) arr_14 [0LL]))))))))));
                    var_24 = ((unsigned long long int) arr_10 [i_1] [i_1] [i_0] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 146769225856654161ULL)) ? (-1358665874511729683LL) : (((/* implicit */long long int) 728692991))))) <= ((((_Bool)1) ? (arr_4 [i_0] [i_1] [i_5]) : (((/* implicit */unsigned long long int) arr_18 [i_2] [i_1 + 1] [i_0] [i_5] [i_6] [i_0]))))))), (((signed char) arr_20 [i_5 - 3] [i_5 - 3] [i_5] [i_5] [i_6]))));
                                var_26 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_5 + 1] [i_6] [i_6])) ? (-633924724) : (((/* implicit */int) var_7)))))) >= (((/* implicit */int) (signed char)-17))));
                                var_27 &= ((/* implicit */long long int) (-(min((((unsigned long long int) (signed char)113)), (((/* implicit */unsigned long long int) 1358665874511729672LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-83))))))));
    /* LoopNest 2 */
    for (short i_7 = 1; i_7 < 11; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 3) 
        {
            {
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (~((~((~(((/* implicit */int) var_1)))))))))));
                arr_26 [i_8] [i_7] [i_8] = min(((short)-19060), (((/* implicit */short) (signed char)-83)));
                var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_8] [i_7] [i_8 - 1] [i_8]))) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [4] [i_8 + 3] [4] [i_7])) ? (3478732987432751090LL) : (1358665874511729683LL)))) : (((((/* implicit */_Bool) (signed char)-86)) ? (14082290553523173276ULL) : (13018221111615777948ULL)))))));
                arr_27 [i_7 + 1] [i_8] [i_8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(arr_2 [i_7 + 1])))))) ? (arr_13 [i_7 + 2] [2LL] [i_8] [i_8] [i_7]) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-9729)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (short)28197)))) << (((((/* implicit */int) min((var_5), (var_5)))) - (16048))))))));
                var_31 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) 3478732987432751105LL))), ((~((~(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
