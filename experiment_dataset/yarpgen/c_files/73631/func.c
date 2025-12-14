/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73631
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(min(((+(2614835795U))), (((/* implicit */unsigned int) (unsigned char)9))))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) << (((var_4) - (2067295976U)))))))));
                var_16 = arr_0 [i_0];
                var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) 548663904874185312ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((17898080168835366298ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) + (((((1857486612890470681LL) != (((/* implicit */long long int) 2614835779U)))) ? (((((/* implicit */_Bool) 1680131517U)) ? (548663904874185312ULL) : (((/* implicit */unsigned long long int) -1401993787)))) : (((/* implicit */unsigned long long int) (~(690951518U))))))));
            }
        } 
    } 
    var_18 = max((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (((((/* implicit */_Bool) 3462570192U)) ? (2614835786U) : (4020383328U))))), (((/* implicit */unsigned int) (+(((int) var_9))))));
    var_19 = ((/* implicit */int) ((1680131510U) & (((/* implicit */unsigned int) 2147483647))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_3] [i_3] [i_4] [i_3]) + (2147483627)))) ? (((/* implicit */int) ((_Bool) arr_10 [i_2] [i_2] [i_2] [i_2]))) : (((/* implicit */int) ((unsigned short) arr_10 [i_4] [i_3] [i_2] [i_2])))));
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) 2574918023U)) ? ((-(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_9 [i_2] [i_2]))))))), (((((/* implicit */_Bool) 2614835795U)) ? ((~(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2614835782U)) && (((/* implicit */_Bool) arr_8 [i_2]))))))))));
                }
            } 
        } 
    } 
}
