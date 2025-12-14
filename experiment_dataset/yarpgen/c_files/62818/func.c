/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62818
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_10 [i_3 - 3] [i_3 - 4] [i_3 - 3] [(unsigned char)19] [(unsigned char)19] [(unsigned char)19] = (signed char)-20;
                            arr_11 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((short) arr_0 [2ULL] [i_3]));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned char) min((-1566887889777251179LL), (((/* implicit */long long int) (signed char)-11))))))));
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) max((((short) ((((/* implicit */_Bool) (signed char)10)) || (((/* implicit */_Bool) (signed char)-11))))), (((/* implicit */short) (unsigned char)242))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-576867839) : (((/* implicit */int) var_10))))))))));
    var_17 = ((/* implicit */unsigned char) var_12);
}
