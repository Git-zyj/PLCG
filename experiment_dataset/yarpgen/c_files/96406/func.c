/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96406
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
    var_10 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) max(((short)31), (((/* implicit */short) (signed char)-121))))))));
    var_11 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) var_2);
                                arr_14 [i_0] [i_1 + 2] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) != (arr_2 [i_1 - 1]))) && (((((/* implicit */unsigned long long int) max((-797605932), (((/* implicit */int) (signed char)-89))))) >= (((((/* implicit */unsigned long long int) arr_4 [i_4] [0] [i_4])) + (1468798481170948988ULL)))))));
                                var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) max((16977945592538602610ULL), (((/* implicit */unsigned long long int) (signed char)-89))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [11ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) < (max((16977945592538602627ULL), (16977945592538602627ULL)))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((var_14), ((!(((/* implicit */_Bool) (unsigned short)58025))))));
    var_15 = ((/* implicit */unsigned short) var_0);
}
