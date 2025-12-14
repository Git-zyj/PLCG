/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89216
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 100894192)) ? (2838268970U) : (2262939980U)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (var_2))) : (((/* implicit */unsigned long long int) 1456698326U))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_1 [i_1 - 1]))))) ? (((var_2) + (((/* implicit */unsigned long long int) 3716415907U)))) : (((/* implicit */unsigned long long int) 578551389U)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), ((-(-496845495258947109LL))))))));
                var_10 ^= ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (short)32753)) ? (3716415907U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))))) * (3716415907U)))) - (((((((/* implicit */long long int) var_0)) / (-1961943038213462227LL))) * (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_6))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) var_8)))))));
    var_12 &= ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_2 = 3; i_2 < 18; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_6)) - (((/* implicit */int) arr_0 [i_2] [i_2]))))));
        arr_12 [i_2 - 3] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) arr_5 [(signed char)20] [i_2]))))) ? (arr_2 [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 2]))))));
    }
    for (unsigned int i_3 = 4; i_3 < 13; i_3 += 4) 
    {
        arr_17 [i_3] = min((((((/* implicit */int) (unsigned char)255)) * (((((/* implicit */_Bool) 3716415907U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))), ((((~(((/* implicit */int) var_7)))) / (((/* implicit */int) var_6)))));
        var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) < (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    }
}
