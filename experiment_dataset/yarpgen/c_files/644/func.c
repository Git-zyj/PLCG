/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/644
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (unsigned char)32;
                    arr_8 [i_0] [4ULL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (1131590291522036728ULL))) ? (var_1) : (4486269521212155279ULL)))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((var_7) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) == (((/* implicit */int) ((unsigned char) 13438338325153634521ULL)))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_3)) >> (((/* implicit */int) (_Bool)1)))))))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 4; i_3 < 24; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 4) 
        {
            for (unsigned char i_5 = 2; i_5 < 24; i_5 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) arr_11 [i_5 - 1] [i_3 - 1]));
                    arr_17 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)92)) ? (((((_Bool) var_8)) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (_Bool)1)))))))) : (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0))))), (13574850481624551533ULL)))));
                }
            } 
        } 
    } 
}
