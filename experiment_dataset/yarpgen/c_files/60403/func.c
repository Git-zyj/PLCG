/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60403
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) min((((/* implicit */int) var_8)), ((-(1289493711)))));
                    arr_8 [i_0] [i_1] [i_0 + 2] = ((unsigned int) ((unsigned long long int) (unsigned char)85));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) ((2130760002695776770ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36)))))) != ((+(var_10)))))))))));
                                var_14 -= ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) 494343899U)) ? (var_0) : (arr_0 [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)1032)) : (((/* implicit */int) var_4)))) | (((/* implicit */int) arr_12 [(_Bool)1] [i_1] [18LL] [(unsigned char)14])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) min((((/* implicit */int) var_6)), (((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))))));
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
}
