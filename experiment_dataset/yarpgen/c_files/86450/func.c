/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86450
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
    var_14 = ((/* implicit */_Bool) var_5);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((unsigned long long int) (short)29072))))) ? ((~(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))) : (min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) (_Bool)1))))));
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) ((int) (short)-839))) ? (((0ULL) + (((/* implicit */unsigned long long int) 674675760)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) + (arr_2 [i_0])))));
                var_17 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((2143661002277927247LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1])))))))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((int) arr_0 [i_0 - 1]))) : (min((((((/* implicit */_Bool) -923509485)) ? (((/* implicit */unsigned long long int) 1005676049)) : (arr_3 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) var_8)))))))));
                var_19 = ((/* implicit */_Bool) min((max((arr_4 [i_0] [i_1] [i_0 + 1]), (arr_4 [i_0] [i_1] [i_0 - 1]))), (((arr_4 [i_0] [i_0] [i_0 + 1]) / (arr_4 [i_0] [i_0] [i_0 + 1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_20 &= ((/* implicit */unsigned short) (unsigned char)19);
                arr_13 [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 6184178897738590612ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)27))) : (9223372036854775806LL))), (((/* implicit */long long int) arr_9 [i_3] [i_2]))))) | (arr_12 [i_2] [i_2])));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 16686014380288313946ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))) : (1308490563314452701ULL))))) ? (arr_9 [i_2] [6U]) : (((/* implicit */int) ((((/* implicit */_Bool) min((arr_11 [8ULL] [i_3] [i_3]), (((/* implicit */short) arr_8 [i_2]))))) || ((!(((/* implicit */_Bool) arr_11 [0U] [i_3] [i_3])))))))));
                arr_14 [i_3] [i_3] = ((/* implicit */int) arr_7 [i_2]);
            }
        } 
    } 
}
