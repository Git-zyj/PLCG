/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65180
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
    var_11 = ((/* implicit */long long int) var_2);
    var_12 *= ((/* implicit */unsigned short) var_9);
    var_13 = ((/* implicit */short) (((((-((+(((/* implicit */int) var_7)))))) + (2147483647))) << (((min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_9))))) - (6773849762154459360ULL)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_9))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_15 = (+(arr_4 [i_1] [i_1] [i_0]));
            var_16 += ((unsigned char) (+(2147483632)));
        }
    }
    for (int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (-2147483633)))) ? (((arr_6 [i_2] [i_2]) - (arr_6 [(_Bool)1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_2] [i_2]))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned char) 1098673513U))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) arr_3 [i_2])) : (-2147483632)))))))))));
    }
    var_19 = ((/* implicit */long long int) ((((var_8) != ((-(2147483631))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5)));
}
