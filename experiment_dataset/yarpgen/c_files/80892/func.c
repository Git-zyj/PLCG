/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80892
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = min((arr_4 [i_0] [i_0 + 2] [i_1]), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)64)) * (((/* implicit */int) (short)-14539)))) >= (((/* implicit */int) min(((unsigned char)56), ((unsigned char)199))))))));
                var_14 = ((/* implicit */int) (unsigned char)64);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            {
                arr_10 [i_3 - 2] = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)53)) >= (arr_0 [i_2])))), (max((((/* implicit */unsigned char) (_Bool)1)), (arr_9 [i_3 - 1]))))))));
                arr_11 [i_2 + 2] [i_3 - 2] [i_2 + 2] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned char)202))));
                var_15 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((((/* implicit */int) arr_2 [i_3])) - (((/* implicit */int) (unsigned char)224)))), (1834592391)))) - (((((/* implicit */unsigned int) ((/* implicit */int) (short)-15671))) + (33554416U)))));
                arr_12 [i_2 - 1] [i_3 - 2] = ((/* implicit */signed char) var_8);
                arr_13 [i_2] [i_3] = ((/* implicit */long long int) var_9);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(4261412888U))) ^ (((((/* implicit */_Bool) -1834592404)) ? (3561767528U) : (var_9)))))) ? (((/* implicit */int) (unsigned char)96)) : ((+(((((/* implicit */_Bool) 904955110)) ? (-1247908643) : (((/* implicit */int) (_Bool)0))))))));
}
