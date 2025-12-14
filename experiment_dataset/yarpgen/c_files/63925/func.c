/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63925
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
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [(signed char)9] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_2), ((unsigned char)107)))) ^ ((~(((/* implicit */int) (_Bool)0))))))) != (((((/* implicit */_Bool) (signed char)115)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1294547443U)))));
                    arr_11 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) % (var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_11)))) != ((+((-9223372036854775807LL - 1LL)))))))) : (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) ^ (-1043062936849693037LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    var_16 = ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (min((((/* implicit */long long int) var_12)), (-4573539118316334389LL))))) != (((/* implicit */long long int) ((/* implicit */int) ((max((751674824U), (((/* implicit */unsigned int) (unsigned short)13304)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                    var_17 = ((/* implicit */short) (+(((/* implicit */int) max(((unsigned char)176), (((/* implicit */unsigned char) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max(((signed char)-1), ((signed char)34)));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((max((261632U), (((/* implicit */unsigned int) (_Bool)1)))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), ((unsigned short)0)));
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)32)), ((unsigned char)233)))) - (((/* implicit */int) var_4))));
}
