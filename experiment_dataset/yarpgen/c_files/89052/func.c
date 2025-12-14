/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89052
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
    var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 14613538777141199104ULL)) ? (((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned int) (unsigned char)153)), (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_0)), ((unsigned char)155))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 562400197607424LL)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */unsigned int) var_9);
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 - 2])), (var_3)))) && (((/* implicit */_Bool) max(((unsigned char)156), (arr_4 [5LL] [i_1])))))) || (((/* implicit */_Bool) max((((/* implicit */int) (signed char)-43)), (((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-111)))))))));
                    var_19 = ((/* implicit */int) (unsigned short)62303);
                    var_20 = ((/* implicit */long long int) min((var_20), (arr_2 [i_0])));
                    arr_8 [i_2] = ((/* implicit */signed char) var_6);
                }
            } 
        } 
    } 
}
