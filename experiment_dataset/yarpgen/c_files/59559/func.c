/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59559
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((max((4843226656389262945LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65530)) >= (((/* implicit */int) (_Bool)1))))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))));
        var_20 ^= ((/* implicit */unsigned long long int) ((signed char) (((_Bool)0) || (((/* implicit */_Bool) (unsigned short)6)))));
        var_21 |= ((/* implicit */signed char) min((((long long int) ((long long int) (unsigned short)6))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-13591)) >= (((/* implicit */int) (unsigned short)65527))))) / (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 1132503762U))))))))));
    }
    var_22 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((-944305491816115394LL) + (((/* implicit */long long int) 878134349U)))) != (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))))) != (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-77)) && (((/* implicit */_Bool) -1491084881))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) + (0U)))))));
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((((_Bool)0) || ((_Bool)1))) || (((/* implicit */_Bool) ((signed char) (_Bool)1)))))), (max((12398852705781191593ULL), (((/* implicit */unsigned long long int) 6718160240887378142LL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) 11951078275840729008ULL))));
        arr_8 [i_1] = ((/* implicit */long long int) (_Bool)1);
        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (unsigned short)3480)))))) + (((unsigned long long int) 6466299619116943593LL))));
    }
}
