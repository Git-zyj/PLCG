/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77094
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [9ULL] [(_Bool)1]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (~(534127958846468820ULL)));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 534127958846468806ULL)) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(var_9)))), (arr_2 [i_3 - 1] [i_1]))))));
                            var_20 = ((unsigned char) ((((/* implicit */_Bool) 3155593435709468163LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 1] [4LL] [i_3 + 4]))) : (534127958846468838ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((unsigned char) var_5));
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (var_6)))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) 17912616114863082795ULL)) ? (534127958846468820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))))));
}
