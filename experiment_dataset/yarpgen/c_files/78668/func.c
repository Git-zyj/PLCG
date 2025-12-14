/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78668
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
    var_12 = ((/* implicit */_Bool) var_7);
    var_13 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) ((unsigned char) var_4))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (var_11)))), (min((var_2), (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (267911168U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9462)))))) : (((unsigned long long int) min((((/* implicit */int) (unsigned char)140)), (var_3))))));
    var_15 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) 333421231)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))) : (var_11))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-97))))))))));
                var_17 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) arr_1 [4LL] [i_1])))))), (max((max((var_1), (((/* implicit */unsigned long long int) 1610612736U)))), (((/* implicit */unsigned long long int) ((signed char) (signed char)-97)))))));
                var_18 &= ((/* implicit */long long int) ((((((((/* implicit */int) (signed char)-97)) - (2139739576))) + (2147483647))) << (((((((/* implicit */int) var_0)) << (((1543163320858571419ULL) - (1543163320858571391ULL))))) % (((var_4) ? (var_3) : (((/* implicit */int) (unsigned short)64512))))))));
                var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)81)) ? (1543163320858571419ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -2139739579)) * (2809191892U)))))), (10607253634614532722ULL)));
            }
        } 
    } 
}
