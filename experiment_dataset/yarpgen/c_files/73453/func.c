/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73453
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
    var_12 = ((/* implicit */int) ((unsigned short) (-(var_3))));
    var_13 = ((((((/* implicit */long long int) ((/* implicit */int) (!(var_8))))) % (min((((/* implicit */long long int) 3048099476U)), (var_2))))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_14 = arr_5 [i_2] [i_3];
                                var_15 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1995436009581409321LL)) ? (1666476214626355289LL) : (((/* implicit */long long int) 771376706U))))), (max((((/* implicit */unsigned long long int) ((unsigned short) arr_4 [(signed char)16] [(signed char)16]))), (16415028119741425974ULL)))));
                                var_16 |= ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((min(((unsigned short)13892), (((/* implicit */unsigned short) (signed char)115)))), (((/* implicit */unsigned short) arr_3 [i_0])))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1]) ^ (arr_9 [i_0] [i_0] [i_0] [i_1] [i_0]))))));
            }
        } 
    } 
}
