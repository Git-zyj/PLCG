/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84948
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
    var_10 = ((/* implicit */short) ((long long int) -1LL));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0 + 1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)4756)) ^ (((/* implicit */int) (short)6681))))) ? (((((/* implicit */int) var_6)) << (((2095858803U) - (2095858790U))))) : (((/* implicit */int) (short)-4756)))), ((-(((/* implicit */int) var_3))))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-4777)) && (((/* implicit */_Bool) max(((short)4761), (((/* implicit */short) var_1)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_11 += ((/* implicit */unsigned int) (~(max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_6)))))))));
                            var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_1 - 1] [i_0 - 1]), (arr_0 [i_1 - 2] [i_0 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (((((/* implicit */_Bool) ((short) (short)-4747))) ? (max((-2992392951190582023LL), (((/* implicit */long long int) (short)4757)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)4756)) && (((/* implicit */_Bool) var_4))))))))));
                            var_13 ^= ((/* implicit */unsigned int) ((((((arr_8 [7ULL] [i_1] [i_1] [(unsigned short)7] [i_1]) ? (3393433247U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_0] [i_0]))))) < (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -2992392951190582023LL)) ? (3254881468U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2 + 1] [(signed char)13] [i_0]))))), (((((/* implicit */_Bool) 14998683885511708581ULL)) ? (1152931767793686416ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2])))))))));
                            var_14 = ((/* implicit */unsigned short) ((((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))))) && (((/* implicit */_Bool) var_1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((1515304633U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))))), (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 10231874631642696403ULL)))))))) / (min((((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (short)9))))), (max((((/* implicit */long long int) (short)-4757)), (9223372036854775782LL)))))));
}
