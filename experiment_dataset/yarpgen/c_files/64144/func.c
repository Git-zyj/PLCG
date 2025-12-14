/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64144
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
    var_16 = ((/* implicit */unsigned short) var_1);
    var_17 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_15))))) == ((-(var_9))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (signed char)38)) - (((/* implicit */int) var_7)))))));
                arr_4 [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) 3);
                var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) (!(var_12))))))) ? ((~(arr_1 [(unsigned char)10] [(unsigned char)10]))) : ((~(var_10)))));
                arr_5 [(signed char)17] [i_0 - 1] [i_0] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) > (var_13))))) : (var_0));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_20 ^= ((/* implicit */unsigned short) var_10);
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [6ULL] [i_2])) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [12ULL])));
        var_21 = ((/* implicit */_Bool) var_2);
    }
}
