/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/986
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (_Bool)1))) >> (max((((/* implicit */long long int) (unsigned short)0)), (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)31))))) : (((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */long long int) (+(arr_1 [i_2])))) : (-6441855507627508938LL)))));
                            arr_14 [i_2] [(signed char)12] [i_1] [i_2] |= ((/* implicit */long long int) (!((_Bool)0)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (short)4593))));
            }
        } 
    } 
    var_16 = min((-8736870960711474958LL), (-1571310261167642954LL));
    var_17 |= ((/* implicit */short) min((8736870960711474969LL), (max((((/* implicit */long long int) var_13)), (6441855507627508920LL)))));
}
