/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86797
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
    for (int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)20606))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (364665817U)))))));
                var_20 = ((/* implicit */short) (-(min((((((/* implicit */_Bool) -9223372036854775794LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23758)))), (((/* implicit */int) (unsigned short)13710))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)13706));
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) - (2613049924287035211LL)))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (924462590565774262ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)13700)))))))));
    var_23 = ((((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) (_Bool)1)), (-4353504005861809611LL))))) | (((/* implicit */int) var_17)));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                {
                    arr_11 [i_3] [i_3] [i_4 - 1] = ((/* implicit */long long int) ((_Bool) (~(12062733082248511963ULL))));
                    arr_12 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 3956454371U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)51825)))))));
                }
            } 
        } 
    } 
}
