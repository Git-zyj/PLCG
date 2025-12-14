/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87732
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
    var_11 |= ((unsigned int) (-(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
    var_12 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((3844829067U), (((/* implicit */unsigned int) ((arr_4 [i_1]) || (((/* implicit */_Bool) 14501105833964587400ULL)))))))))))));
                var_14 = var_5;
                var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)192)) ^ (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_16 -= ((/* implicit */_Bool) (~((((_Bool)1) ? (634697230805278799ULL) : (((/* implicit */unsigned long long int) 163540875U))))));
    /* LoopSeq 1 */
    for (signed char i_2 = 2; i_2 < 8; i_2 += 2) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(arr_4 [i_2 + 1])))), (arr_5 [i_2 - 1])));
        arr_8 [i_2 + 2] [i_2 + 2] = ((/* implicit */_Bool) ((unsigned int) (short)8790));
    }
}
