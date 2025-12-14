/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7643
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
    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (~(((/* implicit */int) ((474126629U) < (474126629U)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((((/* implicit */int) arr_3 [i_0 - 3] [i_1] [i_0 - 3])), ((-(var_15))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned int) 4407656271507277340ULL);
                            var_20 = ((/* implicit */long long int) (~(474126629U)));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) var_9);
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [i_5] [i_1] [i_5] [i_0]))) % (137241793551329558LL)));
                            var_23 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 474126629U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 474126609U)) ? (474126634U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        {
                            arr_22 [i_1] = ((/* implicit */unsigned long long int) (+(1747563227)));
                            arr_23 [i_7] [i_7] [i_1] = ((/* implicit */short) (unsigned short)65528);
                            arr_24 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 474126609U)))) / (min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_17 [i_1]))))));
                            arr_25 [i_0] [i_6] [i_6] [i_0] [i_0] [i_7] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 474126629U))));
                        }
                    } 
                } 
            }
        } 
    } 
}
