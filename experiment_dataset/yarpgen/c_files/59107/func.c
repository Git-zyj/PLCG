/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59107
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_15 = ((unsigned long long int) arr_1 [i_1 - 2]);
                                arr_14 [i_1] [i_4] [11LL] [i_3] [i_4] = ((/* implicit */short) (~(((((/* implicit */long long int) ((4121590531U) | (2503967405U)))) | (min((((/* implicit */long long int) var_7)), (var_6)))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 173376764U)) | (0ULL)));
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_0] = ((/* implicit */_Bool) min((arr_10 [i_5 - 2] [i_5] [i_5] [i_5]), (((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-122))))));
                            arr_24 [i_0] [i_1] [i_5] = ((/* implicit */signed char) ((((11172010206637099791ULL) << (((/* implicit */int) arr_12 [i_6] [i_1] [i_6] [i_6] [i_1 + 2])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [(signed char)8] [i_1 + 1] [i_0] [(signed char)8])) ? (var_10) : (var_6))))));
                            var_16 = min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 4121590531U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((((((/* implicit */unsigned long long int) 4225113982351760013LL)) | (((4539628424389459968ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))) | (((/* implicit */unsigned long long int) var_12)));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? ((+(min((((/* implicit */long long int) var_13)), (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) var_12)) : (18446744073709551615ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    var_19 = ((/* implicit */short) max((var_19), (((short) var_12))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_4))));
}
