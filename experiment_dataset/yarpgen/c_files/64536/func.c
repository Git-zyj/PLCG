/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64536
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [18ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (unsigned short)120)))) ? (((((/* implicit */_Bool) 2886647655710100958LL)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (524284))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15))))))) : (((/* implicit */int) var_0))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [(unsigned short)21] [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (unsigned short)37448)), (1632822278)))));
                                var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)65532))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32754)) || (((/* implicit */_Bool) (unsigned short)64370))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13890))))) ? (((unsigned long long int) (unsigned short)48)) : (min((1127424392704181076ULL), (((/* implicit */unsigned long long int) 1255181717))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((unsigned short) 32767));
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_6))));
}
