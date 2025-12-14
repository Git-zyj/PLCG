/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59471
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) ((signed char) (~(-2697292551621617850LL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_13 ^= ((/* implicit */signed char) var_1);
                            var_14 = ((/* implicit */unsigned int) min((var_14), (arr_2 [i_0] [(signed char)11])));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
    var_15 -= ((/* implicit */long long int) ((((/* implicit */long long int) -1803571863)) <= (min((((long long int) var_6)), (((/* implicit */long long int) var_8))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 2; i_4 < 11; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            {
                var_16 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) -7439311771851908205LL)), (min((((((/* implicit */_Bool) var_4)) ? (8423430539054046444ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))))), (((/* implicit */unsigned long long int) min((67108608U), (((/* implicit */unsigned int) (signed char)-78)))))))));
                var_17 -= ((/* implicit */signed char) 2064026722U);
                arr_15 [i_4] [i_5] = arr_0 [i_5];
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_3 [i_4 + 2]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)127)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_9))))) : (((long long int) var_1))))));
}
