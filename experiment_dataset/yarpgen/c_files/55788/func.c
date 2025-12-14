/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55788
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_2 [i_1] [i_0]))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) var_12))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) min(((unsigned short)4431), (((/* implicit */unsigned short) (_Bool)0))));
                            arr_11 [i_3] [(_Bool)1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (~(arr_5 [(signed char)7] [i_1])));
                            var_20 += ((((/* implicit */unsigned long long int) ((unsigned int) (signed char)82))) != (18446744073709551593ULL));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) arr_2 [i_4] [i_0])) | (9187343239835811840ULL))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_16 [i_0] [i_4] [i_4] [2U]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1660506439707468002ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            {
                var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_22 [0ULL] [i_6] [0ULL]) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-123))))) ? (((min((72057594037927936LL), (((/* implicit */long long int) (signed char)14)))) ^ (-485429253935475801LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)108)))));
                var_25 = ((int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (_Bool)0)) : (-1490731451)))), ((+(arr_19 [i_7] [i_6])))));
                var_26 *= max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7]))) != (var_0))))) & (((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7] [i_6]))) : (12903258131267057698ULL))))), (((/* implicit */unsigned long long int) (~((((_Bool)0) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (signed char)25))))))));
            }
        } 
    } 
    var_27 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 18446744073709551608ULL)) ? (var_15) : (((/* implicit */long long int) ((69773658) ^ (((/* implicit */int) (_Bool)0))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 136339441844224ULL)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) var_16)))))));
}
