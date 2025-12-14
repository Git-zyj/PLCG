/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5644
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_2] [i_1])) : (((/* implicit */int) var_13)))) - (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 14141054775253009199ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_1] [i_0] [i_1])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) -489124519)) : (arr_0 [i_0] [i_0]))))), (min((max((((/* implicit */unsigned long long int) 6793384659041609072LL)), (13375751244852055184ULL))), (((/* implicit */unsigned long long int) (_Bool)0))))));
                        var_20 = ((/* implicit */_Bool) -5387741831162444695LL);
                        var_21 = min((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_15)));
                        var_22 = min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_3] [i_2])), (arr_2 [i_0] [i_1] [i_1]));
                    }
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_5))))));
    var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (var_10)))) > (((unsigned long long int) var_15)))))));
}
