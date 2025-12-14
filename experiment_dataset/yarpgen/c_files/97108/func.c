/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97108
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) arr_3 [i_0 - 1] [0ULL]));
                var_12 &= (_Bool)1;
            }
        } 
    } 
    var_13 &= ((/* implicit */long long int) (signed char)115);
    var_14 = ((/* implicit */signed char) var_6);
    var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned int) (signed char)115))) ? (((14774260980411752798ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) var_10))));
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((arr_8 [i_2] [i_2]) < (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_2] [i_2]))))) : (arr_8 [i_2] [i_2]))))))));
        var_17 = ((/* implicit */unsigned long long int) 69805794224242688LL);
        var_18 = ((/* implicit */int) (unsigned char)60);
        var_19 = ((/* implicit */long long int) arr_8 [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) var_5);
        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_3] [i_3]))));
        var_22 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (signed char)-115))))));
    }
}
