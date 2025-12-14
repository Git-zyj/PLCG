/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70001
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
    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-16)) ? (8834745372215739190ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61603))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (-1606481603) : (-1606481603)))) ? (((6841869352104486054ULL) * (((/* implicit */unsigned long long int) -795475816)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1869541288387432049LL)) ? (13739490592747236088ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
    var_19 = var_10;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_1] [i_3] [i_2] [i_3 - 3] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-29LL));
                            var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (97309037) : (-1606481603)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || (((/* implicit */_Bool) arr_4 [i_0] [7])))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) 2147483647)) : (3758096384U)))))));
                            var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (4294967295U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0])))))))) | (arr_9 [i_2])));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0 + 4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) (+(0U))))));
            }
        } 
    } 
}
