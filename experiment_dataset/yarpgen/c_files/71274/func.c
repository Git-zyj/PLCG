/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71274
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
    for (short i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 4; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((var_8) / (((/* implicit */int) arr_6 [i_1] [i_2])))) < (((/* implicit */int) arr_7 [i_0 - 3] [i_1] [i_1]))))))))));
                            var_14 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) (unsigned short)10979)) ? (((/* implicit */int) arr_7 [i_1] [i_2] [i_3 - 1])) : (((/* implicit */int) (signed char)-76)))), (((((/* implicit */int) (signed char)75)) / (((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 19; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            arr_18 [i_0 + 3] [i_0 + 3] [i_4] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 16519357330078922376ULL)) ? (((/* implicit */int) (unsigned char)43)) : (-811412179)))) | (((unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_3 [i_0])))))));
                            arr_19 [i_0] [i_0] [i_0 + 2] [6U] [6U] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!((_Bool)1)))), (var_10)));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26957)) / (((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (short)-20337)))))))));
                            arr_20 [i_0] = ((/* implicit */long long int) ((arr_10 [i_4 - 2] [i_1] [i_4] [i_0 - 2]) >> (((((((/* implicit */_Bool) 1302777931618175945ULL)) ? (((/* implicit */unsigned long long int) -1255795472)) : (arr_10 [i_4 - 1] [i_1] [i_4 - 2] [i_0 + 1]))) - (18446744072453756091ULL)))));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */unsigned long long int) 616995485)) : (1927386743630629239ULL))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (signed char)62))))), (((((/* implicit */_Bool) var_0)) ? (arr_4 [i_0 - 1] [i_0 - 1]) : (min((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])), (arr_13 [i_0] [i_0] [i_0])))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_8 [i_0 + 1] [i_0] [i_0 - 2] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))) * (((((/* implicit */_Bool) 16777215ULL)) ? (arr_11 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (9223372036854775807LL)));
}
