/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6675
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
    var_15 = ((/* implicit */unsigned short) (+(4006373617979123842ULL)));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (((+(4294967295U))) < (1685889365U))))) + (((((/* implicit */_Bool) (short)21681)) ? (((4523296629522029767LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56967))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)116)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((-4523296629522029767LL) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)3649)) % (((/* implicit */int) arr_1 [i_1]))))) < (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) | (-4523296629522029767LL))))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)56967)) % (((/* implicit */int) ((short) (unsigned short)32768)))))), (((((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) | (-4523296629522029768LL))) & (((/* implicit */long long int) (~(((/* implicit */int) (signed char)35)))))))));
                var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) (unsigned short)56961)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) < (3112708167421537320LL))))) % (641050753U)));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3769))) >= (-4523296629522029786LL)))))));
            }
        } 
    } 
}
