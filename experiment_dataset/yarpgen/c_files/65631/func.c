/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65631
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
    var_11 = ((/* implicit */unsigned short) -2014101425);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
                var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1 + 2]))))) ? (((/* implicit */int) (short)115)) : (((int) (unsigned char)17))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 3811963154938597761ULL)) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-97)))))))) >= (((((/* implicit */_Bool) (-(2014101431)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_1 + 1] [(signed char)0])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (signed char)-119)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
                {
                    var_15 ^= (short)8555;
                    var_16 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((-(arr_7 [i_0] [i_1 - 1] [i_0])))))));
                }
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    var_17 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((-2014101434), (((/* implicit */int) var_2)))))));
                    var_18 &= ((/* implicit */signed char) ((int) min((((/* implicit */unsigned short) var_5)), (var_0))));
                    var_19 += ((/* implicit */unsigned short) min((-106491726), (((/* implicit */int) (unsigned char)20))));
                }
                arr_11 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((unsigned int) 336783539))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (((~(((/* implicit */int) (unsigned short)50553)))) >= (((/* implicit */int) (unsigned short)14978)))))));
            }
        } 
    } 
    var_20 += ((/* implicit */signed char) (unsigned char)240);
    var_21 = ((/* implicit */unsigned long long int) (~(min(((~(5425336297847356599LL))), (((/* implicit */long long int) (unsigned char)23))))));
}
