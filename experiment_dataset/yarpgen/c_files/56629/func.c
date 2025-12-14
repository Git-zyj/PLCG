/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56629
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 8; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (signed char)120);
                        arr_11 [i_0 - 2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((((var_8) + (2147483647))) >> (((max((32767), (((/* implicit */int) (signed char)-102)))) - (32756))))) + (min((((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) < (var_15)))), (((int) var_6))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_4 = 4; i_4 < 8; i_4 += 3) 
        {
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */signed char) ((-336213928) < (-336213928)))), (min(((signed char)-98), (((/* implicit */signed char) (_Bool)1))))));
            arr_15 [i_0] = ((/* implicit */long long int) var_14);
        }
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 2) 
        {
            {
                arr_20 [i_5] [i_6] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_15))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) var_3)), (var_2)))))))));
                var_17 = ((/* implicit */unsigned long long int) min((max((min((-574155931543225413LL), (var_4))), (((/* implicit */long long int) 642093333)))), (((/* implicit */long long int) var_6))));
                arr_21 [(_Bool)0] &= ((/* implicit */_Bool) (-(642093333)));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_11);
    var_19 |= ((/* implicit */long long int) ((signed char) max((max((-1874543678532829800LL), (((/* implicit */long long int) 132927743)))), (((/* implicit */long long int) var_12)))));
}
