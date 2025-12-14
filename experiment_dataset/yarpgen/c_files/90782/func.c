/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90782
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 -= ((short) min((arr_2 [i_1 - 2] [i_1 - 1]), (arr_2 [i_1 + 2] [i_1 + 2])));
                var_11 = ((/* implicit */long long int) ((_Bool) arr_1 [(unsigned short)9]));
                arr_5 [i_0] [i_1] &= ((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_0))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) min((((unsigned int) var_7)), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)6869)))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_0)))))))));
    var_13 = ((/* implicit */unsigned long long int) var_7);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_4))))))) >= (3989008254508825087LL)));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 9; i_4 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_11 [i_2] [i_3])))))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [i_3]), (((/* implicit */unsigned short) var_5))))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1)))))))))))));
                    arr_14 [i_2] [i_2] [i_4] = min(((_Bool)1), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7643574289002394579LL)) ? (((/* implicit */int) (unsigned short)40672)) : (((/* implicit */int) var_0))))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((var_9) * (((/* implicit */long long int) ((/* implicit */int) var_0))))) / (((((/* implicit */_Bool) -1012231120)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    } 
}
