/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85926
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) var_1)) : (min((var_9), (((/* implicit */unsigned int) var_0))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), ((-(arr_4 [18ULL] [i_1] [i_1 + 1])))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((max((arr_3 [(_Bool)1] [i_1 - 1]), (((/* implicit */unsigned int) max(((short)6077), ((short)10)))))) | (((/* implicit */unsigned int) min((min((((/* implicit */int) (unsigned short)55268)), (arr_0 [i_0] [i_1]))), (((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) (unsigned char)126)))))))));
                var_14 = ((/* implicit */int) (-(max((arr_3 [i_1 + 1] [i_1 - 1]), (arr_3 [i_1 + 1] [i_1 - 1])))));
                var_15 = max((max((2494866130070838042ULL), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1])))), (((/* implicit */unsigned long long int) (+(-7647327824538592110LL)))));
            }
        } 
    } 
}
